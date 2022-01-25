#include <stdio.h>

int main(){
    printf("Добро пожаловать в мою программу. Здесь тебе предлагаются 7 задач на выбор. Для продолжения напишите ниже число от 1 до 7.\n");
    for(int w=0;w<10;w++){
        int q; printf("Введите число от 1 до 7:"); scanf("%d",&q);
        if(q==1){
            printf("Задача 1. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»\n");
            for(int i=0;i<10;i++){
                float a; printf("Введите число А="); scanf("%f",&a);
                float b; printf("Введите число B="); scanf("%f",&b);
                if(((int) a==a) && ((int) b==b)){
                    if((a>2) && (b<=3)){
                        printf("Высказывание истинно\n");
                        break;
                    }
                    else{
                        printf("Высказывание ложно\n");
                        break;
                    }
                }
                else{
                    printf("Условие неверно, введите ещё раз\n");
                }
            }
        }
        if(q==2){
            printf("Задача 2. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».\n");
            for(int i=0;i<10;i++){
                float a; printf("Введите число А="); scanf("%f",&a);
                float b; printf("Введите число B="); scanf("%f",&b);
                float c; printf("Введите число C="); scanf("%f",&c);
                if(((int) a==a) && ((int) b==b) && ((int) c==c)){
                    if((a<b) && (b<c)){
                        printf("Выражение истинно\n");
                        break;
                    }
                    else{
                        printf("Выражение ложно\n");
                        break;
                    }
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==3){
            printf("Задача 3. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным»\n");
            for(int i=0;i<10;i++){
                float n; printf("Введите целое положительное число:"); scanf("%f",&n);
                if(((int) n==n) && (n>0)){
                    if((n>9) && (n<100)){
                        printf("Число двузначное\n");
                        break;
                    }
                    else{
                        printf("Число недвузначное\n");
                        break;
                    }
                }
                else{
                    printf("Введите число ещё раз\n");
                }
            }
        }
        if(q==4){
            printf("Задача 4. Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».\n");
            for(int i=0;i<10;i++){
                float n; printf("Введите трехзначное число="); scanf("%f",&n);
                if(((int) n==n) && ((n>99)&&(n<1000))){
                    int e=(int) n%10; int d=((int) n%100)/10; int s=(int) n/100;
                    if(((s<d) && (d<e)) || ((s>d) && (d>e))){
                        printf("Высказывание истинно\n");
                        break;
                    }
                    else{
                        printf("Высказывание ложно\n");
                        break;
                    }
                }
                else{
                    printf("Введите число ещё раз\n");
                }
            }
        }
        if(q==5){
            printf("Задача 5. Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».\n");
            for(int i=0;i<10;i++){
                float n; printf("Введите число="); scanf("%f",&n);
                if(((int) n==n) && ((n>999) && (n<10000))){
                    int n1=(int) n/100; int n2=(((int) n%100)%10)*10+(((int) n%100)/10);
                    if(n1==n2){
                        printf("Высказывание истинно\n");
                        break;
                    }
                    else{
                        printf("Высказывание ложно\n");
                        break;
                    }
                }
                else{
                    printf("Введите число ещё раз\n");
                }
            }
        }
        if(q==6){
            printf("Задача 6. Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».\n");
            for(int i=0;i<10;i++){
                float a; printf("Введите число А="); scanf("%f",&a);
                float b; printf("Введите число B="); scanf("%f",&b);
                float c; printf("Введите число C="); scanf("%f",&c);
                if(((int) a==a) && ((int) b==b) && ((int) c==c)){
                    if(((a*a)+(b*b)==(c*c)) || ((b*b)+(c*c)==(a*a)) || ((a*a)+(c*c)==(b*b))){
                        printf("Высказывание истинно\n");
                        break;
                    }
                    else{
                        printf("Высказывание ложно\n");
                        break;
                    }
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==7){
            printf("Задача 7. Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».\n");
            for(int i=0;i<10;i++){
                float a; printf("Введите число А="); scanf("%f",&a);
                float b; printf("Введите число B="); scanf("%f",&b);
                float c; printf("Введите число C="); scanf("%f",&c);
                if(((int) a==a) && ((int) b==b) && ((int) c==c)){
                    if((a+b>c) && (a+c>b) && (c+b>a)){
                        printf("Высказывание истинно\n");
                        break;
                    }
                    else{
                        printf("Высказывание ложно\n");
                        break;
                    }
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
    }
}