package todolist;

import java.util.Scanner;
import java.util.*;

public class main{
	
	public static void main(String[] args) {
		Task stuff = null;
		List notepad = new List();
		int var;
		String key;
		Scanner sc = new Scanner(System.in); 
		
		do {
			System.out.println("This is your personal To-Do List. Enter numbers below to edit your list.");
			System.out.println("1) Add tasks to the list.");
			System.out.println("2) Remove last task off the list.");
			System.out.println("3) Display your tasks on screen.");
			System.out.println("4) Exit your task list editor.");
			var = sc.nextInt();
			sc.nextLine();
			
			switch(var)
			{
			case 1: System.out.println("Enter the task here:");
					key = sc.nextLine();
					stuff = new Task(key);
					notepad.addTask(stuff);
					stuff = null;
					break;
			case 2: notepad.removeTask();
					break;
			case 3: notepad.printTask();
					break;
			}
		}while(var != 4);
	
	}
	
}