#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    scanf("%d", &m);

    if ( m == 1 || m == 2 || m == 12 ){
        printf("Winter");
    } else if ( m >= 3 && m <= 5){
        printf("Spring");
    } else if ( m >= 6 && m <= 8 ){
        printf("Summer");
    } else {
        printf("Fall");
    }
    return 0;
}