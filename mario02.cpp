#include <iostream>
using namespace std;

int main() {
    int block,space,h;
    do {
        cout << "請輸入高(0<h<9)：";
        cin >> h;
    } while (h > 8 || h <= 0);
    
    h = h * 2;

    for (int i = 0; i <= h; i += 2) {
        for (space = h / 2; space > i / 2; space--) {
            cout << " ";
        }
        
        for (block = 1; block <= i; block++) {
            if (block - 1 == i / 2) {
                cout << "  #";
            } else {
                cout << "#";
            }
        }
        cout << "\n";
    }
}
