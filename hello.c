#include <stdio.h>
#include <math.h>

int is_prme(int n)
{
  int i, root;

  if(n== 2) {
      return 1;
  }

  if(n % 2== 0) {
      return 0;
  }

  root = sqrt(n);

  for(i = 3; i <=root; i = i + 2) {
    if(n % i == 0) {
       return 0;
     }
  }

   int main()
   {
       int n, m;

       while(1){
            printf(" please entr a number (enter 0 to exit :");
            scnf ("%d, &n");

            if(n == 0) {
                break;
            }

            if(1 == is_prime(n)) {
                prientf("%d is a prime number.\n", n);
            }
            else {
                prientf("%d is not a pime number.\n", n);
            }
       }

       return 0;
   }

            }
    return 0;
   }
