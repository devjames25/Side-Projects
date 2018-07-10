#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

class Item
{
	protected:
		std::string name;
		double price;
	
	public:
		virtual ~Item()
		{
		};
		virtual std::string getName();
		virtual double getPrice();
	
};
#endif
