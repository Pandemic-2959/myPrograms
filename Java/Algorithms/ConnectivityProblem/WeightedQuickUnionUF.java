

public class WeightedQuickUnionUF {
    private int[] parent;   // parent[i] = parent of i
    private int[] size;     // size[i] = number of sites in subtree rooted at i
    private int count;      // number of components

    public WeightedQuickUnionUF(int n) {
        count = n;
        parent = new int[n];
        size = new int[n];
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    public int count() {
        return count;
    }

    public int root(int p) {
        validate(p);
        while (p != parent[p]){
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    private void validate(int p) {
        int n = parent.length;
        if (p < 0 || p >= n) {
            throw new IllegalArgumentException("index " + p + " is not between 0 and " + (n-1));  
        }
    }

    public boolean connected(int p, int q) {
        return (root(p) == root(q));
    }

    public void union(int p, int q) {
        int rootP = root(p);
        int rootQ = root(q);
        if (rootP == rootQ) return;

        // make smaller root point to larger one
        if (size[rootP] < size[rootQ]) {
            parent[rootP] = rootQ;
            size[rootQ] += size[rootP];
        }
        else {
            parent[rootQ] = rootP;
            size[rootP] += size[rootQ];
        }
        count--;
    }
    public void updateroot(){
        for(int i=0;i<count;i++){
            
        }
    }
    public void printid(){
        StringBuilder sr = new StringBuilder();
        StringBuilder sr1 = new StringBuilder();
        for(int i=0;i<parent.length;i++){
            sr.append(parent[i]+" ");
            sr1.append(size[i]+ " ");
        }
        System.out.println(sr);
        System.out.println(sr1);
    }

    public static void main(String[] args) {
        WeightedQuickUnionUF q = new WeightedQuickUnionUF(10); 
        q.union(4,3);
        q.union(3,8);
        q.union(6,5);
        q.union(9,4);
        q.union(2,1);
        q.union(5,0);
        q.union(7,2);
        q.union(6,1);
        q.union(7,3);
        System.out.println(q.connected(9,2));
        q.printid();
    }

}
