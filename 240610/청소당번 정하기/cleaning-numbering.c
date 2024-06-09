#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // count를 위한 변수 선언
    int cnt_croom = 0, cnt_hallway = 0, cnt_restroom = 0;
    int n;
    scanf("%d", &n);

    // n일까지 loop 돌리기
    for (int i = 1; i <= n; i++){
        // 2일마다 교실청소
        if ( i % 2 == 0 ){
            cnt_croom++;
            // 복도 청소랑 겹치는 경우
            if ( i % 6 == 0) {
                cnt_hallway ++;
                cnt_croom --;
            }
            // 화장실 청소랑 겹치는 경우
            if ( i % 12 == 0 ){
                cnt_restroom ++;
                cnt_hallway --;
            }
        // 3일마다 복도 청소
        } else if (i % 3 == 0) {
            cnt_hallway ++;
        }
    }

    // 청소 횟수 출력
    printf("%d %d %d", cnt_croom, cnt_hallway, cnt_restroom);
    return 0;
}