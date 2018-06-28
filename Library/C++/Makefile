CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03
LDFLAGS = -lboost_date_time

OBJS = Library.o Book.o main.o

SRCS = Library.cpp Book.cpp main.cpp

HEADERS = Book.hpp Library.hpp 

library: Library.o Book.o main.o
	g++ Library.o Book.o  main.o -o library

Library.o: Library.cpp Library.hpp
	g++ -c Library.cpp

Book.o: Book.cpp Book.hpp
	g++ -c Book.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o library
