#ifndef SODA_HPP
#define SODA_HPP
#include "Food.hpp"
#include <string>

class Soda:public Food
{
	public:
		Soda();
		~Soda();
		Soda(std::string, double);
		std::string getName();
		double getPrice();
		int addQuantity();
		int getQuantity();
};
#endif
