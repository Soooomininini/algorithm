#include <iostream>
#include <vector>
using namespace std;
vector <int> visit;
int n, m;
void print() {
	for (int x = 0; x < n; x++) {
		cout << visit[x] << " ";
	}
	cout << endl;
}
void abc1(int now, int level) {
	if (level == n) {
		print();
		return;
	}

	for (int x = 0; x < 6; x++) {
		visit.push_back(x + 1);
		abc1(x + 1, level + 1);
		visit.pop_back();
	}
}
void abc2(int now, int level) {
	if (level == n) {
		print();
		return;
	}
	
	for (int x = 1; x <= 6; x++) {
		if (x < now) continue;
		visit.push_back(x);
		abc2(x, level + 1);
		visit.pop_back();
	}
}
void abc3(int now, int level) {
	if (level == n) {
		print();
		return; 
	}

	for (int x = 1; x <= 6; x++) {
		if (x == now) continue;
		/*if (x < now) continue;*/
		visit.push_back(x);
		abc3(x, level + 1);
		visit.pop_back();
	}
}
int main() {
	/*freopen("soomin.txt", "r", stdin);*/
	cin >> n >> m;
	if (m == 1) abc1(0, 0);
	if (m == 2) abc2(0, 0);
	if (m == 3) abc3(0, 0);
	return 0;
}