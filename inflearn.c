//
// Created by weonsj on 2020-07-15.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//    int i, j;
//
//    printf("값을 입력하세요 :");
//
//    scanf("%d%d", &i, &j); // ampersand 추가
//
////    printf("Your Numbers are %d and %d \n", i, j);
//    int sum = i+j;
//    printf("%d + %d = %d\n", i, j, sum);
//
//    return 0;
//}

int main() {
    float won;
    float dollar;

    printf("Input won\n");

    scanf("%f", &won);

    dollar = 0.00089f * won;

    printf("Dollar = %f\n", dollar);

    return 0;
}
