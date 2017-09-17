class ArrayStack<T>{
	private T[] a;
	private int n;
	public ArrayStack(){
		a = (T[]) new Object[1];
		n=0;
	}
	public int max(int x,int y){
		return ((x>y)?x:y);
		}
	public void resize(){
		T[] b = (T[]) new Object[max(2*n,1)];
		System.arraycopy(a,0,b,0,n);
		a=b;
	}
	public void push(T x){
		if((n+1)>a.length) resize();
		a[n++] = x;
	}
	public T pop(){
		T x = a[n-1];
		a[n--] = null;
		if(a.length>=3*n) resize();
		return x;
	}
	public void print(){
		StringBuilder sr = new StringBuilder();
		sr.append("null -> ");
		for(int i=0;i<n;i++){
			sr.append(a[i]+" -> ");
		}
		System.out.println(sr);
	}
}
class Main{
	public static void main(String[] args) {
		ArrayStack<Integer> obj = new ArrayStack<Integer>();
		int[] arr = new int[]{1,2,3,4,5,6};
		for( int i=0;i<arr.length;i++){
			obj.push(arr[i]);
		} 
		obj.print();
		System.out.println(" Pop called"+obj.pop());
		System.out.println(" Pop called"+obj.pop());
		System.out.println(" Pop called"+obj.pop());
		System.out.println(" Pop called"+obj.pop());
		obj.print();
	}
}