CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03
LDFLAGS = -lboost_date_time

OBJS = Movie.o Black.o Deadpool.o Ocean.o Marvel.o Sky.o Park.o Mission.o Food.o Baskets. o Popcorn.o Soda.o Chips. Candy.o Theater.o main.o

SRCS = Movie.cpp Black.cpp Deadpool.cpp Ocean.cpp Marvel.cpp Sky.cpp Park.cpp Mission.cpp Food.cpp Baskets.cpp Popcorn.cpp Soda.cpp Chips.cpp Candy.cpp Theater.cpp main.cpp

HEADERS = Movie.hpp Black.hpp Deadpool.hpp Ocean.hpp Marvel.hpp Sky.hpp Park.hpp Mission.hpp Food.hpp Baskets.hpp Popcorn.hpp Soda.hpp Chips.hpp Candy.hpp Theater.hpp 

movies: Movie.o Black.o Deadpool.o Ocean.o Marvel.o Sky.o Park.o Mission.o Food.o Baskets.o Popcorn.o Soda.o Chips.o Candy.o Theater.o main.o
	g++ Movie.o Black.o Deadpool.o Ocean.o Marvel.o Sky.o Park.o Mission.o Food.o Baskets.o Popcorn.o Soda.o Chips.o Candy.o Theater.o main.o -o movies

Movie.o: Movie.hpp Movie.cpp
	g++ -c Movie.cpp

Black.o: Black.hpp Black.cpp
	g++ -c Black.cpp

Deadpool.o: Deadpool.hpp Deadpool.cpp
	g++ -c Deadpool.cpp

Ocean.o: Ocean.hpp Ocean.cpp
	g++ -c Ocean.cpp

Marvel.o: Marvel.hpp Marvel.cpp
	g++ -c Marvel.cpp

Sky.o: Sky.hpp Sky.cpp
	g++ -c Sky.cpp

Park.o: Park.hpp Park.cpp
	g++ -c Park.cpp

Mission.o: Mission.hpp Mission.cpp
	g++ -c Mission.cpp

Food.o: Food.hpp Food.cpp
	g++ -c Food.cpp

Baskets.o: Baskets.hpp Baskets.cpp
	g++ -c Baskets.cpp

Popcorn.o: Popcorn.hpp Popcorn.cpp
	g++ -c Popcorn.cpp

Soda.o: Soda.hpp Soda.cpp
	g++ -c Soda.cpp

Chips.o: Chips.hpp Chips.cpp
	g++ -c Chips.cpp

Candy.o: Candy.hpp Candy.hpp
	g++ -c Candy.cpp

Theater.o: Theater.hpp Theater.cpp
	g++ -c Theater.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o movies
