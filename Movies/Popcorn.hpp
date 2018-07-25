#ifndef POPCORN_HPP
#define POPCORN_HPP
#include "Food.hpp"
#include <string>

class Popcorn:public Food
{
	public:
		Popcorn();
		~Popcorn();
		Popcorn(std::string, double);
		std::string getName();
		double getPrice();
		int addQuantity();
		int getQuantity();
	
};
#endif
