#включить <stdio.h>
#включить <math.h>

int getArrayLen()
{
    int n;
    в то время как (1)
    {
        printf("Введите длинну массива: ");
        scanf("%d", &n);
        если (n <= 0)
        {
            printf("Введите число больше 1");
            продолжить;
        }
        перерыв;
    }

    возврат n;
}

заполнение пустоты (int *a, int n, символ *имя массива)
{
    для (int i = 0; i
    {
        printf("Введите %d-й элемент массива %s: ", i, arrayName);
        scanf("%d", &a[i]);
    }
}

изменение массива пустоты (int *a, int *b, int n)
{
    int temp;

    для (int i = 0; i
    {
 температура = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void printArrayElements(int *array, int n, char *arrayName)
{
    printf("Преобразованный массив %s:\n", arrayName);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void average(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = i;
        int sum = 0;
        while (k >= 0)
        {
            sum += a[k];
            k--;
        }
        b[i] = sum / (i + 1);
    }
}

int isExistOdd(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            return 1;
        }
    }

    return 0;
}

int getLastOdd(int *a, int n)
{
    в прошлом году;
    для (int i = 0; i
    {
        если (a[i] % 2 != 0)
        {
 lastOdd = a[i];
        }
    }

    вернуть ластОдд;
}

int addOddElemetns(int *a, int n, int lastOdd)
{
    для (int i = 0; i
    {
        если (a[i] % 2 != 0)
        {
 a[i] += lastOdd;
        }
    }
}

int findMinIndex(int *a, int n)
{
    int min=a[0];
    для(int i=0;i
        если(a[i]
 мин=i;
        }
    }
    возврат мин;
}

int findMaxIndex(int *a, int n)
{
    int max=a[0];
    для(int i=0;i
        если(a[i]>a[max]){
 макс=i;
        }
    }
    возврат макс.;
}

пустое изменение(int *a, int min, int max)
{
    для(int i=min+1;i
        a[i]=0;
    }
}

void sortArray(int *a, int n)
{
    int j,x;
    for(int i=1; i<n; i++){
        for(j=i, x=a[i]; (j>0) && (a[j-1]>x);j--){
            a[j]=a[j-1];
        }
        a[j]=x;
    }
}

void task1()
{
    printf("Задача 1. Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B\n");

    int n = getArrayLen();

    int a[n];
    int b[n];

    fillArray(a, n, "A");
    fillArray(b, n, "B");

    arrayChange(a, b, n);

    Печатныеэлементы(a, n, "A");
    Печатныеэлементы(b, n, "B");
}

пустая задача2()
{
    printf("Задача 2. Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.\n");

    int n = getArrayLen();
    int a[n];
    int b[n];

    Заполнитель(a, n, "A");
    среднеезначение(a, b, n);
    Печатныеэлементы(b, n, "B");
}

пустая задача3()
{
    printf("Задача 3. Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений.\n");

    int n = getArrayLen();
    int a[n];

    Заполнитель(a, n, "A");
    если (isExistOdd(a, n))
    {
        int lastOdd = getLastOdd(a, n);
        addOddElemetns(a, n, lastOdd);
    }

    Печатныеэлементы(a, n, "A");
}
пустая задача4()
{
    printf("Задача 4. Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы).\n");
    int n=getArrayLen();
    
    int a[n]; 
    Заполнитель(a,n,"A");
    
    int min=findMinIndex(a,n);
    int max=findMaxIndex(a,n);
    
    Изменениенуля(a,мин,макс);
    
    Печатныеэлементы(a,n,"A");
}

void task5()
{
    printf("Задача 5. Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию. Сделать массив упорядоченным, переместив первый элемент на новую позицию.\n");
    int n=getArrayLen();
    
    int a[n];
    fillArray(a,n, "A");
    
    sortArray(a,n);
    
    printArrayElements(a,n,"A");
}

int main()
{
    printf("Добро пожаловать в мою программу, которая предлагает вам решить 5 интересных задач. Для выбора задачи напишите ниже число от 1 до 5.\n");

    в то время как (1)
    {
        int q;
        printf("\nВыберите задачу от 1 до 5: ");
        scanf("%d", &q);

        переключатель (q)
        {
        случай 1:
            задача1();
            перерыв;

        случай 2:
            задача2();
            перерыв;

        случай 3:
            задача3();
            перерыв;
            
        случай 4:
            задача4();
            перерыв;
        
        случай 5:
            задача5();
            перерыв;
            
        По умолчанию:
            printf("\nВыберите задачу от 1 до 5: ");
            перерыв;
        }
    }
}
