#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b,c,d,e,f,g,h,i,j,k;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    if(a==b)
    {
        printf("You have entered the same number:\n");
    }
    else
    {
      for(c=a+b;b<=c;c=c+b)
        break;
      for(d=c+b;c<=d;d=d+c)
        break;
      for(e=d+c;d<=e;e=e+d)
        break;
      for(f=e+d;e<=f;f=f+e)
        break;
      for(g=f+e;f<=g;g=g+f)
        break;
      for(h=g+f;g<=h;h=h+g)
        break;
      for(i=h+g;h<=i;i=i+h)
        break;
      for(j=i+h;i<=j;j=j+i)
        break;
      for(k=j+i;k>=j;k=k+j)
        break;
    {
        printf(":%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,",a,b,c,d,e,f,g,h,i,j);

    }
    }

    return 0;
}
