#include<iostream>
using namespace std;
int main() {
int x,p;
cin>>x>>p;
if(x==0)
cout<<"0"<<endl;
else
{
int cnt=x;
while(x>0)
{
float k=(float)(x*p)/100;
x-=k;
cnt+=x;
}
cout<<cnt<<endl;
}
return 0;
}
