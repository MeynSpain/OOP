#include <iostream>
#include <cstdlib>
namespace Kib
{
    void Dlina(int l) {
        using std::cout;
        using std::endl;
        cout << "������ ������ ������: " << l << endl;
    }

    int* Filling(int mas[], int di, int l) {
        srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < l; i++)
            mas[i] = rand() % (di + 1);
        return mas;
    }

    void Output(int mas[], int di, int l) {
        using std::cout;
        using std::endl;
        for (int i = 0; i < l; i++)
            cout << "mas[" << i << "]=" << mas[i] << endl;
    }
}