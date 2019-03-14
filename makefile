output: zero.o
	g++ main.cpp -o output
zero.o: zero.cpp
	g++ -c zero.cpp
