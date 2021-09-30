#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
int n,i;
bool flag = true;
cout<<"Enter a positive integer"<<endl;
cin>>n;
for(i=2;i<=sqrt(n);i++)
{
if(n%i == 0)
{
cout<<"This is not a prime number"<<endl;
flag = false;
break;
}
}
if(flag == true){
cout<<"This is a prime number"<<endl;
}
return 0;
}
