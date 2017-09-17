import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
//String[] ip = br.readLine().trim(" ");
//int n = Integer.parseInt(br.readLine());
/*BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
int t = Integer.parseInt(br.readLine());
StringBuilder sb = new StringBuilder();
while(t-->0){
	String[] ip = br.readLine().trim(" ");
	sb.append()
}*/

class test2 {
	public static void main(String[] args)throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] ip = br.readLine().split(" ");
		System.out.print(Math.ceil(float)(2*Integer.parseInt(ip[1])/Integer.parseInt(ip[0])));
	}
}