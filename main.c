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

int main() {
    float ave_score;
    float math, english, science, programming;

    printf("����, ����, ����, ��ǻ�� ���α׷��� ������ ���� �Է��� �ּ���! ");
    scanf("%f %f %f %f", &math, &english, &science, &programming);

    ave_score =
            (math + english + science + programming) / 4;
    printf("����� ��� ������ %f�Դϴ�. \n", ave_score);
    if (ave_score >= 90) {
        printf("����� �����Դϴ�. ");
    } else if (ave_score >= 30) {
        printf("���ݸ� ����ϼ���!. \n");
    } else {
        printf("���θ� �߷� �մϱ�? \n");
    }
    return 0;
}