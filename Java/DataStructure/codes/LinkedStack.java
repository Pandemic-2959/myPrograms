class Node{
	public int x;
	public Node next;
	public Node(){
		this.next = null;
	}
	public Node(int y){
		this.x = y;
		this.next = null;
	}
}
class Stack{
	private Node head;
	private int n;
	public Stack(){
		head = null;
		n = 0;
	}
	public boolean isEmpty(){
		return (n == 0);
	}
	public void push(int y){
		Node newnode = new Node(y);
		newnode.next = head;
		head = newnode;
		n++;
	}
	public void pop(){
		if(n == 0) {System.out.println("Stack is empty can't pop");
		return;
		}
		head = head.next;
		n--;
	}
	public void display(){
		StringBuilder sr = new StringBuilder();
		Node temp = new Node();
		temp = head;
		while(temp != null){
			sr.append((temp.x) + " -> ");
			temp = temp.next;
		}
		sr.append("null");
		System.out.println(sr);
	}
	public static void main(String[] args) {
		Stack s = new Stack();
		s.push(2);
		s.push(5);
		s.push(10);
		s.pop();
		s.pop();
		s.pop();
		s.pop();
		s.display();
	}
}