# lab-5-Array
//ques 1
#include<iostream>
using namespace std;
int sum(int a[],int n)
 {
  int sm=0,i;
  for(i=0;i<n;i++)
     {
      sm+=a[i];
     }
  return sm;
 }
int main()
 {
  int a[100],i,n;
  cout<<"\nenter the no. of elements in array:";
  cin>>n;
  cout<<"\nenter the elements of array :";
  for(i=0;i<n;i++)
     {
     cin>>a[i];
     }
  cout<<"\nsum of elements ="<<sum(a,n);
  return 0;
 }
