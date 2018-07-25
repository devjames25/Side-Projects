#include "Baskets.hpp"
#include <string>

Baskets::Baskets()
{}

Baskets::~Baskets()
{}

Baskets::Baskets(std::string name, double price)
{
	this->name = name;
	this->price = price;
	this->quantity = 1;
}

std::string Baskets::getName()
{
	return this->name;
}

double Baskets::getPrice()
{
	return this->price;
}

int Baskets::addQuantity()
{
	quantity += 1;
	return quantity;
}

int Baskets::getQuantity()
{
	return this->quantity;
}

