/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int input = 0;
    while(input < 1){
        scanf("%d", &input);
        if (input < 1) {
        printf("X\n");
        }
    }

    int answer = 0;
    for (int i = 0; i < input; i++) {
    answer = answer + i + 1;
    }
    printf("%d\n", answer);

    return 0;
}