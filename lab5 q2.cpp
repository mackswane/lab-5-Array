# lab-5-Array
//ques 2
#include<iostream>
using namespace std;
int large(int a[],int n)
 {
  int l,i;
  l=a[0];
  for(i=0;i<n;i++)
     {
      if(a[i]>l)
        l=a[i];
     }
  return l;
 }

int small(int a[],int n)
 {
  int s,i;
  s=a[0];
  for(i=0;i<n;i++)
     {
      if(a[i]<s)
        s=a[i];
     }
  return s;
 }
float mean(int a[],int n)
 {
  float m,sum=0;
  int i;
  for(i=0;i<n;i++)
     {
      sum+=a[i];
     }
  m=sum/n;
  return m;
 }

float median(int a[],int n)
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
for(i=0;i<n;i++)
     {
      cout<<"\t"<<a[i];
     }

  if(n%2!=0)
    {
     m=a[((n+1)/2)-1];}
  else
     {sm=a[n/2]+a[(n/2)-1];
     m=sm/2;}
  return m;
 }

int frequency(int a[],int n,int k)
 {
  int j,c=0;
      for(j=0;j<n;j++)
         {
          if(a[j]==k)
            c++;
         }
   return c;
  }
int highest(int a[],int n)
 {
  int max=a[0];
  int i,c=0;
  for(i=0;i<n;i++)
     {
      if(frequency(a,n,a[i])>c)
        {
         max=a[i];
         c=frequency(a,n,a[i]);
        }
     }
 return max;
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
  cout<<"\nlargest element="<<large(a,n);
  cout<<"\nsmallest element="<<small(a,n);
  cout<<"\nmean="<<mean(a,n);
  cout<<"\nmedian="<<median(a,n);
  cout<<"\nelement having highest frequncy is "<<highest(a,n);
  return 0;
 }
