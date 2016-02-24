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

	std::istream & operator >>(std::istream & s, Rmax &n)
	{
			s >> n.value;
			return s;
	}

	std::ostream & operator <<(std::ostream & s, const Rmax &n)
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

	Rmax Rmax::zero()
	{
		Rmax temp(-std::numeric_limits<double>::infinity());
		return temp;
	}

	Rmax Rmax::unit()
	{
		Rmax temp(0);
		return temp;
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
	
	Rmax& Rmax::operator=(const Rmax &b)
	{
		
		if (*this==b) return *this;
		this -> value = b.value;
		return * this;
		
	}

	Rmax& Rmax::operator=(const double &b)
	{

		if (*this == b) return *this;
		this->value = b;
		return *this;

	}

	bool operator ==(const Rmax & a, const Rmax & b)
	{
		if (!(a.value == b.value))     return false;
		return true;
	}
