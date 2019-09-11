#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void print_arr(string *name,int *num,int n);
int total = 0;
int main()
{   int n;
	cout<<"Enter number of student : ";
	cin >> n;
	string *name = new string[n];
	int *num = new int [n];
	for(int i = 0;i < n;i++){
		cout<<"Enter name : ";
		cin >> name[i];
		cout<<"Enter number : ";
		cin >> num[i];
		total += num[i];
	}
	print_arr(name,num,n);
	system("pause");
	return 0 ;
 }
void print_arr(string *name,int *num,int n)
{   float total = 0;
	cout<<"-----------------"<<endl;
    cout<<"Name\t"<<"score"<<endl;
	cout<<"-----------------"<<endl;

	for(int i = 0; i < n;i++)
		{cout<<name[i] <<"\t"<<num[i]<<endl;
         total += num[i];
	}
	cout<<"-----------------"<<endl;
	cout<<"Average score = "<<fixed<<setprecision(2) <<total/n<< '\n';
	
}