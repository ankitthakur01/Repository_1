#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,n;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the values of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
