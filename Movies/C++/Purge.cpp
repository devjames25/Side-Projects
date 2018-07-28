#include "Purge.hpp"

Purge::Purge()
{}

Purge::~Purge()
{}

Purge::Purge(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->showtime = time;
	this->type = type;
}

std::string Purge::getTitle()
{
	return this->title;
}

double Purge::getPrice()
{
	return this->price;
}

std::string Purge::getTime()
{
	return this->time;
}

std::string Purge::getType()
{
	return this->type;
}
