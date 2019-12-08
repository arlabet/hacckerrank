#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxAnd;
    int maxOr;
    int maxXor;
    int a;
    int b;
    a = 1;
    maxAnd = 0;
    maxOr = 0;
    maxXor = 0;
    while (a<=n) {
        b = a + 1;
        while (b<=n) {
            if (((a&b) > maxAnd) && ((a&b) < k)) {
                maxAnd = a&b;
            }
            if (((a|b) > maxOr) && ((a|b) < k)) {
                maxOr = a|b;
            }
            if (((a^b) > maxXor) && ((a^b) < k)) {
                maxXor = a^b;
            }
        b++;
        }
        a++;
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}