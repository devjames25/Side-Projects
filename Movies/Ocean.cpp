#include "Ocean.hpp"

Ocean::Ocean()
{}

Ocean::~Ocean()
{}

Ocean::Ocean(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Ocean::getTitle()
{
	return this->title;
}

double Ocean::getPrice()
{
	return this->price;
}

std::string Ocean::getTime()
{
	return this->time;
}

std::string Ocean::getType()
{
	return this->type;
}
