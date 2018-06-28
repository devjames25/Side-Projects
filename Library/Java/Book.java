
public class Book {
	
	String title;
	String author;
	String publisher;
	String date;
	int pageNumber;
	
	Book(){
		
	}
	
	Book(String title, String author, String publisher, String date, int pageNumber)
	{	
		this.title = title;
		this.author = author;
		this.publisher = publisher;
		this.date = date;
		this.pageNumber = pageNumber;
	}
	
	public String getTitle()
	{
		return this.title;
	}
	
}