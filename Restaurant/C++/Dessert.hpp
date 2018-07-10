#ifndef DESSERT_HPP
#define DESSERT_HPP
#include "Item.hpp"
#include <string>

class Dessert:public Item
{
	public:
		Dessert();
		~Dessert();
		Dessert(std::string, double);
		std::string getName();
		double getPrice();
	
};
#endif