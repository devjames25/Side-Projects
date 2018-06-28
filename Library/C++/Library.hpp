#ifndef LIBRARY_HPP
#define LIBRARY_HPP
#include "Book.hpp"
#include <string>
#include <vector>

class Library
{
	private:
		std::string branch;
		std::string city;
		int zipcode;
		std::vector<Book*> bookshelf;
		
	public:
		Library();
		~Library();
		Library(std::string, std::string, int);
		void addBook(Book*);
		void delBook(std::string);
		std::string getBranch();
		std::string getCity();
		int getZipcode();
		int getSize();
		void printBooks();
};
#endif
