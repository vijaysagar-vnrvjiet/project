#include<iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(a==0)
cout<<"0"<<endl;
else
{
int cnt=a;
while(a>0)
{
float k=(float)(a*b)/100;
a-=k;
cnt+=a;
}
cout<<cnt<<endl;
}
return 0;
}
