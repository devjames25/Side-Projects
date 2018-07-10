package restaurant;

import java.io.*;
import java.util.*;

class Restaurant{
	
	String name;
	double sum;
	ArrayList<Drink> drinks;
	ArrayList<Entree> meals;
	ArrayList<Side> extras;
	ArrayList<Dessert> sweets;
	ArrayList<Item> order;
	
	Restaurant(){
	}
	
	Restaurant(String name){
		this.name = name;
		this.drinks = new ArrayList<Drink>();
		this.meals = new ArrayList<Entree>();
		this.extras = new ArrayList<Side>();
		this.sweets = new ArrayList<Dessert>();
		this.order = new ArrayList<Item>();
		
	}
	
	public String getName() {
		return this.name;
	}
	
	public void addDrink(Drink d) {
		this.drinks.add(d);
	}
	
	public void addMeal(Entree m) {
		this.meals.add(m);
	}
	
	public void addSide(Side e) {
		this.extras.add(e);
	}
	
	public void addDessert(Dessert s) {
		this.sweets.add(s);
	}
	
	public void addToOrder(Item food) {
		this.order.add(food);
	}
	
	public void printMenu() {
		System.out.printf("***********************%s Menu***************\n", getName());
		System.out.print("\n");
		
		System.out.println("**************Drinks****************");
		for(int i = 0; i < this.drinks.size(); i++) {
			System.out.println(this.drinks.get(i).getName());
		}
		
		System.out.println("**************Entrees****************");
		for(int i = 0; i < this.meals.size(); i++) {
			System.out.println(this.meals.get(i).getName());
		}
		
		System.out.println("**************Sides****************");
		for(int i = 0; i < this.extras.size(); i++) {
			System.out.println(this.extras.get(i).getName());
		}
		
		System.out.println("**************Desserts****************");
		for(int i = 0; i < this.sweets.size(); i++) {
			System.out.println(this.sweets.get(i).getName());
		}
		
	}
	
	public void printOrder() {
		System.out.println("This is your order");
		for(int i = 0; i < this.order.size(); i++) {
			System.out.printf("%s  $%f\n",this.order.get(i).getName(), this.order.get(i).getPrice());
		}
		
	}
	
	public double sumOrder() {
		sum = 0;
		for(int i = 0; i < this.order.size(); i++) {
			sum = sum + this.order.get(i).getPrice();
		}
		return sum;
	}
}