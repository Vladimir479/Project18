#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int grade;
    printf("������� ������ (1-5): ");
    scanf("%d", &grade); 

  
    switch (grade) {
    case 1:
        printf("�����\n");
        break;
    case 2:
        printf("�������������������\n");
        break;
    case 3:
        printf("�������������\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("�������\n");
        break;
    default:
        printf("������: ������� ����� �� 1 �� 5\n");
    }

    return 0;
}