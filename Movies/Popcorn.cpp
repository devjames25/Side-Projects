#include "Popcorn.hpp"
#include <string>

Popcorn::Popcorn()
{}

Popcorn::~Popcorn()
{}

Popcorn::Popcorn(std::string name, double price)
{
	this->name = name;
	this->price = price;
	this->quantity = 1;
}

std::string Popcorn::getName()
{
	return this->name;
}

double Popcorn::getPrice()
{
	return this->price;
}

int Popcorn::addQuantity()
{
	quantity += 1;
	return quantity;
}

int Popcorn::getQuantity()
{
	return this->quantity;
}
