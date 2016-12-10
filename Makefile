#
# C build
#

CC = gcc
LD = gcc

CLFAGS = -g -O0 -Wall -Wextra --std=c99
LDFLAGS = -g -Wall -Wextra
CLIBS = -lrt

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $^

#
# C++ build
#

CPP = g++
LDPP = g++

CPPFLAGS = -g -O0 -Wall -Wextra --std=c99
LDPPFLAGS = -g -Wall -Wextra

%.o: %.cpp
	$(CPP) -c -o $@ $(CPPFLAGS) $^

#
# compile the targets
#

TARGETS = timing_a

all: $(TARGETS)

timing_a: timing_a.o
	$(LD) -o $@ $(LDFLAGS) $^ $(CLIBS)

.PHONY: clean

clean:
	@rm -f $(TARGETS) *.o
