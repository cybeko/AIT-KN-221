using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //���������� �������

    int const SIZE = 10;
    int arr1[SIZE] = {};
    int max = 15, min = -5;
    int temp = 0;
    int maxEl;

    cout << "\n������������ ������" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        arr1[i] = rand() % (max - min) + min;
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < SIZE; i++)
    {
        maxEl = i;

        for (int j = 0;j < SIZE - 1;j++)
        {
            if (arr1[j] > arr1[maxEl])
            {
                maxEl = j;
            }
            temp = arr1[i];
            arr1[i] = arr1[maxEl];
            arr1[maxEl] = temp;
        }
    }
    cout << "\n���������� ������" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr1[i] << " ";
    }

}
