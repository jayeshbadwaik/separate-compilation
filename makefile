main: main.o a_constructor.o a_func.o 
	clang++ -o main a_constructor.o a_func.o main.o

main.o: main.cpp
	clang++ -c main.cpp -o main.o

a_constructor.o: a_constructor.cpp
	clang++ -c a_constructor.cpp -o a_constructor.o

a_func.o: a_func.cpp
	clang++ -c a_func.cpp -o a_func.o

clean: main
	rm main *.o
