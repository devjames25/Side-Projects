#ifndef CANDY_HPP
#define CANDY_HPP
#include "Food.hpp"
#include <string>

class Candy:public Food
{
	public:
		Candy();
		~Candy();
		Candy(std::string, double);
		std::string getName();
		double getPrice();
		int addQuantity();
		int getQuantity();
};
#endif
