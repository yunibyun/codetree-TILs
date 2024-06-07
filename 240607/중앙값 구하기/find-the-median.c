#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ( a > b && b > c ){
        printf("%d", b);
    } else if ( a > b && c > b && c > a ){
        printf("%d", a);
    } else if ( b > a && b > c && a > c){
        printf("%d", a);
    } else if ( b > a && b > c && c > a){
        printf("%d", c);
    } else if ( c > a && a > b ) {
        printf("%d", a);
    } else if ( c > b && b > a && c > a){
        printf("%d", b);
    }
    return 0;
}