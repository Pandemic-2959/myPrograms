public class quickfind{

	private int[] id;

	public quickfind(int n){
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

	public void union(int p,int q){
		int pid = id[p];
		int qid = id[q];
		for(int i=0;i<id.length;i++){
			if(id[i]==pid){
				id[i]=qid;
			}
		}
	}

	public boolean connected(int p,int q){
		return id[p] == id[q];
	}

	public static void main(String[] args) {
		quickfind q = new quickfind(10);
		q.union(1,2);
		q.union(5,6);
		q.union(0,6);
		q.union(4,6);
		q.union(5,8);
		System.out.println(q.connected(0,8));
		q.printid();
	}
}