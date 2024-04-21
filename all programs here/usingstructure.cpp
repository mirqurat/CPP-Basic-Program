#include<iostream>
using namespace std;
struct student{
	int roll;
	string name;
	float reg_no;
	
	
void studentdetail()	{
	cout<<"roll =  "<<roll<<endl;
	cout<<"name =  "<<name<<endl;
	cout<<"reg-no  =  "<<reg_no<<endl;
}
};
int main(){
	cout<<"student detail is as :"<<endl;
//	student qurat;
//	qurat.name= "quratulein";
//	qurat.reg_no=23.4566;
//	qurat.roll = 24;
student qurat ={24,"qurrat",56.8};
student nasreen ={25,"nasreen",334.56};
 	nasreen.studentdetail();
	qurat.studentdetail();
	cout<<endl;
}
