#include<iostream>
using namespace std;
int main(){
	//rule 1
	int arr[5]={1,2,3,4,5};
	cout<<arr[0];
	
	//rule 2
	int arr1[]={4,5,6,7,8,9,0,3,2,2};
	cout<<arr1[7]<<endl;
	 //use of pointer
	int *prt = arr;
	int *ptr1 = &arr[1];
	cout<<prt<<endl;
	cout<<*ptr1;
	
	// right way of defining  pointer
	int *ptr2;
	int*ptr52;
	int* prt2;
}
