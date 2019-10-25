//Factotial program C lang

#include <stdio.h>
   int main()
   {
      int c, n, fact = 1;
      
      //Input Number
      
      printf("Enter a number to calculate its factorial\n");
      scanf("%d", &n);
    
        //Factorial
        
     for(c=1;c<=n;c++)
          fact=fact*c;
          
        // Output
        
    printf("Factorial of %d = %d\n", n, fact);
   
   return 0;
}
