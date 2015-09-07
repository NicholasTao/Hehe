main : chicken.h chicken.o
	c++ -o main chicken.o animal.cpp

chicken.o : chicken.h chicken.cpp
	c++ -c chicken.cpp

clean :
	rm chicken.o
