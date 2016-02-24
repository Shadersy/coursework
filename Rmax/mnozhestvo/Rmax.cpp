#include "Rmax.hpp"
	Rmax::Rmax()
	{
		value = -std::numeric_limits<double>::infinity();
	}
	Rmax::Rmax(double param)
	{
		value = param;
	}

	Rmax::Rmax(Rmax &param)
	{
		value = param.value;
	}

	std::string Rmax::toString()
	{
		std::stringstream ostr;
<<<<<<< HEAD
<<<<<<< HEAD
		if (value == -std::numeric_limits<double>::infinity())
<<<<<<< HEAD
=======
		{
>>>>>>> parent of d0e40bc... Ищо классы
=======
=======
>>>>>>> parent of 16d5ebb... Little change
		if (value == std::numeric_limits<double>::infinity())
		{
			ostr << "oo";
		}
		else if (value == -std::numeric_limits<double>::infinity())
		{
<<<<<<< HEAD
>>>>>>> parent of 16d5ebb... Little change
=======
>>>>>>> parent of 16d5ebb... Little change
			ostr << "-oo";
		}
		else
		{
			ostr << value;
		}
		return ostr.str();
	}

	std::istream & operator >>(std::istream & s, Rmax &n)
	{
			s >> n.value;
			return s;
	}

	std::ostream & operator <<(std::ostream & s, const Rmax &n)
	{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		s << n.toString();
=======
=======
>>>>>>> parent of 16d5ebb... Little change
=======
>>>>>>> parent of 16d5ebb... Little change
		if (n.value == -std::numeric_limits<double>::infinity())
		{
			s << "-oo";
		}
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> parent of 16d5ebb... Little change
		else if (n.value == std::numeric_limits<double>::infinity())
		{
			s << "oo";
		}
<<<<<<< HEAD
>>>>>>> parent of 16d5ebb... Little change
=======
>>>>>>> parent of 16d5ebb... Little change
		else
		{
			s << n.value;
		}
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> parent of d0e40bc... Ищо классы
=======
>>>>>>> parent of 16d5ebb... Little change
=======
>>>>>>> parent of 16d5ebb... Little change
		return s;
	}

	Rmax Rmax::operator+(const Rmax& b)
	{
		Rmax temp;
		value>b.value?temp.value=value:temp.value=b.value;
		return temp;
	}

	Rmax Rmax::operator*(const Rmax& b)
	{
		Rmax temp;
		temp.value = value + b.value;
		return temp;
	}
<<<<<<< HEAD

	Rmax Rmax::operator/(const Rmax& b)
	{
		Rmax temp;
		temp.value = value - b.value;
		return temp;
	}

	Rmax Rmax::operator^(const Rmax& b)
	{
		Rmax temp;
		temp.value = value * b.value;
		return temp;
	}
=======
>>>>>>> parent of d0e40bc... Ищо классы
	
	Rmax& Rmax::operator=(const Rmax &b)
	{
		
		if (*this==b) return *this;
		this -> value = b.value;
		return * this;
		
	}

<<<<<<< HEAD
	Rmax& Rmax::operator=(const double &b)
	{

		if (*this == b) return *this;
		this->value = b;
		return *this;

	}

<<<<<<< HEAD
<<<<<<< HEAD
	bool operator ==(const Rmax & a, const Rmax & other)
=======
	bool operator ==(const Rmax & a, const Rmax & b)
>>>>>>> parent of d0e40bc... Ищо классы
=======
	bool operator ==(const Rmax & a, const Rmax & b)
>>>>>>> parent of 16d5ebb... Little change
=======
	bool operator ==(const Rmax & a, const Rmax & b)
>>>>>>> parent of 16d5ebb... Little change
	{
		if (!(a.value == b.value))     return false;
		return true;
	}
