using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //������ ������������� ������, ��������� �� 10 ���������. 
    //���������� ����� � ���������� ���������, ������������� �� ������� �������� �������� ����, ���� ������ �������� ���, �� �������������� ����� � ���������� ����� 0 

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
        cout << "\n� ������� ��� ��������� ������� ����!" << endl;
    }
    cout << "\n����� ��������� �� ������� �������� �������� ����: " << sum << endl;
    cout << "���. ��������� �� ������� �������� �������� ����: " << count << endl;
}

