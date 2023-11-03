// prime number : 2,3,5,7,9,11,13,17 , 19 ,23 ,
// semi-prime number  : it is  a multiplication factor of two prime number
// so in this program we are going to find out the prime number ,we are given a semi -prime number

#include <stdio.h>
#include <math.h>

int main() {
    int sp = 133;
    int p1, p2;

    for (int x = 2; x <= sp; x++) {
        if (sp % x == 0) {
            int is_x_prime = 1;
            for (int i = 2; i <= sqrt(x); i++) {
                if (x % i == 0) {
                    is_x_prime = 0;
                    break;
                }
            }

            if (is_x_prime) {
                p1 = x;
                p2 = sp / x;
                break;
            }
        }
    }

    printf("s1 = %d s2 = %d\n", p1, p2);

    return 0;
}
