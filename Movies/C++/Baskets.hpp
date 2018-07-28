#ifndef BASKETS_HPP
#define BASKETS_HPP
#include "Food.hpp"
#include <string>

class Baskets:public Food
{
	public:
		Baskets();
		~Baskets();
		Baskets(std::string, double);
		std::string getName();
		double getPrice();
		int addQuantity();
		int getQuantity();
};
#endif
