package restaurant;

class Entree extends Item {
	
	Entree(){
	}
	
	Entree(String name, double price)
	{
		this.name = name;
		this.price = price;
	}
	
	String getName() {
		return this.name;
	}
	
	double getPrice() {
		return this.price;
	}
	
}