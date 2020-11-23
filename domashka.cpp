#include <iostream>
using namespace std;
void hanoi_towers(int quantity, int from, int to, int buf_peg) { //quantity-����� �����, from - ���������(1) ��������� �����, to - ��������, buf_peg - ������ �������.
	if (quantity != 0) {
		hanoi_towers(quantity - 1, from, buf_peg, to);
		cout << from << " -> "<< to << endl;
		hanoi_towers(quantity - 1, buf_peg, to, from);
	}
}
int main(){
    setlocale(LC_ALL, "rus");
    int from=1, buf_peg=2, to=3, quantity;
    cout << "���������� ������:" << endl;
    cin >> quantity;
    hanoi_towers(quantity, from, buf_peg, to);
    return 0;
}