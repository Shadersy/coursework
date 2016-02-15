#ifndef RMIN_HPP 
#define RMIN_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	class Rmin
	{
	public:
		double value;

	public:
		Rmin();
		Rmin(double param);
		Rmin(Rmin &param);

		Rmin operator+(const Rmin& b);
		Rmin operator*(const Rmin& b);
		Rmin operator/(const Rmin& b);
		Rmin operator^(const Rmin& b);
		Rmin& operator=(const Rmin& b);
		Rmin& operator=(const double& b);
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmin &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmin &);
		friend bool operator ==(const Rmin & a, const Rmin & b);

	};
#endif