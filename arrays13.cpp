using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //Задание 2. Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок.

    /*int const SIZE = 10;
    int arr1[SIZE] = {};
    int max = 15, min = -5;
    int temp ;
    int i = 0, j;
    int grade = 0;

    for (int i = 0; i < SIZE; i++)
    {
        arr1[i] = rand() % (max - min) + min;
        cout << arr1[i] << " ";
    }
    for (i = 1;i < SIZE; i++)
    {
        temp = arr1[i];
        for (j = i - 1;j >= 0 && arr1[j] > temp;j--)
        {
            arr1[j + 1] = arr1[j];
        }
        arr1[j + 1] = temp;
    }
    cout << "\nОтсортированный массив" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr1[i] << " ";
    }*/

    //Задание 3. Написать программу «успеваемость». Пользователь вводит 10 оценок студента.Реализовать меню для пользователя
        //Вывод оценок(вывод содержимого массива);
        //Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку);
        //Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7).

    /*int const SIZE = 10;
    float arr1[SIZE] = {};
    int i, j;
    float gradeSum = 0;
    float newGrade, newGradeId = 0;
    float scholarship = 10.7;
    int userchoice;

    cout << "\tУспеваемость" << endl;
    cout << "1 - Вывод оценок" << endl ;
    cout << "2 - Пересдача экзамена" << endl;
    cout << "3 - Выходит ли стипендия" << endl;
    cout << "4 - Выход" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Введите оценку №" << i + 1 << endl;
        cin >> arr1[i];
    }

    cout << endl;
    do
    {
        cout << "\nВведите действие:";
        cin >> userchoice;

        switch (userchoice)
        {
        case 1:
            cout << "\n\tВывод оценок" << endl;
            for (int i = 0; i < SIZE; i++)
            {
                cout << "Оценка №" << i+1 << ": " <<arr1[i] << endl;
            }
            break;
        case 2:
            cout << "\n\tПересдача экзамена" << endl;
            cout << "Введите номер оценки:";
            cin >> newGradeId;
            cout << "Введите новую оценку:";
            cin >> newGrade;
            newGradeId -= 1;
            for (int i = 0; i < SIZE; i++)
            {
                if (i = newGradeId)
                {
                    arr1[i] = newGrade;
                    break;
                }
                else
                {
                    continue;
                }
            }
            break;
        case 3:
            cout << "\n\tCтипендия" << endl;
            for (int i = 0; i < SIZE; i++)
            {
                gradeSum += arr1[i];
            }
            gradeSum /= SIZE;
            cout << "Средний бал: " << gradeSum << endl;
            if (gradeSum < scholarship)
            {
                cout << "Вы не получаете стипендию" << endl;
            }
            else
            {
                cout << "Вы получаете стипендию" << endl;
            }
            break;
        case 4:
            cout << "До встречи!";
            break;
        }
    } while (userchoice > 0 && userchoice < 4);
    */

    

    //Задание 5. 
    //Необходимо отсортировать первые две трети массива в порядке возрастания если среднее арифметическое всех элементов больше нуля; 
    //иначе — лишь первую треть.
    //Остальную часть массива не сортировать, а расположить в обратном порядке.

    /*const int SIZE = 15;
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
    }*/

    

}

