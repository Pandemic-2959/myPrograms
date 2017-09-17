import java.io.*;
import java.lang.StringBuilder;
class StringBuilderManupulation{
	public static void main(String[] args) {
		
		//different ways to initialize StringBuilder constructor
		//1. StringBuilder()
		//2. StringBuilder(int capacity);
		//3. StringBuilder(String str);
		StringBuilder sb = new StringBuilder();
		//This sb has a default capacity of 16
		//if capacity is increased beyond old capacity
		//then new capacity = ((old_capacity)*2 + 2)
		System.out.println(sb+" has capacity"+sb.capacity());
		sb.append("!!!");
		System.out.println(sb+" has now capacity "+sb.capacity());
		sb.append(" hey this my name Ayush Gupta");
		System.out.println(sb+" has now capacity "+sb.capacity());

		StringBuilder sb1 = new StringBuilder("abc");
		System.out.println(sb1+" has now capacity "+sb1.capacity());
		System.out.println(sb1.append(" def") + " has now capacity " + sb1.capacity());
		System.out.println(sb1.append(" ghijklmnopqrstuvwxyz") + " has now capacity " + sb1.capacity());
		
		StringBuilder sb2 = new StringBuilder();
		System.out.print(sb2.capacity()+"  ");
		sb2.ensureCapacity(17);
		//new capacity = ((old_capacity)*2 + 2)
		System.out.print(sb2.capacity()+"  ");
		sb2.ensureCapacity(10);
		System.out.print(sb2.capacity()+"  ");

		System.out.println(sb.charAt(6));//gives char at a particular index

		sb1.delete(3,7);//deletes elements from index 3(inclusive) to 7(exclusive)
		System.out.println(sb1);
		sb1.deleteCharAt(6);
		System.out.println(sb1);

		sb1.insert(3," def");//sb.insert(int offset,String str);
		System.out.println(sb1);

		StringBuilder sb1Reverse = new StringBuilder(sb1);
		sb1Reverse.reverse();
		System.out.println(sb1Reverse);

		sb1 = new StringBuilder("abc def ghjklmnopqrstuvwxyz");
		char[] chArr = new char[]{'a','a','a','a'} ;
		sb1.getChars( 0 , 4 , chArr , 0);
		//getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)
		//srcBegin index inclusive and srcEnd index exclusive
		System.out.println(" ##** "+chArr);
		//why showing garbage value with anything in braces in print statement

		String str ="abc";
		sb2.append("ada abc  asdaada abc asabc hd");
		//sb2.indexOf(String str);
		//sb2.indexOf(String str,int withinIndex);
		//sb2.lastIndexOf(String str);
		//sb2.lastInmethoddexOf(String str,int withinIndex);
		System.out.println(sb2.indexOf(str));
		System.out.println(sb2.indexOf(str,5));
		System.out.println(sb2.lastIndexOf(str));
		System.out.println(sb2.lastIndexOf(str,1));


		StringBuilder sb4 = new StringBuilder("abcdefghijklmnopqrstuvwxyz");
        sb4.insert(14," insert ");
        //sb4.insert(int offset, datatype var)
        //where datatype can be booloean, char, char[], float, etc.
        System.out.println(sb4);
        char[] chArr1 = {'x','x','x','x','x'};
        sb4.insert(0,chArr1);
        //sb4.insert(int indexOfsb, char[] chArr, int indexOfEleIn_chArr, int no_ofEleToInsert);
        sb4.insert(24,chArr1,1,2);
        System.out.println(sb4);

		System.out.println("length "+sb4.length());
		

		StringBuilder sb5 = new StringBuilder("xxxxxxxxxx");
        //replace(int start, int end, String str)
        //if end-start < str.length()  then end-start elements in sb5 would be replaced and rest would be shifted to right to accomodate space for the str
        //if end-start == str.length() then str would overwrite all the elements at specified place of sb5
        sb5.replace(3,6,"abc");
        sb5.replace(8,9,"abc");
        System.out.println(sb5);
		

		StringBuilder sb6 = new StringBuilder("xxxxxxxxxx");
        //setLength()
   		System.out.println(sb6 +" " + sb6.length());
    	sb6.setLength(15);
   	 	System.out.println(sb6 +" " + sb6.length());
    	
    	//setCharAt()
    	sb6.setCharAt(2,'A');
   		System.out.println(sb6);

   		sb = new StringBuilder("String Builder");
   		//sb.substring(int start(inclusive), int end(exclusive))
   		//sb.substring(int start(inclusive));
   		String str1 = sb.substring(3);
   		String str2 = sb.substring(3,7);
   		System.out.println(str1+str2);

   		sb = new StringBuilder();
   		sb.append(123);
   		System.out.println(sb);
   		// what is the point of using toString() function
   		//if we can print the result without using it  ????
   		sb.append(1);
   		//cannot assign an StringBuilder to a String unless we use the function toString()
   		String str3 = sb.toString();
   		System.out.println(str3);

   		System.out.println(sb.capacity());
   		sb.trimToSize();
   		System.out.println(sb.capacity());

	}
}