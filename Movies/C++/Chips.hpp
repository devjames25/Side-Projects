#ifndef CHIPS_HPP
#define CHIPS_HPP
#include "Food.hpp"
#include <string>

class Chips:public Food
{
	public:
		Chips();
		~Chips();
		Chips(std::string, double);
		std::string getName();
		double getPrice();
		int addQuantity();
		int getQuantity();
};
#endif
