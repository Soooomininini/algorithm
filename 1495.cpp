#include <iostream>
#include <vector>
using namespace std;
int n;
int value = 1;
vector <vector<int>> vect(100, vector<int>(100, 0));
void put() {
    
    for (int z = 1; z <= 2 * n - 2; z++) {
        if (z < n) {
            if (z % 2 == 0) {
                for (int y = 0; y <= z; y++) {
                    vect[y][z - y] = value++;
                }
            }
            else {
                for (int y = z; y >= 0; y--) {
                    vect[y][z - y] = value++;
                }
            }
        }
        else {
            if (z % 2 == 1) {
                for (int y = n - 1; y >= z - (n - 1); y--) {
                    vect[y][z - y] = value++;
                }
            }
            else {
                for (int y = z - (n - 1); y <= (n - 1); y++) {
                    vect[y][z - y] = value++;
                }
            }
        }
    }
    
}
void print() {
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            cout << vect[y][x] << " ";
        }
        cout << endl;
    
    }
}
int main() {
    /*freopen("soomin.txt", "r", stdin);*/
    cin >> n;
    vect[0][0] = value++;
    put();
    print();
    return 0;
}