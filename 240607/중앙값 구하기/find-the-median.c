#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

/* case 
a > b > c
a > c > b
b > a > c
b > c > a
c > b > a
c > a > b
*/

if (( b > a && a > c ) || ( c > a && a > b )){
    printf("%d", a);
} else if (( a > b && b > c ) || (c > b && b > a)){
    printf("%d", b);
} else if (( a > c && c > b) || ( b > c && c > a )){
    printf("%d", c);
}
    return 0;
}