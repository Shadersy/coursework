#ifndef RMAX_HPP 
#define RMAX_HPP
	#include <limits>
	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	class Rmax
	{
	public:
		double value;

	public:
		Rmax();
		Rmax(double param);
		Rmax(Rmax &param);

<<<<<<< HEAD
<<<<<<< HEAD
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
=======
=======
>>>>>>> parent of 16d5ebb... Little change
		Rmax operator+(const Rmax& b);
		Rmax operator/(const Rmax& b);
		Rmax operator*(const Rmax& b);
		Rmax operator^(const Rmax& b);
		Rmax& operator=(const Rmax& b);
		Rmax& operator=(const double& b);
<<<<<<< HEAD
>>>>>>> parent of 16d5ebb... Little change
=======
>>>>>>> parent of 16d5ebb... Little change
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmax &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmax &);
		friend bool operator ==(const Rmax & a, const Rmax & b);

	};
#endif