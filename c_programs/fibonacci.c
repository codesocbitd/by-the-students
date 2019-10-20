#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num) {
    if(num == 0) {
        return 0;
    }
    else if(num == 1){
        return 1;
    }
    else {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main() {
    int n;
    printf("Input: ");
    scanf("%d", &n);
    printf("Fibonacci of %d: %d", n, fibonacci(n));

    return 0;
}
