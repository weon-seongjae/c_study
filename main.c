#include <stdio.h>

//int main() {
//   int a, b;
//   a = 10;
//   b = 3;
//   printf("a+b�� : %d \n", a + b);
//   printf("a-b�� : %d \n", a - b);
//   printf("a*b�� : %d \n", a * b);
//   printf("a/b�� : %d \n", a / b);
//   printf("a%%b�� : %d \n",  a % b); // %�� ������ �����͸� ���� ����
//   return 0;
//}

//int main() {
//    int a;
//    double b;
//    a = 10;
//    b = 3;
//    printf("a / b�� : %f \n", a / b); // b�� double �Ǽ����̹Ƿ�, ���� �� a�� ���������� �Ǽ������� �ٲ�.
//    printf("b / a �� : %f \n", b / a);
//    printf("a / b �� : %d \n", a / b); // ���� ���
//    return 0;
//}

//int main() {
//    int a = 3;
//    a = a + 3;
//    printf("a�� ���� : %d \n", a);
//    return 0;
//}

//int main() {
//    int a = 1, b = 1, c = 1, d = 1;
//
//    a = a + 1;
//    printf("a : %d \n", a);
//    b += 1;
//    printf("b : %d \n", b);
//    ++c; // ������(prefix)
//    printf("c : %d \n", c);
//    d++; // ������(postfix)
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
//    printf("b�� ����ִ� ���� unsigned int�� �ؼ����� �� �� : %u \n", b);
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
//    printf("a�� ���� ����ִ� ���ڴ�? : �� : %d, ���� : %c \n", a, a);
//
//    return 0;
//}

//int main() {
//    double celsius;
//
//    printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷��Դϴ�. \n");
//    printf("���� �µ��� �Է��� �ּ���. ");
//    scanf("%lf", &celsius);
//
//    printf("���� %f ���� ȭ���� %f ���Դϴ�. \n", celsius, 9 * celsius / 5 + 32);
//    printf("���� %f ���� ȭ���� %f ���Դϴ�. \n", celsius, 9 / 5 * celsius + 32);
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
//    printf("char �� ���� �Է� : ");
//    scanf("%c", &ch);
//
//    printf("short �� ���� �Է� : ");
//    scanf("%hd", &sh);
//    printf("int �� ���� �Է� : ");
//    scanf("%d", &i);
//    printf("long�� ���� �Է� : ");
//    scanf("%ld", &lo);
//
//    printf("float�� ���� �Է� : ");
//    scanf("%f", &fl);
//    printf("double�� ���� �Է� : ");
//    scanf("%lf", &du);
//
//    printf("char : %c, short : %d, int : %d ", ch, sh, i);
//    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
//
//    return 0;
//}

//int main() {
//    int i;
//    printf("�Է��ϰ� ���� ���ڸ� �Է��ϼ���. : ");
//    scanf("%d", &i);
//
//    if (i == 7) {
//        printf("����� ����� ���� 7�� �Է��߽��ϴ�.");
//    }
//
//    return 0;
//}

//int main() {
//    double i, j;
//    printf("������ ���� �� ������ �Է��ϼ���. : ");
//    scanf("%lf %lf", &i, &j);
//
//    if (j == 0) {
//        printf("0���� ���� �� �����ϴ�.");
//        return 0;
//    }
//    printf("%f�� %f�� ���� ����� : %f \n", i, j, i / j);
//    return 0;
//}

/* �հ�? ���հ�? */
//int main() {
//    int score;
//
//    printf("����� ���������� �Է��ϼ���. : ");
//    scanf("%d", &score);
//
//    if (score >= 90) {
//        printf("����� �հ��Դϴ�. \n");
//        return 0;
//    }
//    printf("����� ���հ��Դϴ�. \n");
//
//    return 0;
//}

/* ũ�� ���ϱ� */
//int main() {
//    int i, j;
//    printf("ũ�⸦ ���� �� ���� �Է��� �ּ���. : ");
//    scanf("%d %d", &i, &j);
//
//    if (i > j) {
//        printf("%d�� %d���� Ů�ϴ�. \n", i, j);
//    }
//    if (i < j) {
//        printf("%d�� %d���� �۽��ϴ�. \n", i, j);
//    }
//    if (i >= j) {
//        printf("%d�� %d���� ũ�ų� �����ϴ�. \n", i, j);
//    }
//    if (i <= j) {
//        printf("%d�� %d���� �۰ų� �����ϴ�. \n", i, j);
//    }
//    if (i == j) {
//        printf("%d�� %d�� �����ϴ�. \n", i, j);
//    }
//    if (i != j) {
//        printf("%d�� %d��(��) �ٸ��ϴ�. \n", i, j);
//    }
//    return 0;
//}

/* if - else �� */
//int main() {
//    int num;
//
//    printf("�ƹ� ���ڳ� �Է��� ������. : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("����� ���� 7�̱���!\n");
//    } else {
//        printf("�׳� ���� ������ %d�� �Է��߱���!\n", num);
//    }
//    return 0;
//}

//int main() {
//    int num;
//
//    printf("�ƹ� ���ڳ� �Է��� ������ : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("����� ���� 7 �̱���.\n");
//    } else {
//        if (num == 4) {
//            printf("������ ���� 4�ΰ��� ;;; \n");
//        } else {
//            printf("�׳� ����� ���� %d \n", num);
//        }
//    }
//    return 0;
//}

//int main() {
//    int num;
//
//    printf("�ƹ� ���ڳ� �Է��� ������ : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("����� ���� 7�̱���! \n");
//    } else if (num == 4) {
//        printf("������ ���� 4�ΰ��� ;;; \n");
//    } else {
//        printf("�׳� ����� ���� %d \n", num);
//    }
//    return 0;
//}

//int main() {
//    int num;
//
//    printf("�ƹ� ���ڳ� �Է��ϼ��� : ");
//    scanf("%d", &num);
//
//    if (num == 7) {
//        printf("a ����� ���� 7 �̱���! \n");
//    } else if (num == 7) {
//        printf("b ����� ���� 7 �̱���. \n");
//    }
//
//    if (num == 7) {
//        printf("c ����� ���� 7 �̱���! \n");
//    }
//    if (num == 7) {
//        printf("d ����� ���� 7 �̱���! \n");
//    }
//}

//int main() {
//    float ave_score;
//    float math, english, science, programming;
//
//    printf("����, ����, ����, ��ǻ�� ���α׷��� ������ ���� �Է��� �ּ���! ");
//    scanf("%f %f %f %f", &math, &english, &science, &programming);
//
//    ave_score =
//            (math + english + science + programming) / 4;
//    printf("����� ��� ������ %f�Դϴ�. \n", ave_score);
//    if (ave_score >= 90) {
//        printf("����� �����Դϴ�. ");
//    } else if (ave_score >= 30) {
//        printf("���ݸ� ����ϼ���!. \n");
//    } else  if (ave_score > 0) {
//        printf("���θ� �߷� �մϱ�? \n");
//    } else {
//        printf("�λ��� �����ϼ̱���.");
//    }
//    return 0;
//}

//int main() {
//    int a;
//    printf("�ƹ� ���ڳ� �Է��ϼ��� : ");
//    scanf("%d", &a);
//
//    if (a >= 10 & a < 20) {
//            printf("%d�� 10�̻�, 20�̸��� �� �Դϴ�. \n", a);
//    }
//    return 0;
//}

//int main() {
//    int height, weight;
//    printf("����� Ű�� �����Ը� ���� �Է��� �ּ��� : ");
//    scanf("%d %d", &height, &weight);
//
//    if (height >= 190 || weight >= 100) {
//        printf("����� '�ű�'�Դϴ�. \n");
//    } else {
//        printf("����� '�ű�'�� �ƴմϴ�. \n");
//    }
//    return 0;
//}

//int main() {
//    int i;
//    for (i = 0; i < 20; i++) {
//        printf("���� : %d \n", i);
//    }
//    return 0;
//}

//int main() {
//    int i, sum = 0;
//    for (i = 0; i < 10001; i++) {
//        sum = sum + i;
////        printf("%d \n", sum);
//    }
//    printf("1���� 10,000������ �� : %d", sum);
//    return 0;
//}

//int main() {
//    int i;
//    int subject, score;
//    double sum_score = 0;
//
//    printf("�� ���� ���� ������ �Է¹��� ���ΰ���?");
//    scanf("%d", &subject);
//
//    printf("\n �� ������ ������ �Է��� �ּ��� \n");
//    for (i = 1; i <= subject; i++) {
//        printf("���� %d : ", i);
//        scanf("%d", &score);
//        sum_score = sum_score + score;
//    }
//    printf("��ü ������ ����� : %.2f \n", sum_score / subject);
//    return 0;
//}

//int main() {
//    int usranswer;
//
//    printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������: \n");
//
//    for (;;) { //for ���� ���ǽ�, �ʱ���� ���� ��쿡�� �׻� ��(true)
//        scanf("%d", &usranswer);
//        if (usranswer == 3) {
//            printf("���߼̱���: \n");
//            break;
//        } else {
//            printf("Ʋ�Ⱦ��: \n");
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
//            printf("%d �� %d = %d \n", i, j, i*j);
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
//    printf("1���� 100������ �� : %d \n", sum);
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
//    printf("���ϴ� ���� �Է��ϼ��� : \n");
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
//    printf("���ϴ� ���� �Է��ϼ��� : \n");
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
//    printf("������ ���׷��̵� \n");
//    printf("������ �Ͻ� ������ �Է��ϼ��� \n");
//    printf("1. ���ֱ� \n");
//    printf("2. �ı�� \n");
//    printf("3. ���� \n");
//
//    scanf("%d", &input);
//
//    switch (input) {
//        case 1:
//            printf("���� ���־�! \n");
//            break;
//        case 2:
//            printf("���� �ÿ���! \n");
//            break;
//        case 3:
//            printf("zzz \n");
//            break;
//        default:
//            printf("���� ������� �� �˾Ƶ�ھ�. �п� \n");
//            break;
//    }
//    return 0;
//}

//int main() {
//    char input;
//
//    printf("(�ҹ���) ���ĺ� �б�\n");
//    printf("���ĺ� : ");
//
//    scanf("%c", &input);
//
//    switch(input) {
//        case 'a':
//            printf("���� \n");
//            break;
//
//        case 'b':
//            printf("�� \n");
//            break;
//
//        case 'c':
//            printf("�� \n");
//            break;
//
//        default:
//            printf("�˼��ؿ�.. �Ӹ��� ������ �� �о�� \n");
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