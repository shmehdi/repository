#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int input,i,j;
while(1){

cout<<"Enter the size of diamond"<<endl;
cin>>input;
system("clear");
for(i=1;i<=(input/2)+(input%2);i++)
{
for(j=1;j<= (input*2)+1;j++)
{
if(((input+1)-(i-1)==j)||(j==(input+1)+(i-1)))
{cout<<"*";}
else
{cout<<" ";}
}
cout<<endl;
}
for(i=input/2;i>=1;i--)
{
for(j=1;j<= (input*2)+1;j++)
{
if(((input+1)-(i-1)==j)||(j==(input+1)+(i-1)))
{cout<<"*";}
else
{cout<<" ";}
}
cout<<endl;
}
}
}
