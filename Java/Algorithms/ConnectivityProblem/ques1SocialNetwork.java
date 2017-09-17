class ques1SocialNetwork{
	private int[] friend;
	private int[] size;
	int count;
	public ques1SocialNetwork(int n){
		count = n;
		for(int i=0; i<n; i++){
			friend[i] = i;
			size[i] = 1;
		}
	}
	int find(int p, int q){
		while(p != friend[p]){
			friend[p] = friend[friend[p]];
			p = friend[p];
		}
		return p;
	}
	void becomefriend(int p,int q){
		int rootfriendP = find(p);
		int rootfriendQ = find(q);
		if(rootfriendP == rootfriendQ) return;
		if(size[rootfriendP] < size[rootfriendQ]){
			friend[rootfriendP] = rootfriendQ;
			size[rootfriendQ] += size[rootfriendP];
		}
		else{
			friend[rootfriendQ] = rootfriendP;
			size[rootfriendP] += size[rootfriendQ];
		}
		if((--count) == 1){
			System.out.println("all are freiends now");
		}
	}
	public static void main(String[] args) {
		
	}
}