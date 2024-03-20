/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int point;
    scanf("%d", &point);
    
    if(90<=point && point<=100){
        printf("A\n");
    }else if(80<=point && point<90){
        printf("B\n");
    }else if(70<=point && point<80){
        printf("C\n");
    }else if(60<=point && point<70){
        printf("D\n");
    }else if(point<60){
        printf("F\n");
    }else{
        printf("error");
    }

    return 0;
}