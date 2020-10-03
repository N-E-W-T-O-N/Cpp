#include<iostream>
using namespace std;
int main()
{
int n1,n2;

float a[10],b[10];
int c[22];
float y;
cout<<"enter the size of arrays"<<endl;
cin>>n1>>n2;
cout<<"enter the elements of first array"<<endl;
for(int i=1;i<=n1;i++)
cin>>a[i];
cout<<"enter the elements of second array:"<<endl;;
for(int i=1;i<=n2;i++)
cin>>b[i];
int r=n1+n2;
a[n1+1]=1000;
b[n2+1]=1000;
int i=1;
int j=1; 

for(int k=1;k<=r;k++)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else 
{
c[k]=b[j];
j++;
}
}
for(int i=1;i<=r;i++)
cout<<c[i]<<" ";
if(!(n1+n2)%2)
{
cout<<"median element is"<<endl;
y=c[(n1+n2)/2]+c[(n1+n2)/2 +1];
cout<<(y/2.0)<<endl;
}
else
{
cout<<"median element is"<<endl;
cout<<c[(n1+n2)/2+1]<<endl;
}
return 0;
}
