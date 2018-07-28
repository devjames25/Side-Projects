#include "Mission.hpp"

Mission::Mission()
{}

Mission::~Mission()
{}

Mission::Mission(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Mission::getTitle()
{
	return this->title;
}

double Mission::getPrice()
{
	return this->price;
}

std::string Mission::getTime()
{
	return this->time;
}

std::string Mission::getType()
{
	return this->type;
}
