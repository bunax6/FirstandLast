First_Last: main.o General.o C++11.o C++STL.o SortingTech.o
	g++ -std=c++11 main.o General.o C++11.o C++STL.o SortingTech.o -o First_Last 
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
General.o: General.cpp
	g++ -std=c++11 -c General.cpp
C++11.o: C++11.cpp
	g++ -std=c++11 -c C++11.cpp
C++STL.o: C++STL.cpp
	g++ -std=c++11 -c C++STL.cpp
SortingTech.o: SortingTech.cpp
	g++ -std=c++11  -c SortingTech.cpp
clean:
	rm -rf *.o
