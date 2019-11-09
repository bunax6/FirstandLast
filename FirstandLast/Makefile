CC = g++ -std=c++11
CFLAG = -c

First_Last: main.o General.o C++11.o C++STL.o SortingTech.o C++98.o
	$(CC) main.o General.o C++11.o C++STL.o SortingTech.o C++98.o -o First_Last 
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
C++98.o: C++98.cpp
	$(CC) $(CFLAG) C++98.cpp
clean:
	rm -rf *.o
	rm -rf First_Last
