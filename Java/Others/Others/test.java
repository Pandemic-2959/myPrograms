import java.io.*;
class test{
	public static void reversalAlgo(StringBuilder sb ,int size, int d){
		int t = (int)System.currentTimeMillis();
		while(d>=size){
			d=d-size;
		}
		sb.replace(0,d,((new StringBuilder(sb.substring(0,d))).reverse()).toString());
		sb.replace(d,size,((new StringBuilder(sb.substring(d,size))).reverse()).toString());
		sb.reverse();
		System.out.println(sb);
		System.out.println("ar time "+((int)System.currentTimeMillis()-t));
	}

	public static void main(String[] args)throws IOException{
		StringBuilder sb = new StringBuilder(" 1 2 3 4 5");
		int size =5;
		int d = 2;
		reversalAlgo(sb,size,d);

	}
	
	}
