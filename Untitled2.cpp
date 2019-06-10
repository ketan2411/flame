#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
char first[100],second[100];
int flag=0,count=0;
printf("Enter first string:- ");
gets(first);
printf("Enter second string:- ");
gets(second);

for(int i=0;first[i]!='\0';i++)
{for(int j=0;second[j]!='\0';j++)
{
if(first[i]==second[j])
 count++;
 else 
 {
 }
}}cout<<count;
if(count==1)
cout<<"friends";
if(count==2)
cout<<"love";
if(count==3)
cout<<"affection";
if(count==4)
cout<<"marriage";  ///shreysh //ikit
if(count==5)
cout<<"enimes";

return 0;
}
