# lab-5-Array
//ques 4
#include<iostream>
using namespace std;

void merge(int a[],int m,int b[],int n)
 {
  int c[m+n],j,s,l,i=0;

      if(m>n)
        {
         for(j=0;j<m;j++)
            {
             c[j]=a[j];
            }
         for(j=m;j<m+n;j++)
            {
             c[j]=b[i];
             i++;
            }
        }
      else  if(n>m)
              {
              for(j=0;j<n;j++)
                {
                 c[j]=b[j];
                }
              for(j=n;j<m+n;j++)
                {
                 c[j]=a[i];
                 i++;
                }
        }
      else
          {
              for(j=0;j<m;j++)
                {
                 c[j]=b[j];
                }
              for(j=m;j<m+n;j++)
                {
                 c[j]=a[i];
                 i++;
                }
          }
    cout<<"\nthe final array :";
    for(j=0;j<m+n;j++)
       {
       cout<<"\t"<<c[j];
       }
   s=l=c[0];
   for(i=0;i<m+n;i++)
      {
      if(c[i]<s)
        s=c[i];
      if(c[i]>l)
        l=c[i];
      }
   cout<<"\nsmallest elment="<<s;
   cout<<"\nlargest element="<<l;
}
                                                                                                                  1,5           Top
int main()
 {
 int m,n,i;
  cout<<"\nenter the length of array A:";
  cin>>m;
  int a[m];
  cout<<"\nenter the elements of array A:";
  for(i=0;i<m;i++)
     {
      cin>>a[i];
     }
  cout<<"\nthe array A:";
    for(i=0;i<m;i++)
       {
       cout<<"\t"<<a[i];
       }

  cout<<"\nenter the length of array B:";
  cin>>n;
  int b[n];
  cout<<"\nenter the elements of array B:";
  for(i=0;i<n;i++)
     {
      cin>>b[i];
     }
  cout<<"\nthe array B:";
    for(i=0;i<n;i++)
       {
       cout<<"\t"<<b[i];
       }

  merge(a,m,b,n);
  return 0;
 }
