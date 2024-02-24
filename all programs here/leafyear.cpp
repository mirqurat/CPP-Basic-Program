#include<iostream>
using namespace std;
int main(){
	 int year;
	 cout<<"enter any year"<<endl;
	 cin>>year;
	 if(year % 4 ==0 && year %100!=0)
	 {
	 	cout<<"year is leap";
	 	
	 }
	 else {
	 	cout<<"year is not leaf";
	 }
	 return 0;
}
