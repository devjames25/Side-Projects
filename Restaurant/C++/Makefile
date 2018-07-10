food: Item.o Drink.o Entree.o Side.o Dessert.o Restaurant.o main.o
	g++ Item.o Drink.o Entree.o Side.o Dessert.o Restaurant.o main.o -o food

order: Item.o Drink.o Entree.o Side.o Dessert.o Restaurant.o mainInput.o
	g++ Item.o Drink.o Entree.o Side.o Dessert.o Restaurant.o mainInput.o -o order

Item.o: Item.hpp Item.cpp
	g++ -c Item.cpp

Drink.o: Drink.hpp Drink.cpp
	g++ -c Drink.cpp

Entree.o: Entree.hpp Entree.cpp
	g++ -c Entree.cpp

Side.o: Side.hpp Side.cpp
	g++ -c Side.cpp

Dessert.o: Dessert.hpp Dessert.cpp
	g++ -c Dessert.cpp

Restaurant.o: Restaurant.hpp Restaurant.cpp
	g++ -c Restaurant.cpp

main.o: main.cpp
	g++ -c main.cpp

mainInput.o: mainInput.cpp
	g++ -c mainInput.cpp 

clean:
	rm *.o food order
