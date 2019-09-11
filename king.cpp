#include<iostream>
#include<string>
using namespace std;
void display(int *salary,int num) ;
int cal_bonus(int salary);
int main(){
	int n ;
    cout<<"Enter Number of person : ";
	cin>>n;
	int *salary = new int [n]; 
	for(int i = 0 ; i < n; i++)
	{
	cout<<"Enter the salary "<<i+1<<" :";
	cin>>salary[i];
    cout<<endl;
	}
	cout<<"-----------------------------------------"<<endl;
	display(salary,n);
	return 0 ;
}
void display(int *salary,int n)
{  
   cout<<"There are "<< n <<" persons."<< endl;
   for( int i = 0 ; i < n; i++)
   {
      cout<<"The Salary for person "<<i+1<<" : "<< salary[i] <<" and Bonus = "<<cal_bonus(salary[i])<<endl;
   }
   cout<<"------------------------------------------"<<endl;
   cout<<endl;
}
int cal_bonus(int salary)
{
   salary = salary * 2;
   return(salary);
}