#include "Deadpool.hpp"

Deadpool::Deadpool()
{}

Deadpool::~Deadpool()
{}

Deadpool::Deadpool(std::string name, double price, std::string type, std::string time)
{
	this->title = name;
	this->price = price;
	this->time = time;
	this->type = type;
}

std::string Deadpool::getTitle()
{
	return this->title;
}

double Deadpool::getPrice()
{
	return this->price;
}

std::string Deadpool::getTime()
{
	return this->time;
}

std::string Deadpool::getType()
{
	return this->type;
}
