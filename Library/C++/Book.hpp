
#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>

class Book
{
	private:
		std::string title;
		std::string author;
		std::string publisher;
		std::string date;
		int pageNumber;
	
	public:
		Book();
		~Book();
		Book(std::string, std::string, std::string, std::string, int);
		std::string getTitle();
		std::string getAuthor();
		std::string getPublisher();
		std::string getDate();
		int getPage();
		
	
};
#endif
