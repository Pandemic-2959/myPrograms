package AllInOne;
import java.util.ArrayList;
import java.util.ListIterator;
public class ListIterators 
{
	public static void Basics()
	{
	ArrayList<String> ar = new ArrayList<String>();
	ar.add("name1");
	ar.add("name2");
	ar.add("name3");
	ar.add("name4");
	
	ListIterator<String> itr = ar.listIterator(); 
	while(itr.hasNext())
		System.out.println(itr.next());
	
	//to iterate in reverse order
	while(itr.hasPrevious())
		System.out.println(itr.previous());
	
	
	}
	public static void main(String[] args)
	{
		Basics();
	}
	
}
