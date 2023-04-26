#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
	int i,j;
	for(i=0;i<n-i-1;i++){
		for(j=0;j<n-i-1;i++){
			if(arr[j]>arr[j+1]){
		
			swap(arr[j],arr[j+1]);
}
		
		}
	}
	
}
int main(){
	int arr[]={64,25,64,8,45,26,98};
	int n=sizeof (arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<<"sorted array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
	int i,key,j;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	
}



int main() {
   int arr[] = { 12, 11, 13, 5, 6 };
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Array before sorting: ";
   for(int i=0; i<n; i++){
       cout << arr[i] << " ";
   }
   insertionSort(arr, n);
   cout << endl << "Array after sorting: ";
   for(int i=0; i<n; i++){
       cout << arr[i] << " ";
   }
}
