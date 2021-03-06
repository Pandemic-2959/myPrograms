package DateAndTime;
import java.util.ArrayList;
import java.util.LinkedList;

public class ToMeasureTimeInJava 
{
	public static void main(String[] args)
	{
		long n = (long) 1E7;
		//insertion time for array list and linked list
		ArrayList<Long> ar = new ArrayList<Long>();
		int t = (int)System.currentTimeMillis();
		while(n-->0)
			ar.add(n);
		System.out.println("ar time"+((int)System.currentTimeMillis()-t));
		LinkedList<Long> ll = new LinkedList<Long>();
		n = (long) 1E7;
		t = (int)System.currentTimeMillis();
		while(n-->0)
			ll.add(n);
		System.out.println("ll time"+((int)System.currentTimeMillis()-t));
		
		//deletion time for array list and linked list
		n = (long) 1E7;
		t = (int)System.currentTimeMillis();
		ar.remove(1E5);
		System.out.println("ar time"+((int)System.currentTimeMillis()-t));
		t = (int)System.currentTimeMillis();
		ll.remove(1E5);
		System.out.println("ll time"+((int)System.currentTimeMillis()-t));

		
		//element from mid
		t = (int)System.currentTimeMillis();
		ar.get((int)n/2);
		System.out.println("ar time"+((int)System.currentTimeMillis()-t));
		t = (int)System.currentTimeMillis();
		ll.get((int)n/2);
		System.out.println("ll time"+((int)System.currentTimeMillis()-t));

		
		
	}

}
