output: zero.o
	g++ zero.cpp -o output
zero.o: zero.cpp
	g++ -c zero.cpp
