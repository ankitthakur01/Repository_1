#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,n;
	cout<<"Enter the size of array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the values of the array\n";
  	for(int i =0; i<size; i++) cin >> arr[i];
	cout<<"your array is\n";
	for(int i =0; i<size; i++) cout << arr[i] <<" ";
	return 0;
}
