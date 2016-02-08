package ru.prinkov.lab;

public class Rmin
{
	private double value;	
	private static final double ZERO = Double.POSITIVE_INFINITY;
	private static final double UNIT = 0; 

	public Rmin()
	{
		this.value = Rmin.ZERO;
	}

	public Rmin(double value_)
	{
		this.value = value_;
	} 

	public Rmin(Rmin other)
	{
		this.value = other.value;
	}

	public Rmin add(Rmin other)
	{
		return new Rmin(min(
			this.value, other.value));
	}

	public Rmin multiply(Rmin other)
	{
		return new Rmin(this.value + other.value);
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
}
