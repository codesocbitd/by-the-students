// C program to check if a 
// number is prime 
  
#include <stdio.h> 
  
int main() 
{ 
    int n, i, flag = 1; 
  
    // Ask user for input 
    printf("Enter a number: \n"); 
  
    // Store input number in a variable 
    scanf("%d", &n); 
  
    // Iterate from 2 to n/2, since numbers greater than n/2 can obviously not be a factor of n ;)
    for (i = 2; i <= n/2; i++) {   // you can improvre the time complexity by runnin the loop only till sqrt(n), since for any factor after
        if (n % i == 0) {          // that u would already have a factor before the sqrt(n)
            flag = 0; 
            break; 
        } 
    } 
  
    if (flag == 1) { 
        printf("%d is a prime number", n); 
    } 
    else { 
        printf("%d is not a prime number", n); 
    } 
  
    return 0; 
} 
