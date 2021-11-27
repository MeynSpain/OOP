#include <iostream>
#include <vector>
#include <fstream>

using namespace std;		// ����������� ������������ ���
using arr = vector<int>;	// ��������� vector<int> �� arr

namespace kib {									// ����������� ������������ ���
	void random_vec(arr& a, int l, int r) {		// ��������� ���������� �������
		for (int i = 0; i < l; i++)				// ��������� ������...
			a.push_back(rand() % (r + 1));		// ���������� �����
	}

	void output_screen(arr& a) {				// ��������� ������ �� �����
		for (unsigned i = 0; i < a.size(); i++)		// ������� ������ � �������
			cout << a[i] << " ";
		cout << endl;
	}

	int sum(arr& a, int l) {			// ������� ������������
		int s = a[0];					// � ���������� �������� �����...
		for (int i = 1; i < l; i++)		// ...���������� ������ ��������
			s += a[i];
		return s;
	}

	void output_file(arr& a, string f) {				// ��������� ������ � ����
		ofstream f_out(f, ios::binary);					// �������� ������� ������ ofstream
		for (unsigned i = 0; i < a.size(); i++)				// �� ����� �������...
			f_out.write((char*)&a[i], sizeof(int));		// ...������� � ����
		f_out.close();									// ������� ����
	}

	void input_file(arr& a, string f) {		// ��������� ������ �� �����
		ifstream f_in(f, ios::binary);		// �������� ������� ������ ifstream
		f_in.seekg(0, ios::end);			// ����������� ��������� � �����
		streamoff f_size = f_in.tellg();			// ����������� ������� �����
		f_in.seekg(0);						// ����������� ��������� �� ������
		int n;
		for (streamoff i = 0; i < f_size / sizeof(int); i++) {	// �� ������ �� �����...
			f_in.read((char*)&n, sizeof(int));				// ...��������� �...
			a.push_back(n);									// ...������� � ������
		}
		f_in.close();		// ������� ����
	}
}