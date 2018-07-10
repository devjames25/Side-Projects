package restaurant;

import java.util.*;

public class run{
	
	public static void main(String[] args) {
	
	Item food = null;
	
	//Restaurant 
	Restaurant pollo = new Restaurant("Pollo Tropical");
	
	//Drinks
	Drink coke = new Drink("Coca-Cola", 2.19);
	Drink sprite = new Drink("Sprite", 2.19);
	Drink lemonade = new Drink("Lemonade", 2.19);
	Drink water = new Drink("Water", 1.99);
	Drink fruitpunch = new Drink("Hi-C Fruit Punch", 2.49);
	Drink icetea = new Drink("Mango Ice Tea", 2.25);
	
	//Entree
	Entree chicken = new Entree("1/4 Fire Grilled Chicken", 3.49);
	Entree pork = new Entree("Mojo Roast Pork", 5.79);
	Entree ribs = new Entree("Caribbean Ribs", 8.49);
	Entree shrimp = new Entree("Tropical Citrus Shrimp", 3.99);
	Entree salad = new Entree("Chicken Caesar Salad", 6.69);
	Entree wrap = new Entree("Chicken Quesadilla Wrap", 3.19);
	Entree sandwiches = new Entree("Chipotle Chicken Sandwich", 3.69);
	
	//Sides
	Side rice = new Side("White or Brown Rice", 1.99);
	Side beans = new Side("Black Beans", 1.99);
	Side riceYellow = new Side("Yellow Rice & Vegetables", 1.99);
	Side fries = new Side("Waffle Fries", 1.99);
	Side corn = new Side("Kernel Corn", 2.49);
	Side potatoe = new Side("Mashed Potatoes with Gravy", 2.49);
	Side cheese = new Side("Macaroni & Cheese", 2.49);
	
	//Dessert
	Dessert flan = new Dessert("Flan", 1.99);
	Dessert cake = new Dessert("Guava Cheesecake", 2.69);
	Dessert bar = new Dessert("Guava Bar", 0.99);
	
	//Add drinks to menu
	pollo.addDrink(coke);
	pollo.addDrink(sprite);
	pollo.addDrink(lemonade);
	pollo.addDrink(water);
	pollo.addDrink(fruitpunch);
	pollo.addDrink(icetea);
	
	//Add entrees to menu
	pollo.addMeal(chicken);
	pollo.addMeal(pork);
	pollo.addMeal(ribs);
	pollo.addMeal(salad);
	pollo.addMeal(wrap);
	pollo.addMeal(sandwiches);
	pollo.addMeal(shrimp);
	
	//Add sides to menu
	pollo.addSide(rice);
	pollo.addSide(beans);
	pollo.addSide(riceYellow);
	pollo.addSide(corn);
	pollo.addSide(fries);
	pollo.addSide(potatoe);
	pollo.addSide(cheese);
	
	//Add dessert to menu
	pollo.addDessert(bar);
	pollo.addDessert(cake);
	pollo.addDessert(flan);
	
	//Print menu
	pollo.printMenu();
	
	//Add to order
	pollo.addToOrder(salad);
	pollo.addToOrder(water);
	pollo.addToOrder(bar);
	
	//Print order
	pollo.printOrder();
	System.out.printf("The total of your order is $%f", pollo.sumOrder());
	
	}
}