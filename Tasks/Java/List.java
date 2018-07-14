package todolist;

import java.util.*;

class List{
	
	ArrayList<Task> list;
	
	List(){
		this.list = new ArrayList<Task>();
	}
	
	public void addTask(Task t) {
		this.list.add(t);
	}
	
	public void removeTask() {
		this.list.remove(this.list.size() - 1);
	}
	
	public void printTask() {
		 for(int i = 0; i < this.list.size(); i++) {
			 System.out.printf("%d. %s\n",i+1, this.list.get(i).getName());
	}
	
	
	
	
	}	
}