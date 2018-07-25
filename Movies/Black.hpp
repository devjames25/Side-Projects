#ifndef BLACK_HPP
#define BLACK_HPP
#include "Movie.hpp"
#include <string>

class Black:public Movie
{
	public:
		Black();
		~Black();
		Black(std::string, double, std::string, std::string);
		std::string getTitle(); 
		double getPrice();
		std::string getType();
		std::string getTime();

};
#endif
