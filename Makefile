#
# C build
#

CC = gcc
LD = gcc

CLFAGS = -g -O0 -Wall -Wextra --std=c99
LDFLAGS = -g -Wall -Wextra

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

TARGETS = timing_a

all: $(TARGETS)

%: %.o
	$(LD) -o $@ $(LDFLAGS) $^

.PHONY: clean

clean:
	@rm -f $(TARGETS)
