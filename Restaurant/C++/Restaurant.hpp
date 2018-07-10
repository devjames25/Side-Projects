#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP
#include "Item.hpp"
#include "Drink.hpp"
#include "Entree.hpp"
#include "Side.hpp"
#include "Dessert.hpp"
#include <string>
#include <vector>

class Restaurant
{
	private:
		std::string name;
		double sum;
		std::vector<Drink*> drinks;
		std::vector<Entree*> meals;
		std::vector<Side*> sides;
		std::vector<Dessert*> desserts;
		std::vector<Item*> order;
	
	public:
		Restaurant();
		~Restaurant();
		Restaurant(std::string);
		std::string getName();
		void addDrinks(Drink*);
		void addMeals(Entree*);
		void addSides(Side*);
		void addDesserts(Dessert*);
		void addToOrder(Item*);
		void printMenu();
		void printOrder();
		double sumOrder();
		void clearOrder();
	
};
#endif