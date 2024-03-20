#include<stdio.h>
int main() 
{
 int n,p[100],f[10],ava,hit=0,usebit[10],i,j;
 printf("enter the length of the Reference string: ");
 scanf("%d",&n); 
 printf("enter the reference string: \n");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]); 
 for(i=0;i<n;i++)
 {
  ava=0;
    // found
  for(j=0;j<3;j++)
  {
   if(p[i]==f[j])
   {
    ava=1;
    hit++;
    usebit[j]=1;
    break;
   }
  }
    //search for usebit 0
  if(ava==0)
  {
   for(j=0;j<3;j++)
   {
    if(usebit[j]==0)
    {
     f[j]=p[i];
     usebit[j]=1;
     ava=1;
     break;
    }
   }
  }
    // fifo
  if(ava==0)
  {
   for(j=0;j<3;j++)
   usebit[j]=0;
  }
  f[0]=p[i];
  usebit[0]=1;
 } 
 printf("The number of Hits: %d",hit);
 return 0;
} 