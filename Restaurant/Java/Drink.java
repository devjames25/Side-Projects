package restaurant;

class Drink extends Item {
	
	Drink(){	
	}
	
	Drink(String name, double price){
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