/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int fac(int n) {
    if (n != 0) {
    int N = 1;
    N = n * fac(n - 1);
    return N;
    }

    return 1;
}

int sum(int n) {
    int answer = 0;

    for (int i = 0; i < n; i++) {
    answer = answer + i + 1;
    }

    return answer;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    printf("%d\n", fac(n));
    
    return 0;
}