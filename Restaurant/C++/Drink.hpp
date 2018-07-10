#ifndef DRINK_HPP
#define DRINK_HPP
#include "Item.hpp"
#include <string>

class Drink:public Item
{	
	public:
		Drink();
		~Drink();
		Drink(std::string, double);
		std::string getName();
		double getPrice();
	
	
};
#endif