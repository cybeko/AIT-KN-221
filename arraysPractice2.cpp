using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //Ввести целочисленный массив, состоящий из 10 элементов. 
    //Определить сумму и количество элементов, расположенных до первого элемента кратного пяти, если такого элемента нет, то соответственно сумма и количество равны 0 

    int const SIZE = 10;
    int arr1[SIZE] = {};
    int max = 50, min = -15;
    int i;
    int sum = 0, count = 0;
    bool multCheck = false;

    for (int i = 0; i < SIZE; i++)
    {
        arr1[i] = rand() % (max - min) + min;
        cout << arr1[i] << endl;
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr1[i] % 5 == 0 && arr1[i] != 0)
        {
            multCheck = true;
            break;
        }
        sum += arr1[i];
        count++;
    }
    if (multCheck == false)
    {
        sum = 0;
        count = 0;
        cout << "\nВ массиве нет элементов кратных пяти!" << endl;
    }
    cout << "\nСумма элементов до первого элемента кратного пяти: " << sum << endl;
    cout << "Кол. элементов до первого элемента кратного пяти: " << count << endl;
}

