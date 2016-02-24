#ifndef RMIN_HPP 
#define RMIN_HPP
    #include <limits>
	#include <iostream>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	class Rmin
	{
	private:
		double value;

	public:
		Rmin();
		Rmin(double param);
		Rmin(Rmin &param);

        Rmin operator+(const Rmin& other);
        Rmin operator*(const Rmin& other);
        Rmin operator/(const Rmin& other);
        Rmin operator^(const Rmin& other);
        Rmin& operator=(const Rmin& other);
        Rmin& operator=(const double& other);
		std::string toString();
        friend std::istream& operator>>(std::istream& stream, Rmin &other);
        friend std::ostream& operator<<(std::ostream& stream, const Rmin &other);
		friend bool operator ==(const Rmin & a, const Rmin & b);

	};
#endif
