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

	std::string Rmaxmin::toString()
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

	std::istream & operator >>(std::istream & s, Rmaxmin &n)
	{
			s >> n.value;
			return s;
	}

	std::ostream & operator <<(std::ostream & s, const Rmaxmin &n)
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

	Rmaxmin Rmaxmin::operator+(const Rmaxmin& b)
	{
		Rmaxmin temp;
		value>b.value?temp.value=value:temp.value=b.value;
		return temp;
	}

	Rmaxmin Rmaxmin::operator*(const Rmaxmin& b)
	{
		Rmaxmin temp;
		value<b.value ? temp.value = value : temp.value = b.value;
		return temp;
	}

	Rmaxmin Rmaxmin::operator^(const Rmaxmin& b)
	{
		Rmaxmin temp(*this);
		return temp;
	}
	
	Rmaxmin& Rmaxmin::operator=(const Rmaxmin &b)
	{
		
		if (*this==b) return *this;
		this -> value = b.value;
		return * this;
		
	}

	Rmaxmin& Rmaxmin::operator=(const double &b)
	{

		if (*this == b) return *this;
		this->value = b;
		return *this;

	}

	bool operator ==(const Rmaxmin & a, const Rmaxmin & b)
	{
		if (!(a.value == b.value))     return false;
		return true;
	}
