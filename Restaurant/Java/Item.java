package restaurant;

abstract class Item {
	String name;
	double price;
	
	Item(){
		
	}
	
	Item(String name, double price)
	{
		this.name = name;
		this.price = price;
	}
	
	abstract String getName();
	abstract double getPrice();
}