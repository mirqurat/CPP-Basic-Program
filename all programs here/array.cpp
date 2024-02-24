#include<iostream>
using namespace std;
int main()
{
	int arr[2][2]={{2,3},{7,9}};
	int arr1[2][2]={{6,5},{1,8}};
	int sum[2][2];
	  int i,j;
	//first matrix
	
	cout<<"array is"<<endl;
	
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<arr[i][j]<<ends;	
		}
		cout<<endl;
	}
	//secomd matrix...
	
	cout<<" second array is"<<endl;
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<arr1[i][j]<<ends;
		}
		cout<<endl;
	}
	//addition of two matrix...
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			sum[i][j]=arr[i][j]+arr1[i][j];
		}
	
			
	}
	
	//print addition of two matrix...
	cout<<"addition of matrix is "<<endl;
		for(i=0;i<2;i++){
		for (j=0;j<2;j++){
	//	cout<<arr[i][j];
	//	cout<<arr1[i][j];
	
	cout<<sum[i][j]<<ends;

}
	cout<<endl;
}
cout<<endl;
		//subtract of two matrix...
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			sum[i][j]=arr[i][j]-arr1[i][j];
		}
			
	}
	
	//print subtract of two matrix...
	cout<<"subtraction of matrix is "<<endl;
		for(i=0;i<2;i++){
		for (j=0;j<2;j++){
	//	cout<<arr[i][j];
	//	cout<<arr1[i][j];
	
	cout<<sum[i][j]<<ends;

}
	cout<<endl;
}
cout<<endl;
		//multiplication  of two matrix...
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			sum[i][j]=arr[i][j]*arr1[i][j];
		}
			
	}
	
	//print multiplistion of two matrix...
	cout<<"division of matrix is "<<endl;
		for(i=0;i<2;i++){
		for (j=0;j<2;j++){
	//	cout<<arr[i][j];
	//	cout<<arr1[i][j];
	
	cout<<sum[i][j]<<ends;

}
	cout<<endl;
}
cout<<endl;	
	//division of two matrix...
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			sum[i][j]=arr[i][j]/arr1[i][j];
		}
			
	}
	
	//print division  of two matrix...
	cout<<"division of matrix is "<<endl;
		for(i=0;i<2;i++){
		for (j=0;j<2;j++){
	//	cout<<arr[i][j];
	//	cout<<arr1[i][j];
	
	cout<<sum[i][j]<<ends;

}
	cout<<endl;
}
}


	

