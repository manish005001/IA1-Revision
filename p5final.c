#include<stdio.h>
float input()
{
  float n;
  printf("enter a number to find the square root of:");
  scanf("%f",&n);
  return n;
}
float sq(float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while (x - y > e)
  {
    x = (x + y) / 2;
    y = n/x;
  }
  return y;
}
 void output (float n,float sq_res)
 {
   printf("square root of given input %0.2f is = %0.2f\n",n,sq_res);
 }

 int main()
 {
   float n, sqrt_res;
   n = input ();
   sqrt_res = sq(n);
   output(n , sqrt_res);
   return 0;
 }