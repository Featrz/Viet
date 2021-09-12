#include <stdio.h>
#include <stdlib.h>
int main()
{
    Viet();
    return 0;
}
int Viet() {
    int a, b, c;
    printf("Input the following params(a,b,c):\n");
    printf("a: "); scanf_s("%d", &a); if (!a) { printf("No solutions"); return 0; }
    printf("b: "); scanf_s("%d", &b); 
    printf("c: "); scanf_s("%d", &c);
    int x1 = min(-c / a, c / a);
    //printf("%d", -b / a);
    while (x1 < max(-c / a, c / a) + 1) {
        if((x1 != 0) && ((c / a) % x1 == 0) && (x1 + ((c / a)) / x1 == -b / a)) {
            printf("x1 = %d    x2 = %d", x1, ((c / a)) / x1);
            return 0;
            break;
        }
        x1++;
    }
    if (b * b - 4 * a * c < 0) { printf("No solutions"); return 0; }
    printf("No whole solutions");
    return 0;
}
