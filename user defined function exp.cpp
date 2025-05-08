#include<stdio.h>

// User-defined function to calculate sum
int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}
int main() {
    int a,b;
    printf("Enter a,b value:");
	scanf("%d %d",&a,&b);
    int result = sum(a,b);
    
    printf("Sum of %d and %d is: %d\n", a, b, result);
}

