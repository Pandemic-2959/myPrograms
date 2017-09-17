import java.util.*;
class charArrayAbsurdOutput{
	public static void main(String[] args) {
		char[] arr = new char[]{'a','a','a'};
		//right output
		System.out.println(arr);
		//now what went wrong
		System.out.println(" "+arr);
		//you got the result of Object.toString(), which isn't overridden in arrays
		//The toString method for class Object returns a string consisting of the name of 
		//the class of which the object is an instance, the at-sign character `@', and the unsigned hexa
		//decimal representation of the hash code of the object. In other words, this method return
		//is a string equal to the value of:
		//getClass().getName() + '@' + Integer.toHexString(hashCode())



		//to correctly print arrays
		//Call Arrays.toString(char[]) to convert it to a string... or just
		System.out.println(" "+ Arrays.toString(arr));
		//System.out.println(arr);
		//which will call println(char[]) instead, which converts it into a string. 
		//Note that Arrays.toString will build a string which is obviously an array of characters, 
		//whereas System.out.println(arr) is broadly equivalent to System.out.println(new String(arr))
		System.out.println(arr);


	}
}