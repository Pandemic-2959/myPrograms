#include <iostream>
using namespace std;
void merge(int left[],int right[],int arr[]){
	int nleft = sizeof(left)/sizeof(*left);
	int nright = sizeof(left)/sizeof(*left);
	int noriginal = sizeof(left)/sizeof(*left);
	int i=0;
	int j=0;
	int k=0;
	while((i<nleft)&&(j<nright)){
		if(left[i]<right[j]){
			arr[k++]=left[i++];
		}
		else if(left[i]==right[j]){
			arr[k++]=left[i++];
			arr[k++]=right[j++];
		}
		else{
			arr[k++]=right[j++];
		}
	}
	while(i<nleft){
		arr[k++]=left[i++];
	}
	while(j<nright){
		arr[k++]=left[j++];
	}
}
void mergeSort(int arr[]){
	int n =sizeof(arr)/sizeof(*arr);
	if(n<2){
		return;
	}
	else{
		int mid =n/2;
		int left[mid];
		int right[n-mid];
		int i=0;
		for(i=0;i<mid;i++){
			left[i]=arr[i];
		}
		int j=0;
		for(;i<n;i++){
			right[j++]=arr[i];
		}
		mergeSort(left);
		mergeSort(right);
		merge(left,right,arr);
	}

}
void printarr(int arr[]){
	int length = sizeof(arr)/sizeof(*arr);
	for(int i=0;i<length;i++){
		std::cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int arr[] ={2,6,4,7,23,1,0,98};
	mergeSort(arr);
	printarr(arr);
	return 0;

}