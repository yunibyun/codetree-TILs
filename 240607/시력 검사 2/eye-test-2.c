#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double vision;
    scanf("%lf", &vision);
    if (vision >= 1.0){
        printf("High");
    } else if (0.5 <= vision){
        printf("Middle");
    } else {
        printf("Low");
    }
    return 0;
}