package ru.lstu.pm14;

import java.io.File;
import java.io.IOException;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.w3c.dom.Document;
import org.xml.sax.SAXException;

public class VirtualProcessor 
{
	private int devices[];
	
	public VirtualProcessor() throws ParserConfigurationException, SAXException, IOException
	{
		/*
		 * [0] => keyboard
		 * [2] => 100 	// mouse
		 * [3] => 7K	// modem 56K
		 * [4] => 1M 	// scanner
		 * [5] => 3.5M		// cam 
		 * [6] => 18M		//Blue-ray
		 * [7] => 37.5M 	//wifi
		 * [8] => 60M	//usb 2.0
		 * [9] => 600M //sata 3
		 * [10] => 625M //usb 3.0
		 */
		DocumentBuilderFactory f = DocumentBuilderFactory.newInstance();
		f.setValidating(false);
		DocumentBuilder builder = f.newDocumentBuilder();
		Document doc = builder.parse(new File("./xml/devices.xml"));
		System.out.println("work");
		NamedNodeMap attributes = node.getAttributes();
		Node nameAttrib = attributes.getNamedItem("name");
		String name = nameAttrib.getNodeValue();

	}
}
