#include <stdio.h>

int main(){
    printf("Добро пожаловать на мою программу, которая предлагает вам решить 6 задач. Для продолжения, напишите ниже число от 1 до 6.\n");
    for(int w=0; w<10; w++){
        int q; printf("Введите число от 1 до 6:"); scanf("%d",&q);
        if(q==1){
            printf("Задача 1. Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).\n");
            for(int o=0;o<10;o++){
                float a; printf("Введите целое положительное число А="); scanf("%f",&a);
                float b; printf("Введите целое положительное число B="); scanf("%f",&b);
                if(((int) a==a) && ((int) b==b) && ((a>0) && (b>0)) && (a<b)){
                    printf("Результат:\n");
                    for(int r=a;r<=b;r++){
                        for(int i=1;i<=r;i++){
                            printf("%d ",r);
                        }
                        printf("\n");
                    }
                    break;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==2){
            printf("Задача 2. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A.\n");
            for(int o=0;o<10;o++){
                float a; printf("Введите целое положительное число А="); scanf("%f",&a);
                float b; printf("Введите целое положительное число B="); scanf("%f",&b);
                if(((int) a==a) && ((int) b==b) && ((a>0) && (b>0)) && (a>b)){
                    for(int i=0;i<100;i++){
                        if(a>b){
                            a-=b;
                        }
                        else{
                            printf("Результат=%d\n",(int) a);
                            break;
                        }
                    }
                    break;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==3){
            printf("Задача 3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.\n");
            for(int o=0;o<10;o++){
                int n; printf("Введите целое число N="); scanf("%d",&n);
                int k=0, sum=0;
                if(n>1){
                    while (sum<n){
                        k++;
                        sum+=k;
                    }
                    printf("K=%d\nСумма чисел=%d\n",k,sum);
                    break;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==4){
            printf("Задача 4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).\n");
            for(int o=0;o<10;o++){
                float s=1000;
                float p; printf("Введите процент="); scanf("%f",&p);
                if(((int) p==p) && ((p>0) && (p<25))){
                    printf("\n");
                    int k=0;
                    while(s<=1100){
                        k++;
                        s+=s*p/100;
                    }
                    printf("Вклад=%.2f\nКол-во месяцев=%d\n",s,k);
                    break;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==5){
            printf("Задача 5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида\n");
            for(int o=0;o<10;o++){
                int a; printf("Введите целое положительное число А="); scanf("%d",&a);
                int b; printf("Введите целое положительное число B="); scanf("%d",&b);
                if(((int) a==a) && ((int) b==b) && ((a>0) && (b>0))){
                    while((a!=0) && (b!=0)){
                        if (a>b){
                            a%=b;
                        }
                        else{
                            b%=a;
                        }
                    }
                    printf("HOД=%d\n",a+b);
                    break;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==6){
            printf("Задача 6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.\n");
            for(int o=0;o<10;o++){
                int n; printf("Введите число N="); scanf("%d",&n);
                int f1=1,f2=1,f=0,k=3;
                if(n>1){
                    while (f<n){
                        k++;
                        f=f2+f1;
                        f2=f1;
                        f1=f;
                    }
                    printf("K:%i\n",k);
                    break;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
    }
    return 0;
}
