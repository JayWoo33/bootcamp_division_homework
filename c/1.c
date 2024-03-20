/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    char input[3];
    scanf("%s", &input);
    printf("%c%c%c", input[2], input[1], input[0]);

    return 0;
}