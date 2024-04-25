#include<iostream>
using namespace std;
int main(){
	int x,i;
	cout<<"enter any number";
	cin>>x;
	for(i= 2;i<=x/2;i++){
		if(x%2==0){
			cout<<"prime";
			return 0;
		}
		else{
			cout<<"not";
			return 0;
		}
	}
}
