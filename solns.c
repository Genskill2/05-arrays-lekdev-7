/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[100],int n)
{
 int max;
 max=arr[0];
 for(int i=1;i<n;i++)
 {
  if(arr[i]>max)
   max=arr[i];
 }
 return max;
}


int min(int arr[100],int n)
{
 int min;
 min=arr[0];
 for(int i=1;i<n;i++)
 {
  if(arr[i]<min)
   min=arr[i];
 }
 return min;
}


float average(int arr[100],int n)
{
 int sum=0;
 for(int i=0;i<n;i++)
  sum=sum+arr[i];
 return (float)(sum/n;
}

int mode(int a[100],int n) 
 {
   int maxValue = 0, maxCount = 0, i, j;
  
  for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

int factors(int n, int a[])
{
  int count=0;
  for(int i=0;i<100;++i)
  {
    if(n>0 && n!=1)
    {
      for(int j=2;j<100;j++)
      {
        if(n%j==0)
        {
          a[i]=j;
          count++;
          n=n/j;
          break;
        }

      }
    }
    else
      break;
  }
    return count;
}
