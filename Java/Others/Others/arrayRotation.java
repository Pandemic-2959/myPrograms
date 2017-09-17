import java.io.*;
class arrayRotation{
	public static int gcd(int x,int y){
        if (y == 0)
            return x;
        else
            return gcd(y, x % y);
	}
	public static void printArray(int[] arr){
		for(int x : arr){
			System.out.print(x+" ");
		}
	}
	public static void reverseArr(int arr[],int start,int end){
		int temp;
		while(start<=end){
			temp=arr[start];
			arr[start++]=arr[end];
			arr[end--]=temp;

		}
	}
	public static void jugglingAlgo(int[] arr ,int size, int d){
		int t = (int)System.currentTimeMillis();
		while(d>=size){
			d=d-size;
		}
		int g = gcd(size,d);
		int temp,j,k;
		for(int i=0;i<g;i++){
			temp = arr[i];
			j=i;
			while(true){
				k=d+j;
				if(k>=size){
					k -= size;
				}
				if(k==i){
					break;
				}
				arr[j]=arr[k];
				j=k;
			}
			arr[j] = temp;
		}
		printArray(arr);
		System.out.println("ar time "+((int)System.currentTimeMillis()-t));
	}
	public static void blockSwapAlgo(int[] arr ,int size, int d){

	}
	public static void reversalAlgo(int[] arr ,int size, int d){
		int t = (int)System.currentTimeMillis();
		while(d>=size){
			d=d-size;
		}
		reverseArr(arr,0,d-1);
		reverseArr(arr,d,size-1);
		reverseArr(arr,0,size-1);
		printArray(arr);
		System.out.println("ar time "+((int)System.currentTimeMillis()-t));
	}
	
	public static void main(String[] args)throws IOException{
		int[] arr = {1,2,3,4,5};
		int size = 5;
		int d =2;
		System.out.println("1. jugglingAlgo, 2.blockSwapAlgo, 3.reversalAlgo");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		switch(Integer.parseInt(br.readLine())){
			case 1 : jugglingAlgo(arr,size,d);
			break;
			//case 2 : blockSwapAlgo(arr,size,d);
			//break;
			case 3 : reversalAlgo(arr,size,d);
			break;
			default :
			System.out.println("wrong choice"); 
		}		
	}
}