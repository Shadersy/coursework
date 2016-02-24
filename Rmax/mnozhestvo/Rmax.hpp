#ifndef RMAX_HPP 
#define RMAX_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <sstream>

	class Rmax
	{
	private:
		double value;

	public:
		Rmax();
		Rmax(double param);
		Rmax(Rmax &param);

		Rmax operator+(const Rmax& other);
		Rmax operator/(const Rmax& other);
		Rmax operator*(const Rmax& other);
		Rmax operator^(const Rmax& other);
		Rmax& operator=(const Rmax& other);
		Rmax& operator=(const double& other);
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmax &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmax &b);
		friend bool operator ==(const Rmax & a, const Rmax & b);

	};
#endif