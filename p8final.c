#include <stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
  }  complex;

int get_n()
{
  int n;
  printf("enter the number of complex numbers:");
  scanf("%d",&n);
  return n;
}

 void input_n_complex(int n, complex c[n])
 {
   for(int i=0; i<n; i++)
   {
     printf("enter the real part :");
     scanf("%f", &c[i].real);
     printf("enter the imaginary part:");
     scanf("%f",&c[i].imaginary);
   }
 }
   complex add_n_complex(int n, complex c[n])
   {
     complex res;
     res.real = 0;
     res.imaginary = 0;
     for(int i=0; i<n; i++)
     {
       res.real += c[i].real;
       res.imaginary += c[i].imaginary;
     }
     return res;
   }

    void output(int n, complex c[n], complex result)
    {
      if(n-1)
      {
        printf("%0.2f + %0.2fi + %0.2f + %0.2fi\n",c[0].real, c[0].imaginary , result.real , result.imaginary);
      }
      else
      {
        for(int i=0; i<n-1; i++)
        {
          printf("%0.2f + %0.2f\n",c[i].real,c[i].imaginary);
        }
        printf("+ %0.2f + %0.2fi =\n%0.2f + %0.2fi\n",c[n-1].real,c[n-1].imaginary,result.real, result.imaginary);
      }
      
    }

    int main()
    {
      int n = get_n();
      complex c[n], res;
      input_n_complex(n,c);
      res = add_n_complex(n,c);
      output(n,c,res);
      return 0;
    }
