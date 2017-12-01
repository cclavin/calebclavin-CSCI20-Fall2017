lab52.exe : main.o MyClass.o
	g++ main.o MyClass.o -o lab52.exe

main.o : main.cpp MyClass.cpp MyClass.h
	g++ -Wall -c main.cpp
	
MyClass.o : MyClass.cpp MyClass.h
	g++ -Wall -c MyClass.cpp

clean :
	rm *.o lab52.exe





