#include <iostream>
namespace kib
{

    int* Filling(int* mas, int di, int l) {  // ���� �������
        for (int i = 0; i < l; i++)
            mas[i] = rand() % (di + 1);
        return mas;
    }

    void Output(int* mas, int l) {   // ����� �������
        using std::cout;            // using-����������
        using std::endl;
        for (int i = 0; i < l; i++)
            cout << "mas[" << i << "]=" << mas[i] << endl;
    }

    int Sum(int* mas, int l) {          // ���������� ����� �������
        int s = mas[0];                // ��������� �������� - 1-� �������
        for (int i = 1; i < l; i++) 
            s += mas[i];               // ���� ���������� 
        return s;
    }
}