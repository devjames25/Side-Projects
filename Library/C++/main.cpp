#include "Book.hpp"
#include "Library.hpp"
#include <string>
#include <iostream>

int main(int argc, char**argv)
{
	std::cout << "**********************Welcome to the Library Program**********************\n";
	std::cout << std::endl;
	
	Book book1("The 48 Laws of Power", "Robert Greene", "Penguin Books", "September 1, 2000", 452);
	Book book2("The Art of War", "Sun Tzu", "Greyhound Press", "April 7, 2017", 38);
	Book book3("12 Rules for Life: An Antidote to Chaos", "Jordan B. Peterson", "Random House Canada", "January 23, 2018", 416);
	Book book4("Selected Writings and Speeches of Marcus Garvey", "Marcus Garvey", "Dover Publications", "March 5, 2012", 226);
	Book book5("How Democracies Die", "Steven Levitsky", "Crown", "January 16, 2018", 320);
	Book book6("The Mis-Education of the Negro", "Carter Godwin Woodson", "CreateSpace Independent Publishing Platform", "August 18, 2017", 92);
	
	Library mainBranch("Main Library", "West Palm Beach", 33406);
	Library greenBranch("Greenacres Branch", "Greenacres", 33467);
	
	std::cout << "Add " << book1.getTitle() <<" to "  << mainBranch.getBranch() << " at the city " << mainBranch.getCity() << ".\n";
	mainBranch.addBook(&book1);
	std::cout << "Add " << book2.getTitle() <<" to "  << mainBranch.getBranch() << " at the city " << mainBranch.getCity() << ".\n";
	mainBranch.addBook(&book2);
	std::cout << "Add " << book3.getTitle() <<" to "  << mainBranch.getBranch() << " at the city " << mainBranch.getCity() << ".\n";
	mainBranch.addBook(&book3);
	std::cout << "Add " << book4.getTitle() <<" to "  << greenBranch.getBranch() << " at the city " << greenBranch.getCity() << ".\n";
	greenBranch.addBook(&book4);
	std::cout << "Add " << book5.getTitle() <<" to "  << greenBranch.getBranch() << " at the city " << greenBranch.getCity() << ".\n";
	greenBranch.addBook(&book5);
	std::cout << "Add " << book6.getTitle() <<" to "  << greenBranch.getBranch() << " at the city " << greenBranch.getCity() << ".\n";
	greenBranch.addBook(&book6);
	
	
	std::cout << std::endl;
	std::cout << "***********************************************************************\n";
	std::cout << "***********************************************************************\n";
	std::cout << std::endl;
	
	mainBranch.printBooks();
	greenBranch.printBooks();
	
	std::cout << std::endl;
	std::cout << "***********************************************************************\n";
	std::cout << "***********************************************************************\n";
	std::cout << std::endl;

	std::string name;
	char answer;
	
	std::cout << "Do you want to delete a book from the branch?(Enter 'y' for yes or 'n' for no)\n";
	std::cin >> answer;
	
	if(answer == 'y')
	{
		std::cout << "Enter book title you want to remove:\n";
		std::cin >> name;
		
		if(book1.getTitle() == name)
		{
			mainBranch.delBook(name);
		}
		else if(book2.getTitle() == name)
		{
			mainBranch.delBook(name);
		}
		else if(book3.getTitle() == name)
		{
			mainBranch.delBook(name);
		}
		else if(book4.getTitle() == name)
		{			
			greenBranch.delBook(name);
		}
		else if(book5.getTitle() == name)
		{
			greenBranch.delBook(name);
		}
		else
		{
			std::cout << "The book " << name << " is not availabe at any Library branch.\n";  
		}
	}
	
	std::cout << std::endl;
	std::cout << "***********************************************************************\n";
	std::cout << "***********************************************************************\n";
	std::cout << std::endl;
	
	mainBranch.printBooks();
	greenBranch.printBooks();
	
	return 0;
}
