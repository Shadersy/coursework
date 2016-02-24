#ifndef RMAXMIN_HPP 
#define RMAXMIN_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	class Rmaxmin
	{
	private:
		double value;

	public:
		Rmaxmin();
		Rmaxmin(double param);
		Rmaxmin(Rmaxmin &param);

		Rmaxmin operator+(const Rmaxmin& other);
		Rmaxmin operator*(const Rmaxmin& other);
		Rmaxmin operator^(const Rmaxmin& other);
		Rmaxmin& operator=(const Rmaxmin& other);
		Rmaxmin& operator=(const double& other);
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmaxmin &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmaxmin &b);
		friend bool operator ==(const Rmaxmin & a, const Rmaxmin & b);

	};
#endif