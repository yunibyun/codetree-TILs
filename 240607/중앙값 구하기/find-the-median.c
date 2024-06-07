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
    if ( a > b && b > c ){
        printf("%d", b);
    } else if ( a > c && c > b){
        printf("%d", c);
    } else if ( b > a && a > c){
        printf("%d", a);
    } else if ( b > c && c > a){
        printf("%d", c);
    } else if ( c > b && b > a ) {
        printf("%d", b);
    } else if ( c > a && a > b){
        printf("%d", b);
    }
    return 0;
}