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
		s << n.toString();
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
	
	Rmax& Rmax::operator=(const Rmax &b)
	{
		
		if (*this==b) return *this;
		this -> value = other.value;
		return * this;
		
	}

	Rmax& Rmax::operator=(const double &b)
	{

		if (*this == other) return *this;
		this->value = other;
		return *this;

	}

	bool operator ==(const Rmax & a, const Rmax & other)
	{
		if (!(a.value == other.value))     return false;
		return true;
	}
