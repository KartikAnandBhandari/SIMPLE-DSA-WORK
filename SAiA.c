// sum and average in array
# include <stdio.h>
int main()
{
   double arr[10],sum=0.0;
   int count=0;
    while(count<10)
    {
        printf("ENTER THE VALUE");
        scanf("%lf",&arr[count]);
        sum+=arr[count];
        ++count;
     }
     printf("SUM =%.2lf\nAVERAGE =  %.2lf\n ",sum,sum / 10);
}