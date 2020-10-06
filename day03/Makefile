src = $(wildcard *.cpp)
targets = $(patsubst %.cpp, %, $(src))

CC = g++
CFLAGS = -std=c++11 -Wall -g

all:$(targets)

$(targets):%:%.cpp
	$(CC) $(CFLAGS) $< -o $@

.PHONY:clean all
clean:
	-rm -rf $(targets)
