package AllInOne;

public class Basics {
	public static int factorial (int n)
	{
		if(n<=1) return 1;
		else return(n*factorial(n-1));
	}

	public static void main(String[] args) {
		int[] arr = {1,2,3};
	// ARRAY
		for(int x:arr) System.out.println(x);
	//STRING
		String str1 = "HelloWorld";
		int x = str1.length();
		String str2 = str1.toLowerCase();
		str1.replace('e','a');
		System.out.println(x+str2);
		
	//Class
		
		Student ob1 = new Student();
		ob1.setId(1);
		ob1.setName("Amar");
		ob1.setAge(40);
		System.out.println(ob1.getId()+ob1.getName()+ob1.getAge());
		
	//Static members belong to the class instead of a specific instance
	//static members can be accessed using class name
	
	//whereas non static member belongs to instances 		
	//and accessed by the instances not by the class name
		
	/* Access Modifiers 
	 * 	Modifier 	  Class Package Subclass World
	 * 	public			y		y		y		y
	 *  protected		y		y		y		n
	 *  no modifier		y		y		n		n
	 *  private			y		n		n		n
	 */
		
	/* Final
	 * final class can not be sub classed
	 * final method cannot be overridden by sub class
	 * final variable can only be initialized only
	 */
		
	//Polymorphism classes involved Bank , Bank_XYZ , Bank_ABC
		Bank abc = new Bank_ABC();//reference of base class point to objectof child class
		Bank xyz = new Bank_XYZ();
		System.out.println(abc.getInterest());
		System.out.println(xyz.getInterest());
	
	//Abstract class : object of which cannot be created
	
	//recursion
	System.out.println(factorial(4));
		
				
		
		
	}

}
