#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double vision_l, vision_r;
    scanf("%lf", &vision_l);
    scanf("%lf", &vision_r);
    
    if (vision_l >= 1.0 && vision_r >= 1.0){
        printf("High");
    } else if (vision_l >= 0.5 && vision_r >= 0.5){
        printf("Middle");
    } else {
        printf("Low");
    }

    return 0;
}