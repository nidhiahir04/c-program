#include <stdio.h>

/*int main() {
    int sum = 0;
    int i = 1;

    do {
        sum += i;
        i++; 
    } while (i <= 10);

    printf("%d\n", sum);
    return 0;
}
*/

int main() {
    int sum = 0;
    int i = 2;

    do {
        sum += i;
        i+=2; 
    } while (i <= 10);

    printf("%d\n", sum);
    return 0;
}