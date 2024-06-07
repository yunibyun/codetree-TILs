#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a = 'A', b = 'B', c = 'C', d = 'D';
    char symptoms_a, symptoms_b, symptoms_c;
    int temp_a, temp_b, temp_c;

    scanf("%c %d\n", &symptoms_a, &temp_a);
    scanf("%c %d\n", &symptoms_b, &temp_b);
    scanf("%c %d", &symptoms_c, &temp_c);
    
    if (symptoms_a = 'Y' && temp_a >= 37){
        if ((symptoms_b = 'Y' && temp_b >= 37) || (symptoms_c = 'Y' && temp_c >= 37)){
            printf ("E");
        } else {
            printf ("N");
        }
    } else if (symptoms_b = 'Y' && temp_b >= 37){
        if (symptoms_c = 'Y' && temp_c >= 37){
            printf ("E");
        } else {
            printf ("N");
        }
    } else {
        printf ("N");
    }
    return 0;
}