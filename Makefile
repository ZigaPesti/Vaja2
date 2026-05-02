CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: program

program: main.cpp
	$(CXX) $(CXXFLAGS) -o program main.cpp

clean:
	rm -f program
