#include "Library.hpp"
#include <string>
#include <vector>
#include <iostream>

Library::Library()
{}

Library::~Library()
{}

Library::Library(std::string branch, std::string city, int zipcode)
{
	this->branch = branch;
	this->city = city;
	this->zipcode = zipcode;
}

void Library::addBook(Book* book)
{
	bookshelf.push_back(book);	
}

void Library::delBook(std::string name)
{
	for(int i = 0; i < bookshelf.size(); i++)
	{
		if(bookshelf.at(i)->getTitle() == name)
		{
			bookshelf.erase(bookshelf.begin()+i);
		}
	}
}

std::string Library::getBranch()
{
	return branch;
}

std::string Library::getCity()
{
	return city;
}

int Library::getZipcode()
{
	return zipcode;
}

int Library::getSize()
{
	return bookshelf.size();
}

void Library::printBooks()
{
	for(int i = 0; i < bookshelf.size(); i++)
	{
		std::cout << "The book " << bookshelf.at(i)->getTitle() << " is here at the " << getBranch() << " library.\n";
	}
}
