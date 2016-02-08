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
		s << n.value;
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
		temp.value = value+b.value;
		return temp;
	}
	
	Rmax& Rmax::operator=(const Rmax &b)
	{
		
		if (*this==b) return *this;
		this->value = b.value;
		return *this;
		
	}

	bool operator ==(const Rmax & a, const Rmax & b)
	{
		if (!(a.value == b.value))     return false;
		return true;
	}