import java.io.*;
import java.util.*;

public class Run{
	
	public static void main(String[] args) {
		
		System.out.print("**********************Welcome to the Library************\n");
		System.out.print("\n");
		
		Book book1 = new Book("The 48 Laws of Power", "Robert Greene", "Penguin Books", "September 1, 2000", 452);
		Book book2 = new Book("The Art of War", "Sun Tzu", "Greyhound Press", "April 7, 2017", 38);
		Book book3 = new Book("12 Rules for Life: An Antidote to Chaos", "Jordan B. Peterson", "Random House Canada", "January 23, 2018", 416);
		Book book4 = new Book("Selected Writings and Speeches of Marcus Garvey", "Marcus Garvey", "Dover Publications", "March 5, 2012", 226);
		Book book5 = new Book("How Democracies Die", "Steven Levitsky", "Crown", "January 16, 2018", 320);
		Book book6 = new Book("The Mis-Education of the Negro", "Carter Godwin Woodson", "CreateSpace Independent Publishing Platform", "August 18, 2017", 92);
		
		Library mainBranch = new Library("Main Library", "West Palm Beach", 33406);
		Library greenBranch = new Library("Greenacres Branch", "Greenacres", 33467);
		
		mainBranch.addBook(book1);
		mainBranch.addBook(book2);
		mainBranch.addBook(book3);
		greenBranch.addBook(book4);
		greenBranch.addBook(book5);
		greenBranch.addBook(book6);
		
		mainBranch.printBooks();
		System.out.print("\n");
		greenBranch.printBooks();
	}
	
}