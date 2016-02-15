#ifndef RMAXMIN_HPP 
#define RMAXMIN_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	class Rmaxmin
	{
	public:
		double value;

	public:
		Rmaxmin();
		Rmaxmin(double param);
		Rmaxmin(Rmaxmin &param);

		Rmaxmin operator+(const Rmaxmin& b);
		Rmaxmin operator*(const Rmaxmin& b);
		Rmaxmin operator^(const Rmaxmin& b);
		Rmaxmin& operator=(const Rmaxmin& b);
		Rmaxmin& operator=(const double& b);
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmaxmin &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmaxmin &);
		friend bool operator ==(const Rmaxmin & a, const Rmaxmin & b);

	};
#endif