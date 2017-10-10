# lab-5-Array
//ques 3
#include<iostream>
using namespace std;

int smallest(int a[],int n,int k)
 {
  float m,sm;
  int i,j,temp;
  for(j=0;j<n;j++)
     {
  for(i=0;i<n-1;i++)
     {
      if(a[i]>a[i+1])
        {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
        }
      }
     }
  return a[k-1];
 }
 
int largest(int a[],int n,int k)
 {
  float m,sm;
  int i,j,temp;
  for(j=0;j<n;j++)
     {
  for(i=0;i<n-1;i++)
     {
      if(a[i]<a[i+1])
        {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
        }
      }
     }
  return a[k-1];
 }
int main()
 {
  int a[100],i,n,k;
  cout<<"\nenter the no. of elements in array:";
  cin>>n;
  cout<<"\nenter the elements of array :";
  for(i=0;i<n;i++)
     {
     cin>>a[i];
     }
  cout<<"\nenter value of random term :";
  cin>>k;
  cout<<"\nkth largest element="<<largest(a,n,k);
  cout<<"\nsmallest element="<<smallest(a,n,k);
  return 0;
 }
