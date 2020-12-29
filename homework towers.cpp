#include<iostream> 
using namespace std;
void hanoi_towers(int n, int from, int to, int bp); //q-количество колец, from-начальное положение колец(1-3), to - конечное положение колец (1-3), bp-промежуточный колышек (1-3) 
int main() {
	int n,k, t, bp;
	cin >> n >> k >> t >> bp;
	hanoi_towers(n, k, t, bp);
	return 0;
}
void hanoi_towers(int n, int from, int to, int bp) {
	if (n != 0) {
		hanoi_towers(n - 1, from, bp, to);
		cout << "{0}->{1}" << from << " " << to;
		hanoi_towers(n - 1, bp, to, from);
	}
}

