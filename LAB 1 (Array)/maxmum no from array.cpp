#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		cout<<i+1<<" : ";
		cin>>arr[i];
	}
	
//	finding the maximum number from the array
	int ans = INT_MIN;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(ans<arr[i]){
			ans = arr[i];
		}
	}
	cout<<"Maximum number: "<<ans;
	return 0;
}
