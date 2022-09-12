CXX = g++

all: Prefix_sums

Prefix_sums: Prefix_sums.o
		$(CXX) -o Prefix_sums Prefix_sums.o

Prefix_sums.o: Prefix_sums.cpp
	$(CXX) -o Prefix_sums.o -c Prefix_sums.cpp

clean:
	rm -rf Prefix_sums Prefix_sums.o