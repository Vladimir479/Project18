#Homewor7

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <locale.h>

int main() {
   
    setlocale(LC_CTYPE, "RUS");
    
    int grade;
    printf("Введите оценку (1-5): ");
    scanf("%d", &grade); 

  
    switch (grade) {
    case 1:
        printf("плохо\n");
        break;
    case 2:
        printf("неудовлетворительно\n");
        break;
    case 3:
        printf("посредственно\n");
        break;
    case 4:
        printf("хорошо\n");
        break;
    case 5:
        printf("отлично\n");
        break;
    default:
        printf("Ошибка: введите число от 1 до 5\n");
    }

    return 0;
}
