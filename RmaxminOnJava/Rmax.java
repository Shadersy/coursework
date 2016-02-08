package ru.prinkov.lab;

public class Rmax
{
	private double value;	
	private static final double ZERO = Double.NEGATIVE_INFINITY;
	private static final double UNIT = 0; 

	public Rmax()
	{
		this.value = Rmax.ZERO;
	}

	public Rmax(double value_)
	{
		this.value = value_;
	}

	public Rmax(Rmax other)
	{
		this.value = other.value;
	}

	public Rmax add(Rmax other)
	{
		return new Rmax(max(this.value, other.value));
	}

	public Rmax multiply(Rmax other)
	{
		return new Rmax(this.value + other.value);
	}

	public String toString()
	{
		//System.out.println(value);
		
		return "";
	}

	private double max(double a, double b)
	{
		if(a > b) return a;
			else return b;
	}
}