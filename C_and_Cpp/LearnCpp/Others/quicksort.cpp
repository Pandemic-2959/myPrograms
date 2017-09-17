#include <iostream>
#include <algorithm>
using namespace std;
void quickSort(int a[],int start,int end){
	if(start>=end){
		return;
	}
	else{
		int pIndex = partition(a,start,end);
		quickSort(a,start,pIndex-1);
		quickSort(a,pIndex+1,end);
	}
}
int partition(int a[],int start,int end){
	int pivot=a[end];
	int pIndex=start;
	for(int i=0;i<=end-1;i++){
		if(a[i]<=pivot){
			std::swap(a[i],a[pIndex]);
			pIndex +=1;
		}
	}
	std::swap(a[pIndex],a[end]);
	return pIndex;
}
int main(){
	int arr[] ={7,6,5,4,3,2,1,0};
	quickSort(arr,0,7);
	for(int i=0;i<8;i++)
		cout<<arr[i]<<"  ";
	return 0;
}