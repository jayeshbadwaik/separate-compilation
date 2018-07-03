main: main.cpp a_constructor.cpp a_func.cpp a.hpp
	clang++ -o main  a_constructor.cpp a_func.cpp main.cpp

clean: main
	rm main
