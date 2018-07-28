#include "Black.hpp"

Black::Black()
{}

Black::~Black()
{}

Black::Black(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Black::getTitle()
{
	return this->title;
}

double Black::getPrice()
{
	return this->price;
}

std::string Black::getTime()
{
	return this->time;
}

std::string Black::getType()
{
	return this->type;
}
