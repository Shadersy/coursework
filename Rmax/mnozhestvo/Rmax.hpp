#ifndef RMAX_HPP 
#define RMAX_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <sstream>

	class Rmax
	{
	public:
		double value;

	public:
		Rmax();
		Rmax(double param);
		Rmax(Rmax &param);

		Rmax operator+(const Rmax& b);
		Rmax operator/(const Rmax& b);
		Rmax operator*(const Rmax& b);
		Rmax operator^(const Rmax& b);
		Rmax& operator=(const Rmax& b);
		Rmax& operator=(const double& b);
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmax &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmax &);
		friend bool operator ==(const Rmax & a, const Rmax & b);

	};
#endif