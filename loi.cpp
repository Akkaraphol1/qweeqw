#include<iostream>
#include<string>
using namespace std;
int main(void)
{  
	int val[3][2];
	cout<<"Input all elements of array"<<endl;
    for (int i = 0; i < 2;++i){
		cout<<"Input subtest "<< i+1 <<" : ";
	    cin>>val[i][0];
		cout<<"Input midterm "<< i+1 <<" : ";
	    cin>>val[i][1];
		cout<<"Input final "<<i+1<<" : ";
	    cin>>val[i][2];
		cout<<endl;
	 }  
	 cout<<"Transpose matrix"<<endl;
     for (int i = 0; i < 3;++i)
	{
	 for(int j = 0; j < 2 ;++j)
	 {  
		cout<<val[j][i]<<"\t";
	 }
	 cout<<endl;
     }   
	 
	 return 0;
} 