#include "Candy.hpp"
#include <string>

Candy::Candy()
{}

Candy::~Candy()
{}

Candy::Candy(std::string name, double price)
{
	this->name = name;
	this->price = price;
	this->quantity = 1;
}

std::string Candy::getName()
{
	return this->name;
}

double Candy::getPrice()
{
	return this->price;
}

int Candy::addQuantity()
{
	quantity += 1;
	return quantity;
}

int Candy::getQuantity()
{
	return this->quantity;
}
