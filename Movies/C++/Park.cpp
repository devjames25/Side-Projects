#include "Park.hpp"

Park::Park()
{}

Park::~Park()
{}

Park::Park(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Park::getTitle()
{
	return this->title;
}

double Park::getPrice()
{
	return this->price;
}

std::string Park::getTime()
{
	return this->time;
}

std::string Park::getType()
{
	return this->type;
}
