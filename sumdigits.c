#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum;
    scanf("%d", &n);
    sum = 0;
    while (n >= 10)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    sum = sum + n;
    printf("%d", sum);
    return 0;
}
