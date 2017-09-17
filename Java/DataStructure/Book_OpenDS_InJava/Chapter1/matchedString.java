import java.util.*;
class matchedString{
	public static void main(String[] args) {
		char[] a = new char[]{'{','{','(',')','[',']','{','}','}'};
		Stack<Character> stack = new Stack<Character>();
		for(int i=0 ;i<a.length;i++){
			if((a[i] == '{')||(a[i] == '(')||(a[i] == '[')){
				stack.push(a[i]);
			}
			else{
				if(((a[i] == ')')&&(stack.peek()=='('))||((a[i] == '}')&&(stack.peek()=='{'))||((a[i] == ']')&&(stack.peek()=='[')))
					stack.pop();
				else{
					System.out.println("not a matched string");
					return;
				}
			}
		}
		if(!stack.empty()){
			System.out.println("not a matched string");
		}
		else{
			System.out.println("matched string");
		}
	}
}