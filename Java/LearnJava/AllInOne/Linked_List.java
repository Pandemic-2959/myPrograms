package AllInOne;
import java.util.LinkedList;
public class Linked_List {
	public static void LinkedList_Basics()
	{
		//creation
		LinkedList<String> a = new LinkedList<String>();
		a.add("name1");
		a.add("name2");
		a.add("name3");
		a.add("name4");
		a.addFirst("name0");
		a.addLast("name5");
		a.removeFirst();
		a.removeLast();
		//add at particular index
		//a.add(index,element)
		a.add(1,"nameha");
		//to remove at a particular index a.remove(index)
		a.remove(1);
		//to set the value at a particular index to something else
		a.set(1,"Name2");	
		
		//iteration
		for(String x : a)
			System.out.println(x);
		System.out.println(a.size());

		
		//remove all elements
		a.clear();
		
		//creating again
		a.add("name1");
		a.add("name2");
		a.add("name3");
		a.add("name4");
		
	}
	public static void main(String[] args) 
	{
		LinkedList_Basics();
	}

}
