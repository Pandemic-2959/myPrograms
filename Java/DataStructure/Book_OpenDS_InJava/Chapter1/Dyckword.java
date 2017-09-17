import java.util.*;
import java.io.*;
class Dyckword{
	public static void main(String[] args)throws IOException{
		int[] a = new int[]{1,-1,-1,1,1};
		Stack<Integer> stack = new Stack<Integer>();
		for(int i=0;i<a.length;i++){
			if(a[i]==1){
				stack.push(1);
			}
			else{
				if(stack.empty()){
					System.out.println("not a Dyckword");
					return;
				}
				else if(stack.peek() == 1){
					stack.pop();
				}
			}
		}
		System.out.println("A Dyckword");
	}
}