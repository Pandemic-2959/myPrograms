package Exceptions;
public class TryCatch 
{
	/*public static void Basics()
	{
		int b[] = new int[2];
		try
		{
			//int a = 100/0;
			System.out.println(b[3]);
		}catch(ArithmeticException e)
		{
			System.out.println(e);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);

		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally 
		{
			System.out.println("finally called");

		}
	}*/
	//Multiple catch blocks can be inserted toa try block
	//Exception e has highest priority to be put in last catch block
	
	//finally block always executes when the try block exits
	
	//finally block is executed whether exception occurs or not
	//finally block is not called when you perform System.exit(1)
	//even if a return statement is encountered a finally block is 
	//encountered as soon as we exit from a specific function
	public static int retInt()
	{
		int a = 100;
		try 
		{
			return a;
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			//a=5000;
			System.out.println("finally called");
			//return a;
		}
		return a;
	}
	public static void main(String[] args) 
	{
		//Basics();
		System.out.println(retInt());
	}
	//if a is returned in try block and then a is updated in finally block then same a=100 is printed
	//if a is returned in try block and a is updated in finally block and then also returned from finally block then
	//in that case updated value of a is returned from the function i.e 5000 in this case

}
