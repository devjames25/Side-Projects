#ifndef ENTREE_HPP 
#define ENTREE_HPP
#include "Item.hpp"
#include <string>

class Entree:public Item
{
	public:
		Entree();
		~Entree();
		Entree(std::string, double);
		std::string getName();
		double getPrice();
	
};
#endif