package ru.prinkov.lab;

import java.lang.*;

public class MainApp
{
	public static void main(String[] args)
	{
		Rmax theRmax = new Rmax(Double.NEGATIVE_INFINITY);
		Rmax theRmax2 = new Rmax(9.3);
		System.out.println(theRmax.add(theRmax2).toString());
	} 
}