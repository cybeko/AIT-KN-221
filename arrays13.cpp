using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    //������� 2. �������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������.

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
    cout << "\n��������������� ������" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr1[i] << " ";
    }*/

    //������� 3. �������� ��������� ��������������. ������������ ������ 10 ������ ��������.����������� ���� ��� ������������
        //����� ������(����� ����������� �������);
        //��������� ��������(������������ ������ ����� �������� ������� � ����� ������);
        //������� �� ���������(��������� �������, ���� ������� ��� �� ���� 10.7).

    /*int const SIZE = 10;
    float arr1[SIZE] = {};
    int i, j;
    float gradeSum = 0;
    float newGrade, newGradeId = 0;
    float scholarship = 10.7;
    int userchoice;

    cout << "\t������������" << endl;
    cout << "1 - ����� ������" << endl ;
    cout << "2 - ��������� ��������" << endl;
    cout << "3 - ������� �� ���������" << endl;
    cout << "4 - �����" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "������� ������ �" << i + 1 << endl;
        cin >> arr1[i];
    }

    cout << endl;
    do
    {
        cout << "\n������� ��������:";
        cin >> userchoice;

        switch (userchoice)
        {
        case 1:
            cout << "\n\t����� ������" << endl;
            for (int i = 0; i < SIZE; i++)
            {
                cout << "������ �" << i+1 << ": " <<arr1[i] << endl;
            }
            break;
        case 2:
            cout << "\n\t��������� ��������" << endl;
            cout << "������� ����� ������:";
            cin >> newGradeId;
            cout << "������� ����� ������:";
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
            cout << "\n\tC��������" << endl;
            for (int i = 0; i < SIZE; i++)
            {
                gradeSum += arr1[i];
            }
            gradeSum /= SIZE;
            cout << "������� ���: " << gradeSum << endl;
            if (gradeSum < scholarship)
            {
                cout << "�� �� ��������� ���������" << endl;
            }
            else
            {
                cout << "�� ��������� ���������" << endl;
            }
            break;
        case 4:
            cout << "�� �������!";
            break;
        }
    } while (userchoice > 0 && userchoice < 4);
    */

    

    //������� 5. 
    //���������� ������������� ������ ��� ����� ������� � ������� ����������� ���� ������� �������������� ���� ��������� ������ ����; 
    //����� � ���� ������ �����.
    //��������� ����� ������� �� �����������, � ����������� � �������� �������.

    /*const int SIZE = 15;
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
    }*/

    

}

