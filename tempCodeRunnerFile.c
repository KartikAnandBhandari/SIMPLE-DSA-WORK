#include <stdio.h>
int main()
{
    int n,count;
    float biggest;
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%f",&n);
    float values[n];

    for(count=0;count<n;count++)
    {
        printf("values[%d]",count);
        scanf("%f",&values[count]);

    }
  biggest = values[0];
   for (count=0;count,n;count++)
   {
    if(values[count]>biggest)
    {
        (biggest=values[count]);

    }

   }
 printf("BIGGEST ELEMENT IN ARRAY=%.2f",biggest);

return 0;}
