#include "Chips.hpp"
#include <string>

Chips::Chips()
{}

Chips::~Chips()
{}

Chips::Chips(std::string name, double price)
{
	this->name = name;
	this->price = price;
	this->quantity = 1;
}

std::string Chips::getName()
{
	return this->name;
}

double Chips::getPrice()
{
	return this->price;
}

int Chips::addQuantity()
{
	quantity += 1;
	return quantity;
}

int Chips::getQuantity()
{
	return this->quantity;
}
