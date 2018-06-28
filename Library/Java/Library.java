import java.io.*;
import java.util.*;

public class Library extends Book{
	String branch;
	String city;
	int zipcode;
	//int maxSize;
	ArrayList<Book> bookshelf;
	
	Library(){
		
	}
	
	Library(String branch, String city, int zipcode){
		this.branch = branch;
		this.city = city;
		this.zipcode = zipcode;
		//this.maxSize = 6;
		this.bookshelf = new ArrayList<Book>();
	}
	
	public String getBranch() {
		return this.branch;
	}
	
	public String getCity() {
		return this.city;
	}
	
	 public void addBook(Book bd) {
		
		this.bookshelf.add(bd);
		
	}
	 
	 public void printBooks() {
		 System.out.printf("These are the books that are located at the %s branch in the city %s:\n", getBranch(), getCity());
		 for(int i = 0; i < this.bookshelf.size(); i++) {
			 System.out.print(this.bookshelf.get(i).getTitle()+"  \n");
		 }
	 }
}
