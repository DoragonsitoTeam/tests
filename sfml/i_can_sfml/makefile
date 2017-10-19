execute : executable.out
	./$^

executable.out : main.o
	g++ main.o -o executable.out -lsfml-graphics -lsfml-window -lsfml-system

main.o : main.cpp
	g++ -c main.cpp