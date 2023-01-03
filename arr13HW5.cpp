using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //������� 5. 
    //���������� ������������� ������ ��� ����� ������� � ������� ����������� ���� ������� �������������� ���� ��������� ������ ����; 
    //����� � ���� ������ �����.
    //��������� ����� ������� �� �����������, � ����������� � �������� �������.

    const int SIZE = 15;
    int arr[SIZE] = {};
    int i, j, k = 1;
    int max = 15, min = -10;
    int elAvrg = 0;
    int SIZEdiv = 0;
    int splitSIZE;

    //���������� ������
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (max - min) + min;
        cout << arr[i] << " ";
    }
    //������� ������� ��������������
    for (int i = 0; i < SIZE; i++)
    {
        elAvrg += arr[i];
    }
    elAvrg /= SIZE;
    cout << "\n������� �������������� ���� ���������: " << elAvrg;

    //��������� ������� ��������������
    if (elAvrg > 0)
    {
        cout << "\n������� �������������� > 0" << endl;
        SIZEdiv = SIZE / 3 * 2; //��������� 2/3 ,���� ������ 0
        splitSIZE = (SIZEdiv / 3) + SIZEdiv;
    }
    else
    {
        cout << "\n������� �������������� <= 0" << endl;
        SIZEdiv = SIZE / 3; //�����, 1/3
        splitSIZE = (SIZEdiv / 2) + SIZEdiv;
    }
    //��������� ������
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
    //������ ������� ��������� ��������
    for (int i = SIZEdiv; i < splitSIZE; i++)
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - k];
        arr[SIZE - k] = temp;
        k++;
    }
    //������� ������
    cout << "\n������� ������" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}
