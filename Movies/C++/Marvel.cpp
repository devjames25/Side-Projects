#include "Marvel.hpp"
#include <string>

Marvel::Marvel()
{}

Marvel::~Marvel()
{}

Marvel::Marvel(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Marvel::getTitle()
{
	return this->title;
}

double Marvel::getPrice()
{
	return this->price;
}

std::string Marvel::getTime()
{
	return this->time;
}

std::string Marvel::getType()
{
	return this->type;
}
