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

if (a >= b){
    if (b >= c){
        printf("%d", b);
    } else if (a <= c){
        printf("%d", a);
    } else {
        printf("%d", b);
    }
} else if ( c < a ){
    printf("%d", a);
} else if ( b > c ){
    printf("%d", c);
} else {
    printf("%d", b);
}
    return 0;
}