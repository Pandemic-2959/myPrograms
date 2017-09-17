import java.io.*;
public class quickunion{

	private int[] id;

	public quickunion(int n){
		id = new int[n];
		for(int i=0;i<n;i++){
			id[i] = i;
		}
	}
	
	public void printid(){
		StringBuilder sr = new StringBuilder();
		for(int i=0;i<id.length;i++){
			sr.append(id[i]+" ");
		}
		System.out.println(sr);
	}
	
	private int root(int i){
		while(id[i] != i){
			i = id[i];
		}
		return i;
	}
	
	public boolean connected(int p,int q){
		return root(p) == root(q);
	}
	
	public void union(int p,int q){
		int i = root(p);
		int j = root(q);
		id[i] = j;
	} 

	public static void main(String[] args) {
		quickunion q = new quickunion(10);
		q.union(4,3);
		q.union(3,8);
		q.union(6,5);
		q.union(9,4);
		q.union(2,1);
		q.union(5,0);
		q.union(7,2);
		q.union(6,1);
		q.union(7,3);
		System.out.println(q.connected(1,8));
		q.printid();
	}
}