#include "Soda.hpp"
#include <string>

Soda::Soda()
{}

Soda::~Soda()
{}

Soda::Soda(std::string name, double price)
{
	this->name = name;
	this->price = price;
	this->quantity = 1;
}

std::string Soda::getName()
{
	return this->name;
}

double Soda::getPrice()
{
	return this->price;
}

int Soda::addQuantity()
{
	this->quantity += 1;
	return this->quantity;
}

int Soda::getQuantity()
{
	return this->quantity;
}



