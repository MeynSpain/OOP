#pragma once

using namespace std;		// ����������� ������������ ���
using arr = vector<int>;	// ��������� vector<int> �� arr
namespace kib {				// ����������� ������������ ���

	void random_vec(arr& a, int l, int r);		// ��������� ���������� �������
	void output_screen(arr& a);					// ��������� ������ �� �����
	int sum(arr& a, int l);						// ������� ������������
	void output_file(arr& a, string f);			// ��������� ������ � ����
	void input_file(arr& a, string f);			// ��������� ������ �� �����
}