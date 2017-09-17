class ArrayQueue<T>{
	private T[] a;
	private int j;
	private int n;
	public ArrayQueue(){
		a = (T[]) new Object[1];
		j=0;
		n=0;
	}
	public void resize(){
		T[] b = (T[]) new Object[max(2*n,1)];
		for(int i=0;i<n;i++){
			b[i] = a[(j+i)%a.length];
		}
		a = b;
		j = 0;
	}
	public int max(int x,int y){
		return ((x > y)? x:y );
	}
	public void insert(T x){
		if((n+1)>a.length) resize();
		a[(j+n)%a.length] = x;
		n++;
	}
	public T remove(){
		T x = a[j];
		a[j] = null;
		j = (j+1)%a.length;
		n--;
		if(a.length >= 3*n) resize();
		return x;
	}
	public void print(){
		StringBuilder sr = new StringBuilder();
		for(int i=n-1;i>=0;i--){
			sr.append(a[(j+i)%a.length]+" -> ");
		}
		sr.append("null");
		System.out.println(sr);
	}
}
class Main{
	public static void main(String[] args) {
		ArrayQueue<Integer> obj = new ArrayQueue<Integer>();
		int[] arr = {1,2,3,4,5,6,7,8};
		int i=0;
		for( ;i<arr.length-3;i++){
			obj.insert(arr[i]);
		}
		obj.print();
		System.out.println("Removed "+obj.remove());
		System.out.println("Removed "+obj.remove());
		System.out.println("Removed "+obj.remove());
		obj.insert(arr[i]);
		obj.print();
	}
}