#включить <stdio.h>
#включить <math.h>

int main(){
    printf("Добро пожаловать в мою программу, которая предложит вам решить 5 интересных задач. Для продолжение напишите ниже число от 1 до 5.\n");
    для(int h=0;h<10;h++){
        int q; printf("Введите число от 1 до 5:"); scanf("%d",&q);
        если(q==1){
            printf("Задача 1. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с номерами от K до L включительно\n");
            для(int w=0; w<10;w++){
                int n; printf("Размер массива= "); scanf("%d",&n); 
                int k; printf("Целое число K: "); scanf("%d", &k);
                int l; printf("Целое число L: "); scanf("%d", &l);
                если((k>=>1) && (k<=l) && (l
                    int a[n];
                    для(int i=0;i
                        printf("Введиет %d-й элемент:",i); scanf("%d", &a[i]);
                    }
                    int сумма=0;
                    для(int e=k;e
 сумма+=a[e];
                    }
                    поплавок r=(поплавок)сумма/(((поплавок) l-(поплавок) k) +1);
                    printf("Среднее арифметическое элементов массива=%.2f\n\n", r);
                    перерыв;
                }
                else{
                    printf("Введите условие ещё раз\n");
                }
            }
        }
        if(q==2){
            printf("Задача 2. Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы арифметическую прогрессию. Если образуют, то вывести разность прогрессии, если нет — вывести 0\n");
            for(int w=0;w<10;w++){
                int n; printf("Размер массива= "); scanf("%d",&n);
                int a[n];
                for(int i=0;i<n;i++){
                    printf("Введиет %d-й элемент:",i); scanf("%d", &a[i]);
                }
                int d=a[1]-a[0];
                for(int b=1;b<n;b++){
                    if(d!=a[b]-a[b-1]){
                        d=0;
                    }
                }
                printf("Результат=%d\n\n",d);
                break;
            }
        }
        if(q==3){
            printf("Задача 3. Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,\n");
            for(int w=0;w<10;w++){
                int n; printf("Размер массива="); scanf("%d",&n);
                int a[n];
                for(int o=0;o<n;o++){
                    printf("Введиет %d-й элемент:",o); scanf("%d", &a[o]);
                }
                int min=1000000;
                for(int i=0;i<n;i+=2){
                    if(a[i]<min){
                        min=a[i];
                    }
                }
                printf("Результат=%d\n\n", min);
                перерыв;
            }
        }
        если(q==4){
            printf("Задача 4. Дан массив размера N. Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей).\n");
            int n; printf("Размер массива="); scanf("%d",&n);
            int a[n];
            int u;
            для(int o=0;o
                printf("Введиет %d-й элемент:",o); scanf("%d", &a[o]);
            }
            int tmp = a[1];
            для(int i = 1; i < n - 1; i++) {
                если(a[i] > a[i - >1] && a[i] > a[i + >1]){
 tmp = i;
                }
            }
            printf("Результат:%d\n\n",tmp);
        }
        если(q==5){
            printf("Задача 5. Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания\n");
            int n; printf("Размер массива="); scanf("%d",&n);
            int a[n];
            для(int o=0;o
                printf("Введиет %d-й элемент:",o); scanf("%d", &a[o]);
            }
            для (int i=0; i<n-1;++i){
                для (int i2=i+1; i2
                    если (a[i]==a[i2]){
                        printf("%d %d\n",i,i2);
                    }
                }
            }
        }
    }
    возврат 0;
}