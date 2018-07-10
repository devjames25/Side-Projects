#include "Drink.hpp"
#include <string>

Drink::Drink()
{}

Drink::~Drink()
{}

Drink::Drink(std::string name, double price)
{
	this->name = name;
	this->price = price;
}

std::string Drink::getName()
{
	return this->name;
}

double Drink::getPrice()
{
	return this->price;
}