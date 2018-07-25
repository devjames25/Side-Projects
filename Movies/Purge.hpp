#ifndef PURGE_HPP 
#define PURGE_HPP
#include <string>

class Purge:public Movie
{
	public:
		Purge();
		~Purge();
		Purge(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();
	
	
	
};
#endif