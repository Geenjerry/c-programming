#include <stdio.h>
int main()
{
  float a,b,c,d,e,f,g;
  printf("Enter the values of a and b\n");
  scanf("%d %d",&a,&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  g=a%b;
  printf("The sum is:%d\n",c);
  printf("The diffrence is:%d\n",d);
  printf("The product is:%d\n",e);
  printf("The quotient is:%d\n",f);
  printf("The modulo is:%d\n",g);
  return 0;
}
