#include "Theater.hpp"
#include <string>
#include <vector>
#include <iostream>

Theater::Theater()
{}

Theater::~Theater()
{}

Theater::Theater(std::string name, std::string city, std::string state)
{
	this->name = name;
	this->city = city;
	this->state = state;
	this->sumFilm = 0;
	this->sumFood = 0;
}

std::string Theater::getName()
{
	return this->name;
}

std::string Theater::getCity()
{
	return this->city;
}

std::string Theater::getState()
{
	return this->state;
}

void Theater::addFilm(Movie* film)
{
	films.push_back(film);
}

void Theater::addMenu(Food* item)
{
	menu.push_back(item);
}

void Theater::addOrder(Food* order)
{
	orders.push_back(order);
}

void Theater::printFilms()
{
	std::cout << "***************************Movie Now Playing*************************\n";
	for(int i = 0; i < films.size(); i++)
	{
		std::cout << i+1 << ". " << films.at(i)->getTitle() << "  " << films.at(i)->getTime() << "  $" << films.at(i)->getPrice() << std::endl;
	}	
}

void Theater::printMenu()
{
	std::cout << "***************************Food Menu*************************\n";

	for(int i = 0; i < menu.size(); i++)
	{
		std::cout << i+1 << ". " << menu.at(i)->getName() << "  $" << menu.at(i)->getPrice() << std::endl;
	}
	
}


void Theater::printOrder()
{
	std::cout << "Your order consist of:\n";
	for(int i = 0; i < orders.size(); i++)
	{
		std::cout << i+1 << ". " << orders.at(i)->getName() << "  $" << orders.at(i)->getPrice() << "  Quant: " << orders.at(i)->getQuantity() << std::endl;
	}
}

double Theater::totalFilm()
{
	sumFilm = 0;
	for(int i = 0; i < films.size(); i++)
	{
		sumFilm += films.at(i)->getPrice();
	}
	return sumFilm;
	
}

double Theater::totalFood()
{
	sumFood = 0;
	for(int i = 0; i < orders.size(); i++)
	{
		sumFood = sumFood + (orders.at(i)->getPrice() * orders.at(i)->getQuantity());
	}
	return sumFood;
	
}


