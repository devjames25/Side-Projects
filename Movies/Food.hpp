#ifndef FOOD_HPP
#define FOOD_HPP
#include <string>

class Food
{
	protected:
		std::string name;
		double price;
		int quantity;
		
	public:
		virtual ~Food()
		{};
		virtual std::string getName();
		virtual double getPrice();
		virtual int addQuantity();
		virtual int getQuantity();


};
#endif