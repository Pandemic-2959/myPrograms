import java.io.*;
class gcd{
	public static int method1(int x,int y){
        if (y == 0)
            return x;
        else
            return method1(y, x % y);
	}
	public static void main(String[] args)throws IOException{
		System.out.println(method1(1000000,455215));
		
	}
}