#include "Rmin.hpp"
	Rmin::Rmin()
	{
		value = std::numeric_limits<double>::infinity();
	}
	Rmin::Rmin(double param)
	{
		value = param;
	}

	Rmin::Rmin(Rmin &param)
	{
		value = param.value;
	}

	Rmin Rmaxmin::zero()
	{
		Rmaxmin temp(std::numeric_limits<double>::infinity());
		return temp;
	}

	Rmin Rmaxmin::unit()
	{
		Rmaxmin temp(0);
		return temp;
	}

	std::string Rmin::toString()
	{
		std::stringstream ostr;
		if (value == std::numeric_limits<double>::infinity())
			ostr << "+oo";
		else
			ostr << value;
		return ostr.str();
	}

	std::istream & operator >>(std::istream & s, Rmin &n)
	{
			s >> n.value;
			return s;
	}

	std::ostream & operator <<(std::ostream & s, const Rmin &n)
	{
		s << n.toString();
		return s;
	}

	Rmin Rmin::operator+(const Rmin& other)
	{
		Rmin temp;
		value < other.value ? temp.value = value : temp.value = other.value;
		return temp;
	}

	Rmin Rmin::operator*(const Rmin& other)
	{
		Rmin temp;
		temp.value = value + other.value;
		return temp;
	}

	Rmin Rmin::operator/(const Rmin& other)
	{
		Rmin temp;
		temp.value = value - other.value;
		return temp;
	}

	Rmin Rmin::operator^(const Rmin& other)
	{
		Rmin temp;
		temp.value = value * other.value;
		return temp;
	}

	Rmin Rmin::operator^(double exp)
	{
		Rmin temp;
		temp.value = value * exp;
		return temp;
	}
	
	
	Rmin& Rmin::operator=(const Rmin &other)
	{
		
		if (*this==b) return *this;
		this -> value = other.value;
		return * this;
		
	}

	Rmin& Rmin::operator=(const double &b)
	{

		if (*this == b) return *this;
		this->value = b;
		return *this;

	}

	bool operator ==(const Rmin & a, const Rmin & b)
	{
		if (!(a.value == b.value))     return false;
		return true;
	}
