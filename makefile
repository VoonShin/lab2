lab2: lab2.o main.o
	g++ -o lab2 main.o lab2.o

lab2.o: lab2.cpp lab2.h
	g++ -c lab2.cpp

main.o: main.cpp lab2.h
	g++ -c main.cpp

