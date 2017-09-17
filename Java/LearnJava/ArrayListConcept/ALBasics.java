package ArrayListConcept;
import java.util.*;

public class ALBasics {

	public static void ArrayList_Basics() {
		
		// create ArrayList
		ArrayList<Integer>  a = new ArrayList<Integer>(3);
		
		//Create Elements to ArrayList
		a.add(1);
		a.add(2);
		a.add(3);
		a.add(4);
		
		//Using Iterator to Display Elements of ArrayList
		Iterator<Integer> itr = a.iterator();
		while(itr.hasNext())
			System.out.println(itr.next());
			//or
		/* for(Integer x : a)
		 * 			System.out.println(x);
		 */
		
		//Using java 8 feature 
		//collection stream() util
		//Returns a sequential Stream with this collection
		//as its source
		a.forEach((temp) ->{System.out.println(temp);});
		
		//Get the value at a particular index from the list
		int x=(int)a.get(1);
		System.out.println(x);
		
		//to find whether a particular element exist in the list
		boolean b = a.contains(3);
		System.out.println(b);
		
		//size of list
		System.out.println(a.size());
		
		//delete element
		//a.remove(index)
		a.remove(2);
		
		//to clear list
		a.clear();
		
		//adding elements to the list
		a.add(1);
		a.add(2);
		a.add(3);
		a.add(4);
		
		//change element of list at particular index
		//a.set(index,new element)
		a.set(0,300);
		a.forEach((temp) ->{System.out.println(temp);});
	}
	

	public static void main(String[] args) {
		ArrayList_Basics();
		
	}

}
