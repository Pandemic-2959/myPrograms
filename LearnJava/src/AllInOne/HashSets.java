package AllInOne;
import java.util.HashSet;
import java.util.Iterator;


public class HashSets 
{
	public static void Basics()
	{
		//do not allow duplicate values
		HashSet<Integer> hs = new HashSet<Integer>();
		hs.add(1);
		hs.add(2);
		hs.add(3);
		hs.add(4);
		Iterator<Integer> itr = hs.iterator(); 
		while(itr.hasNext())
			System.out.println(itr.next());
		//only ListIterators have hasPrevoius() function not Iterators
		
	}

	public static void main(String[] args) 
	{
		Basics();
	}

}
