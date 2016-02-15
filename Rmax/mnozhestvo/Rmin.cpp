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

	std::string Rmin::toString()
	{
		std::stringstream ostr;
		if (value == std::numeric_limits<double>::infinity())
		{
			ostr << "oo";
		}
		else if (value == -std::numeric_limits<double>::infinity())
		{
			ostr << "-oo";
		}
		else
		{
			ostr << value;
		}
		return ostr.str();
	}

	std::istream & operator >>(std::istream & s, Rmin &n)
	{
			s >> n.value;
			return s;
	}

	std::ostream & operator <<(std::ostream & s, const Rmin &n)
	{
		if (n.value == -std::numeric_limits<double>::infinity())
		{
			s << "-oo";
		}
		else if (n.value == std::numeric_limits<double>::infinity())
		{
			s << "oo";
		}
		else
		{
			s << n.value;
		}
		return s;
	}

	Rmin Rmin::operator+(const Rmin& b)
	{
		Rmin temp;
		value<b.value?temp.value=value:temp.value=b.value;
		return temp;
	}

	Rmin Rmin::operator*(const Rmin& b)
	{
		Rmin temp;
		temp.value = value + b.value;
		return temp;
	}

	Rmin Rmin::operator/(const Rmin& b)
	{
		Rmin temp;
		temp.value = value - b.value;
		return temp;
	}

	Rmin Rmin::operator^(const Rmin& b)
	{
		Rmin temp;
		temp.value = value * b.value;
		return temp;
	}
	
	Rmin& Rmin::operator=(const Rmin &b)
	{
		
		if (*this==b) return *this;
		this -> value = b.value;
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
