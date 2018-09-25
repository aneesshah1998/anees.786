#include<iostream>
using namespace std;
int main()
{
int num;
int count=0;
cin>>num;
if (num>1)
{
for (int x=1;x<=num;x++)
{
if (num%x==0)
{
count++;
}
}
if (count>2)
{cout<<"number is not prime"<<endl;}
else
{cout<<"number is prime"<<endl;}
}
else
cout<<"not prime"<<endl;
return 0;
}
