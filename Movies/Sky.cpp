#include "Sky.hpp"

Sky::Sky()
{}

Sky::~Sky()
{}

Sky::Sky(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Sky::getTitle()
{
	return this->title;
}

double Sky::getPrice()
{
	return this->price;
}

std::string Sky::getTime()
{
	return this->time;
}

std::string Sky::getType()
{
	return this->type;
}
