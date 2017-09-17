import java.math.BigInteger;
import java.lang.*;
import java.util.*;
class BigIntegerClass {
	public static void main(String[] args) {
		BigInteger bi1 = BigInteger.ONE;
		BigInteger bi2 = new BigInteger("-1234");
		bi1 = bi2.abs();
		System.out.println(bi1);
		String str = ""+bi2;
		System.out.println(str);
		String st = "123456";  
		BigInteger bi3 = new BigInteger(st);
		System.out.println(bi3);
	}
	
	
}