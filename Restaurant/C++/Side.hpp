#ifndef SIDE_HPP
#define SIDE_HPP
#include "Item.hpp"
#include <string>

class Side:public Item
{
	public:
		Side();
		~Side();
		Side(std::string, double);
		std::string getName();
		double getPrice();
	
};
#endif
