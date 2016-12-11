#if __STDC_VERSION__ >= 199901L
#define  _XOPEN_SOURCE    600
#else
#define  _XOPEN_SOURCE    700
#endif /* __STDC_VERSION__ */

#include "commons.h"

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <time.h>

static unsigned int g_sig_alarm = 0;
static int          g_running;

static int setup_timer(struct itimerval *tv)
{
	tv->it_interval.tv_sec  = 0;
	tv->it_interval.tv_usec = 1000;
	tv->it_value.tv_sec     = 0;
	tv->it_value.tv_usec    = 1000;

	if (setitimer(ITIMER_REAL, tv, NULL)) {
		fprintf(stderr, "Error setup itimer\n");
		return -1;
	}

	return 0;
}

void signal_handler(int signum)
{
	switch (signum) {
	case SIGALRM:
		g_sig_alarm++;
		break;
	case SIGINT:
		g_running = 0;
		break;
	}
}

static int setup_sig_handler(struct sigaction *sa)
{
	sa->sa_handler = signal_handler;
	sigemptyset(&(sa->sa_mask));
	sa->sa_flags = 0;

	if (sigaction(SIGALRM, sa, 0)) {
		fprintf(stderr, "Error setup signal handler\n");
		return -1;
	}

	if (sigaction(SIGINT, sa, 0)) {
		fprintf(stderr, "Error setup signal handler\n");
		return -1;
	}

	return 0;
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	struct sigaction sa;
	struct itimerval tv;

	if (setup_sig_handler(&sa))
		return -1;

	if (setup_timer(&tv))
		return -1;

	g_running = 1;

	unsigned int user_alarm = 0;
	struct timespec previous;
	struct timespec current;
	struct timespec difference;

	clock_gettime(CLOCK_MONOTONIC, &previous);

	while (g_running) {
		pause();

		while (g_sig_alarm != user_alarm) {
			user_alarm++;

			clock_gettime(CLOCK_MONOTONIC, &current);
			timespec_diff(&previous, &current, &difference);

			if (difference.tv_nsec > 2000000)
				printf("%u\n", difference.tv_nsec / 1000);

			previous.tv_sec = current.tv_sec;
			previous.tv_nsec = current.tv_nsec;
		}
	}

	return 0;
}
