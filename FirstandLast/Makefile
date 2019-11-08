CC = g++ -std=c++11
CFLAG = -c

First_Last: main.o General.o C++11.o C++STL.o SortingTech.o
	g++ -std=c++11 main.o General.o C++11.o C++STL.o SortingTech.o -o First_Last 
main.o: main.cpp
	$(CC) $(CFLAG) main.cpp
General.o: General.cpp
	$(CC) $(CFLAG) General.cpp
C++11.o: C++11.cpp
	$(CC) $(CFLAG) C++11.cpp
C++STL.o: C++STL.cpp
	$(CC) $(CFLAG) C++STL.cpp
SortingTech.o: SortingTech.cpp
	$(CC)  $(CFLAG) SortingTech.cpp
clean:
	rm -rf *.o
	rm -rf First_Last
