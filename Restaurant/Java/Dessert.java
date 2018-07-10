package restaurant;

class Dessert extends Item{
	
	Dessert(){
	}
	
	Dessert(String name, double price){
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