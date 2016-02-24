#ifndef RMAX_HPP 
#define RMAX_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	class Rmax
	{
	private:
		double value;

	public:
		Rmax();
		Rmax(double param);
		Rmax(Rmax &param);

<<<<<<< HEAD
		Rmax operator+(const Rmax& other);
		Rmax operator/(const Rmax& other);
		Rmax operator*(const Rmax& other);
		Rmax operator^(const Rmax& other);
		Rmax& operator=(const Rmax& other);
		Rmax& operator=(const double& other);
=======
		Rmax operator+(const Rmax& b);
		Rmax operator*(const Rmax& b);
		Rmax& operator=(const Rmax& b);
>>>>>>> parent of d0e40bc... Ищо классы
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmax &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmax &b);
		friend bool operator ==(const Rmax & a, const Rmax & b);

	};
#endif