package ru.lstu.pm14;

import java.io.File;
import java.io.IOException;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.w3c.dom.Text;
import org.xml.sax.SAXException;

public class VirtualProcessor 
{
	private int devices[];
	
	public VirtualProcessor()
	{
		
		 
		try 
		{
			loadDevices("./xml/devices.xml");
		} catch (ParserConfigurationException e) {
			e.printStackTrace();
		} catch (SAXException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	private void loadDevices(String path) throws ParserConfigurationException, SAXException, IOException
	{
		DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
		DocumentBuilder builder = factory.newDocumentBuilder();
		File file = new File(path);
		Document doc = builder.parse(file);
		Element root = doc.getDocumentElement();
		NodeList children = root.getChildNodes();
		for(int i = 0; i < children.getLength(); i++)
		{
			Node child = children.item(i);
			if(child instanceof Element){
				Element childElement = (Element)child;
				Text textNode = (Text)childElement.getFirstChild();
				System.out.println(textNode.getData().trim());
			
			}
		}
	}
}
