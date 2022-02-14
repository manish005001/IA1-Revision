#include<stdio.h>

void input(int *a, int *b, int *c)
{
  printf("enter the first number:");
  scanf("%d", a);
  printf("enter the second number:");
  scanf("%d", b);
  printf("enter the third number:");
  scanf("%d", c);
}
int cmp(int a, int b,int c)
{
  if((a>=b)&&(a>=c))
  {
    return a;
  }
  else if(b>=c)
  {
    return b;
  } 
  else;
  {
    return c;
  }
}
void output(int largest)
{
  printf(" the largest number out of all inputs is:%d", largest);
}
int main()
{
  printf("start of the program:\n");
  int a, b, c, largest;
  input(&a,&b,&c);
  largest=cmp(a,b,c);
  output(largest);
  printf("end of the program\n");
  return 0;
}