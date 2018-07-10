#include "Dessert.hpp"
#include <string>

Dessert::Dessert()
{}

Dessert::~Dessert()
{}

Dessert::Dessert(std::string name, double price)
{
	this->name = name;
	this->price = price;
}	

std::string Dessert::getName()
{
	return this->name;
}

double Dessert::getPrice()
{
	return this->price;
}

