#include "Side.hpp"
#include <string>

Side::Side()
{}

Side::~Side()
{}

Side::Side(std::string name, double price)
{
	this->name = name;
	this->price = price;
}

std::string Side::getName()
{
	return this->name;
}

double Side::getPrice()
{
	return this->price;
}

