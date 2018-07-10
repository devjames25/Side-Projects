#include "Entree.hpp"
#include <string>

Entree::Entree()
{}

Entree::~Entree()
{}

Entree::Entree(std::string name, double price)
{
	this->name = name;
	this->price = price;
}

std::string Entree::getName()
{
	return this->name;
}

double Entree::getPrice()
{
	return this->price;
}
