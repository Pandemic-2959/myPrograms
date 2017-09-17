import java.util.NoSuchElementException;
class ArrayList<T>{
	private T[] a;
	private int n;
	public ArrayList(){
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
	public void insert(int i,T x){
		if(i<=n){
			if((n+1)>a.length) resize();
			System.arraycopy(a,i,a,i+1,n-i);
			a[i] = x;
			n++;
		}
		else{
			throw new NoSuchElementException();
		}
	}
	public T remove(int i){
		if(i<n){
			T x = a[i];
			System.arraycopy(a,i+1,a,i,n-i-1);
			a[n] = null;
			n--;
			if(a.length>=3*n) resize();
			return x;
		}
		else{
			throw new NoSuchElementException();
		}
	}
	public void print(){
		StringBuilder sr = new StringBuilder();
		for(int i=0;i<n;i++){
			sr.append(a[i]+" ");
		}
		System.out.println(sr);
	}
}
class Main{
	public static void main(String[] args) {
		ArrayList<Integer> obj = new ArrayList<Integer>();
		int[] arr = new int[]{1,2,3,4,5,6};
		for( int i=0;i<arr.length;i++){
			obj.insert(i,arr[i]);
		} 
		obj.print();
		obj.remove(3);
		obj.print();
		obj.remove(3);
		obj.print();
	}
}