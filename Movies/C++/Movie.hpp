#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>

class Movie
{
	protected:
		std::string title; 
		double price;
		std::string time;
		std::string type;
		
	public:
		virtual ~Movie()
		{
		};
		virtual std::string getTitle();
		virtual double getPrice();
		virtual std::string getType();
		virtual std::string getTime();
		
	
};
#endif
