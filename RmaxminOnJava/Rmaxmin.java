package ru.prinkov.lab;

public class Rmaxmin
{
	private double value;	
	private static final double ZERO = Double.NEGATIVE_INFINITY;
	private static final double UNIT = Double.POSITIVE_INFINITY; 

	public Rmaxmin()
	{
		this.value = Rmaxmin.ZERO;
	}

	public Rmaxmin(double value_)
	{
		this.value = value_;
	}

	public Rmaxmin(Rmaxmin other)
	{
		this.value = other.value;
	}

	public Rmaxmin add(Rmaxmin other)
	{
		return new Rmaxmin(max(this.value, other.value));
	}

	public Rmaxmin multiply(Rmaxmin other)
	{
		return new Rmaxmin(min(this.value, other.value));
	}

	public String toString()
	{
		if(value == Double.POSITIVE_INFINITY)
			{
				return "+oo";
			}
		else if(value == Double.NEGATIVE_INFINITY)
			{
				return "-oo";
			}
		return ""+value;
	}

	private double min(double a, double b)
	{
		if(a < b) return a;
			else return b;
	}

	private double max(double a, double b)
	{
		if(a > b) return a;
			else return b;
	}
}
