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

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> parent of c169983... This reverts commit d0e40bc907fe2a238bebe1c3525612ee3d75942c.
		Rmax operator+(const Rmax& other);
		Rmax operator/(const Rmax& other);
		Rmax operator*(const Rmax& other);
		Rmax operator^(const Rmax& other);
		Rmax& operator=(const Rmax& other);
		Rmax& operator=(const double& other);
<<<<<<< HEAD
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
=======
>>>>>>> parent of c169983... This reverts commit d0e40bc907fe2a238bebe1c3525612ee3d75942c.
		std::string toString();
		friend std::istream& operator>>(std::istream& s, Rmax &n);
		friend std::ostream& operator<<(std::ostream& s, const Rmax &);
		friend bool operator ==(const Rmax & a, const Rmax & b);

	};
#endif