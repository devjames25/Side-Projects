package restaurant;

class Side extends Item{
	
	Side(){
	}
	
	Side(String name, double price){
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