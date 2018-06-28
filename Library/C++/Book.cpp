#include "Book.hpp"
#include <string>

Book::Book()
{}

Book::~Book()
{}

Book::Book(std::string title, std::string author, std::string publisher, std::string date, int pageNumber)
{
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->date = date;
	this->pageNumber = pageNumber;
}

std::string Book::getTitle()
{
	return title;
}

std::string Book::getAuthor()
{
	return author;
}

std::string Book::getPublisher()
{
	return publisher;
}

std::string Book::getDate()
{
	return date;
}

int Book::getPage()
{
	return pageNumber;
}
