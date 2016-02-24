#include "Rmaxmin.hpp"
	Rmaxmin::Rmaxmin()
	{
		value = -std::numeric_limits<double>::infinity();
	}
	Rmaxmin::Rmaxmin(double param)
	{
		value = param;
	}

	Rmaxmin::Rmaxmin(Rmaxmin &param)
	{
		value = param.value;
	}

	Rmaxmin Rmaxmin::zero()
	{
		Rmaxmin temp(-std::numeric_limits<double>::infinity());
		return temp;
	}

	Rmaxmin Rmaxmin::unit()
	{
		Rmaxmin temp(std::numeric_limits<double>::infinity());
		return temp;
	}

	std::string Rmaxmin::toString()
	{
		std::stringstream ostr;
		if (value == std::numeric_limits<double>::infinity())
			ostr << "oo";
		else if (value == -std::numeric_limits<double>::infinity())
			ostr << "-oo";
		else
			ostr << value;
		return ostr.str();
	}

	std::istream & operator >> (std::istream & s, Rmaxmin &n)
	{
			s >> n.value;
			return s;
	}

	std::ostream & operator <<(std::ostream & s, const Rmaxmin &n)
	{
		s << n.toString();
		return s;
	}

	Rmaxmin Rmaxmin::operator+(const Rmaxmin& other)
	{
		Rmaxmin temp;
		value>b.value?temp.value=value:temp.value=b.value;
		return temp;
	}

	Rmaxmin Rmaxmin::operator*(const Rmaxmin& other)
	{
		Rmaxmin temp;
		value<b.value ? temp.value = value : temp.value = other.value;
		return temp;
	}

	Rmaxmin Rmaxmin::operator^(const Rmaxmin& other)
	{
		Rmaxmin temp(*this);
		return temp;
	}
	
	Rmaxmin& Rmaxmin::operator=(const Rmaxmin &b)
	{
		
		if (*this==b) return *this;
		this -> value = other.value;
		return * this;
		
	}

	Rmaxmin& Rmaxmin::operator=(const double &b)
	{

		if (*this == other) return *this;
		this->value = other;
		return *this;

	}

	bool operator ==(const Rmaxmin & a, const Rmaxmin & other)
	{
		if (!(a.value == other.value))     return false;
		return true;
	}
