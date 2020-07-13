#include <stdio.h>

//int main() {
//   int a, b;
//   a = 10;
//   b = 3;
//   printf("a+b는 : %d \n", a + b);
//   printf("a-b는 : %d \n", a - b);
//   printf("a*b는 : %d \n", a * b);
//   printf("a/b는 : %d \n", a / b);
//   printf("a%%b는 : %d \n",  a % b); // %는 정수형 데이터만 연산 가능
//   return 0;
//}

//int main() {
//    int a;
//    double b;
//    a = 10;
//    b = 3;
//    printf("a / b는 : %f \n", a / b); // b가 double 실수형이므로, 연산 시 a가 정수형에서 실수형으로 바뀜.
//    printf("b / a 는 : %f \n", b / a);
//    printf("a / b 는 : %d \n", a / b); // 오류 출력
//    return 0;
//}

//int main() {
//    int a = 3;
//    a = a + 3;
//    printf("a의 값은 : %d \n", a);
//    return 0;
//}

//int main() {
//    int a = 1, b = 1, c = 1, d = 1;
//
//    a = a + 1;
//    printf("a : %d \n", a);
//    b += 1;
//    printf("b : %d \n", b);
//    ++c; // 전위형(prefix)
//    printf("c : %d \n", c);
//    d++; // 후위형(postfix)
//    printf("d : %d \n", d);
//
//    return 0;
//
//}

int main() {
    int a = 1;

    printf("++a : %d \n", ++a);

    a = 1;
    printf("a++ : %d \n", a++);
    printf("a : %d \n", a);
}

