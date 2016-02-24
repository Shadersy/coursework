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

	Rmax Rmaxmin::zero()
	{
		Rmaxmin temp(-std::numeric_limits<double>::infinity());
		return temp;
	}

	Rmax Rmaxmin::unit()
	{
		Rmaxmin temp(0);
		return temp;
	}

	std::string Rmax::toString()
	{
		std::stringstream ostr;
		if (value == -std::numeric_limits<double>::infinity())
<<<<<<< HEAD
=======
		{
>>>>>>> parent of d0e40bc... Ищо классы
			ostr << "-oo";
		else
			ostr << value;
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
		s << n.toString();
=======
		if (n.value == -std::numeric_limits<double>::infinity())
		{
			s << "-oo";
		}
		else
		{
			s << n.value;
		}
>>>>>>> parent of d0e40bc... Ищо классы
		return s;
	}

	Rmax Rmax::operator+(const Rmax& other)
	{
		Rmax temp;
		value > other.value ? temp.value = value : temp.value = other.value;
		return temp;
	}

	Rmax Rmax::operator*(const Rmax& other)
	{
		Rmax temp;
		temp.value = value + other.value;
		return temp;
	}
<<<<<<< HEAD

	Rmax Rmax::operator/(const Rmax& other)
	{
		Rmax temp;
		temp.value = value - other.value;
		return temp;
	}

	Rmax Rmax::operator^(const Rmax& other)
	{
		Rmax temp;
		temp.value = value * other.value;
		return temp;
	}
=======
>>>>>>> parent of d0e40bc... Ищо классы
	
	Rmax& Rmax::operator=(const Rmax &b)
	{
		
		if (*this==b) return *this;
		this -> value = other.value;
		return * this;
		
	}

<<<<<<< HEAD
	Rmax& Rmax::operator=(const double &b)
	{

		if (*this == other) return *this;
		this->value = other;
		return *this;

	}

	bool operator ==(const Rmax & a, const Rmax & other)
=======
	bool operator ==(const Rmax & a, const Rmax & b)
>>>>>>> parent of d0e40bc... Ищо классы
	{
		if (!(a.value == other.value))     return false;
		return true;
	}
