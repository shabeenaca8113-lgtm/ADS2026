#include<stdio.h>
int main()
{
  int marks[10],i,n,sum=0;
  double avg;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  for(i=0;i<n;++i)
  {
   printf("Enter number %d:",i+1);
   scanf("%d",&marks[i]);
   sum+=marks[i];
  }
 avg=(double) sum/n;
 printf("sum=%d \n",sum);
 printf("Average=%.2lf\n",avg);
 return 0;

}
