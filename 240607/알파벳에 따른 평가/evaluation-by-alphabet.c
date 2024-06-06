#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char letter;
    scanf("%c", &letter);

    if(letter == 'S'){
        printf("Superior");
    } else if(letter == 'A'){
        printf("Excellent");
    } else if (letter == 'B'){
        printf("Good");
    } else if (letter == 'C'){
        printf("Usually");
    } else if (letter == 'D'){
        printf("Effort");
    } else {
        printf("Failure");
    }
    return 0;
}