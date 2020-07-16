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

//int main() {
//    int a = 1;
//
//    printf("++a : %d \n", ++a);
//
//    a = 1;
//    printf("a++ : %d \n", a++);
//    printf("a : %d \n", a);
//}

//int main() {
//    int a = 0xAF;
//    int b = 0xB5;
//
//    printf("%x \n", a & b);
//    printf("%x \n", a | b);
//    printf("%x \n", a ^ b);
//    printf("%x \n", ~a);
//    printf("%x \n", a << 2);
//    printf("%x \n", b >> 3);
//}

//int main() {
//    int a = 2147483647;
//    printf("a : %d \n", a);
//
//    a++;
//    printf("a : %d \n", a);
//
//    return 0;
//}

//int main() {
//    unsigned int b = -1;
//    printf("b에 들어있는 값을 unsigned int로 해석했을 때 값 : %u \n", b);
//
//    return 0;
//}

//int main() {
//    unsigned int b = 4294967295;
//    printf("b : %u \n", b);
//
//    b++;
//    printf("b : %u \n", b);
//
//    return 0;
//}

//int main() {
//    char a;
//    a = 'a';
//
//    printf("a의 값과 들어있는 문자는? : 값 : %d, 문자 : %c \n", a, a);
//
//    return 0;
//}

//int main() {
//    double celsius;
//
//    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램입니다. \n");
//    printf("섭씨 온도를 입력해 주세요. ");
//    scanf("%lf", &celsius);
//
//    printf("섭씨 %f 도는 화씨로 %f 도입니다. \n", celsius, 9 * celsius / 5 + 32);
//    printf("섭씨 %f 도는 화씨로 %f 도입니다. \n", celsius, 9 / 5 * celsius + 32);
//
//    return 0;
//}

//int main() {
//    char ch;
//
//    short sh;
//    int i;
//    long lo;
//
//    float fl;
//    double du;
//
//    printf("char 형 변수 입력 : ");
//    scanf("%c", &ch);
//
//    printf("short 형 변수 입력 : ");
//    scanf("%hd", &sh);
//    printf("int 형 변수 입력 : ");
//    scanf("%d", &i);
//    printf("long형 변수 입력 : ");
//    scanf("%ld", &lo);
//
//    printf("float형 변수 입력 : ");
//    scanf("%f", &fl);
//    printf("double형 변수 입력 : ");
//    scanf("%lf", &du);
//
//    printf("char : %c, short : %d, int : %d ", ch, sh, i);
//    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
//
//    return 0;
//}

//int main() {
//    int i;
//    printf("입력하고 싶은 숫자를 입력하세요. : ");
//    scanf("%d", &i);
//
//    if (i == 7) {
//        printf("당신은 행운의 숫자 7을 입력했습니다.");
//    }
//
//    return 0;
//}

//int main() {
//    double i, j;
//    printf("나누고 싶은 두 정수를 입력하세요. : ");
//    scanf("%lf %lf", &i, &j);
//
//    if (j == 0) {
//        printf("0으로 나눌 수 없습니다.");
//        return 0;
//    }
//    printf("%f를 %f로 나눈 결과는 : %f \n", i, j, i / j);
//    return 0;
//}

/* 합격? 불합격? */
//int main() {
//    int score;
//
//    printf("당신의 수학점수를 입력하세요. : ");
//    scanf("%d", &score);
//
//    if (score >= 90) {
//        printf("당신은 합격입니다. \n");
//        return 0;
//    }
//    printf("당신은 불합격입니다. \n");
//
//    return 0;
//}

/* 크기 비교하기 */
//int main() {
//    int i, j;
//    printf("크기를 비교할 두 수를 입력해 주세요. : ");
//    scanf("%d %d", &i, &j);
//
//    if (i > j) {
//        printf("%d는 %d보다 큽니다. \n", i, j);
//    }
//    if (i < j) {
//        printf("%d는 %d보다 작습니다. \n", i, j);
//    }
//    if (i >= j) {
//        printf("%d는 %d보다 크거나 같습니다. \n", i, j);
//    }
//    if (i <= j) {
//        printf("%d는 %d보다 작거나 같습니다. \n", i, j);
//    }
//    if (i == j) {
//        printf("%d는 %d와 같습니다. \n", i, j);
//    }
//    if (i != j) {
//        printf("%d는 %d와(과) 다릅니다. \n", i, j);
//    }
//    return 0;
//}

/* if - else 문 */
//int main() {
//    int num;
//
//    printf("아무 숫자나 입력해 보세요. : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("행운의 숫자 7이군요!\n");
//    } else {
//        printf("그냥 보통 숫자인 %d를 입력했군요!\n", num);
//    }
//    return 0;
//}

//int main() {
//    int num;
//
//    printf("아무 숫자나 입력해 보세요 : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("행운의 숫자 7 이군요.\n");
//    } else {
//        if (num == 4) {
//            printf("죽음의 숫자 4인가요 ;;; \n");
//        } else {
//            printf("그냥 평범한 숫자 %d \n", num);
//        }
//    }
//    return 0;
//}

//int main() {
//    int num;
//
//    printf("아무 숫자나 입력해 보세요 : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("행운의 숫자 7이군요! \n");
//    } else if (num == 4) {
//        printf("죽음의 숫자 4인가요 ;;; \n");
//    } else {
//        printf("그냥 평범한 숫자 %d \n", num);
//    }
//    return 0;
//}

//int main() {
//    int num;
//
//    printf("아무 숫자나 입력하세요 : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("a 행운의 숫자 7 이군요! \n");
//    } else if (num == 7) {
//        printf("b 행운의 숫자 7 이군요. \n");
//    }
//
//    if (num == 7) {
//        printf("c 행운의 숫자 7 이군요! \n");
//    }
//    if (num == 7) {
//        printf("d 행운의 숫자 7 이군요! \n");
//    }
//}

//int main() {
//    float ave_score;
//    float math, english, science, programming;
//
//    printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요! ");
//    scanf("%f %f %f %f", &math, &english, &science, &programming);
//
//    ave_score =
//            (math + english + science + programming) / 4;
//    printf("당신의 평균 점수는 %f입니다. \n", ave_score);
//    if (ave_score >= 90) {
//        printf("당신은 우등생입니다. ");
//    } else if (ave_score >= 30) {
//        printf("조금만 노력하세요!. \n");
//    } else  if (ave_score > 0) {
//        printf("공부를 발로 합니까? \n");
//    } else {
//        printf("인생을 포기하셨군요.");
//    }
//    return 0;
//}

//int main() {
//    int a;
//    printf("아무 숫자나 입력하세요 : ");
//    scanf("%d", &a);
//
//    if (a >= 10 & a < 20) {
//            printf("%d는 10이상, 20미만인 수 입니다. \n", a);
//    }
//    return 0;
//}

//int main() {
//    int height, weight;
//    printf("당신의 키와 몸무게를 각각 입력해 주세요 : ");
//    scanf("%d %d", &height, &weight);
//
//    if (height >= 190 || weight >= 100) {
//        printf("당신은 '거구'입니다. \n");
//    } else {
//        printf("당신은 '거구'가 아닙니다. \n");
//    }
//    return 0;
//}

//int main() {
//    int i;
//    for (i = 0; i < 20; i++) {
//        printf("숫자 : %d \n", i);
//    }
//    return 0;
//}

//int main() {
//    int i, sum = 0;
//    for (i = 0; i < 10001; i++) {
//        sum = sum + i;
////        printf("%d \n", sum);
//    }
//    printf("1부터 10,000가지의 합 : %d", sum);
//    return 0;
//}

//int main() {
//    int i;
//    int subject, score;
//    double sum_score = 0;
//
//    printf("몇 개의 과목 점수를 입력받을 것인가요?");
//    scanf("%d", &subject);
//
//    printf("\n 각 과목의 점수를 입력해 주세요 \n");
//    for (i = 1; i <= subject; i++) {
//        printf("과목 %d : ", i);
//        scanf("%d", &score);
//        sum_score = sum_score + score;
//    }
//    printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);
//    return 0;
//}

//int main() {
//    int usranswer;
//
//    printf("컴퓨터가 생각한 숫자를 맞추어 보세요: \n");
//
//    for (;;) { //for 문에 조건식, 초기식이 없는 경우에는 항상 참(true)
//        scanf("%d", &usranswer);
//        if (usranswer == 3) {
//            printf("맞추셨군요: \n");
//            break;
//        } else {
//            printf("틀렸어요: \n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int i;
//
//    for (i = 0; i < 100; i++) {
//        if (i % 5 == 0) continue;
//
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main() {
//    int i, j;
//
//    for (i = 2; i < 10; i++) {
//        for (j = 1; j < 10; j++) {
//            printf("%d × %d = %d \n", i, j, i*j);
//        }
//    }
//    return 0;
//}

//int main() {
//    int i, j;
//        for (i = 1; i < 10; i++) {
//            for (j = 1; j < i; j++) {
//                printf("%d ", j);
//            }
//        }
//    return 0;
//}

//int main() {
//    int i = 1, sum = 0;
//
//    while (i <= 100) {
//        sum += i;
//        i++;
//    }
//    printf("1부터 100까지의 합 : %d \n", sum);
//    return 0;
//}

//int main() {
//    int i = 1, sum = 0;
//
//    do {
//        sum += 1;
//
//        i++;
//    } while (i < 1);
//
//    printf(" sum : %d \n", sum);
//    return 0;
//}

//int main() {
//    int i, j, n;
//
//    printf("원하는 값을 입력하세요 : \n");
//    scanf("%d", &n);
//    for (i=0; i <= n; i++) {
//        if (i == 0) {
//            for (j = 0; j < 5; j++) {
//                if (j == 2) {
//                    printf("*");
//                } else {
//                    printf(" ");
//                }
//            }
//        printf("\n");
//        }
//        if (i == 1) {
//            for (j = 0; j < 5; j++) {
//                if (j == 1 || j == 2 || j == 3) {
//                    printf("*");
//                } else {
//                    printf(" ");
//                }
//            }
//        printf("\n");
//        }
//        if (i == 2) {
//            for (j = 0; j < 5; j++) {
//                printf("*");
//            }
//        printf("\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int i, j, n;
//
//    printf("원하는 값을 입력하세요 : \n");
//    scanf("%d", &n);
//    for (i=0; i <= n; i++) {
//        if (i == 2) {
//            for (j = 0; j < 5; j++) {
//                if (j == 2) {
//                    printf("*");
//                } else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        if (i == 1) {
//            for (j = 0; j < 5; j++) {
//                if (j == 1 || j == 2 || j == 3) {
//                    printf("*");
//                } else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        if (i == 0) {
//            for (j = 0; j < 5; j++) {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int input;
//
//    printf("마이펫 업그레이드 \n");
//    printf("무엇을 하실 것인지 입력하세요 \n");
//    printf("1. 밥주기 \n");
//    printf("2. 씻기기 \n");
//    printf("3. 재우기 \n");
//
//    scanf("%d", &input);
//
//    switch (input) {
//        case 1:
//            printf("아이 맛있어! \n");
//            break;
//        case 2:
//            printf("아이 시원해! \n");
//            break;
//        case 3:
//            printf("zzz \n");
//            break;
//        default:
//            printf("무슨 명령인지 못 알아듣겠어. 왈왈 \n");
//            break;
//    }
//    return 0;
//}

//int main() {
//    char input;
//
//    printf("(소문자) 알파벳 읽기\n");
//    printf("알파벳 : ");
//
//    scanf("%c", &input);
//
//    switch(input) {
//        case 'a':
//            printf("에이 \n");
//            break;
//
//        case 'b':
//            printf("비 \n");
//            break;
//
//        case 'c':
//            printf("씨 \n");
//            break;
//
//        default:
//            printf("죄송해요.. 머리가 나빠서 못 읽어요 \n");
//            break;
//    }
//    return 0;
//}

int main2() {
    int a;
    double b;

    b = 2.4;
    a = b;

    printf("%d", a);
    return 0;
}