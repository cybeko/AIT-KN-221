using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //Задание 5. 
    //Необходимо отсортировать первые две трети массива в порядке возрастания если среднее арифметическое всех элементов больше нуля; 
    //иначе — лишь первую треть.
    //Остальную часть массива не сортировать, а расположить в обратном порядке.

    const int SIZE = 15;
    int arr[SIZE] = {};
    int i, j, k = 1;
    int max = 15, min = -10;
    int elAvrg = 0;
    int SIZEdiv = 0;
    int splitSIZE;

    //генерируем массив
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (max - min) + min;
        cout << arr[i] << " ";
    }
    //находим среднее арифметическое
    for (int i = 0; i < SIZE; i++)
    {
        elAvrg += arr[i];
    }
    elAvrg /= SIZE;
    cout << "\nСреднее арифметическое всех элементов: " << elAvrg;

    //проверяем среднее арифметическое
    if (elAvrg > 0)
    {
        cout << "\nСреднее арифметическое > 0" << endl;
        SIZEdiv = SIZE / 3 * 2; //сортируем 2/3 ,если больше 0
        splitSIZE = (SIZEdiv / 3) + SIZEdiv;
    }
    else
    {
        cout << "\nСреднее арифметическое <= 0" << endl;
        SIZEdiv = SIZE / 3; //иначе, 1/3
        splitSIZE = (SIZEdiv / 2) + SIZEdiv;
    }
    //сортируем массив
    for (int i = 0; i < SIZEdiv; ++i)
    {
        for (int j = 0; j < SIZEdiv - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    //меняем местами остальные элементы
    for (int i = SIZEdiv; i < splitSIZE; i++)
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - k];
        arr[SIZE - k] = temp;
        k++;
    }
    //выводим массив
    cout << "\nГотовый массив" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}
