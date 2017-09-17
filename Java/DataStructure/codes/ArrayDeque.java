class ArrayDeque<T>{
	private T[] a;
	private int j;
	private int n;
	public ArrayDeque(){
		a = (T[]) new Object[1];
		j = 0;
		n = 0;
	}
	public int max(int x,int y){
		return ((x > y)? x:y );
	}
	public T get(int i){
		return a[(j+i)%a.length];
	}
	public T set(int i,T x){
		T y = a[(j+i)%a.length];
		a[(j+i)%a.length] = x;
		return y;
	}
	public void resize(){
		T[] b = (T[]) new Object[max(2*n,1)];
		for(int i=0;i<n;i++){
			b[i] = a[(j+i)%a.length];
		}
		a = b;
		j = 0;
	}
	public void insert(int i,T x){
		if((n+1)>a.length) resize();
		if(i<(n/2)){
			j = (j==0)?(a.length-1):(j-1);
			for(int k=0;k<i;k++){
				a[(j+k)%a.length] = a[(j+k+1)%a.length]; 
			}
		}
		else{
			for(int k=n;k>i;k--){
				a[(j+k)%a.length] = a[(j+k-1)%a.length];
			}

		}
		a[(j+i)%a.length] = x;
		n++;  
	}
	public T remove(int i){
		T x = a[(j+i)%a.length];
		if(i<(n/2)){
			for(int k = i; k>0;k--){
				a[(j+k)%a.length] = a[(j+k-1)%a.length]; 
			}
			a[j] = null;
			j = (j+1)%a.length;
		}
		else{
			for(int k=i;k<n-1;k++){
				a[(j+k)%a.length] = a[(j+k+1)%a.length];
			}
			a[(j+n-1)%a.length] = null;
		}
		n--;
		if(a.length>(3*n)) resize();
		return x;
	}
	public void print(){
		StringBuilder sr = new StringBuilder();
		for(int i=0;i<n;i++){
			sr.append(a[(j+i)%a.length]+" -> ");
		}
		System.out.println(sr);
	}
}
class Main{
	public static void main(String[] args) {
		ArrayDeque<Integer> obj = new ArrayDeque<Integer>();
		int[] arr = {1,2,3,4,5,6,7,8};
		int i=0;
		for( ;i<arr.length-3;i++){
			obj.insert(i,arr[i]);
		}
		obj.print();
		System.out.println("Removed "+obj.remove(3));
		System.out.println("Removed "+obj.remove(3));
		System.out.println("Removed "+obj.remove(3));
		obj.insert(i,arr[i]);
		obj.print();
	}
}