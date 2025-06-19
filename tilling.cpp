#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int tile_id = 1;
    cout << n * m << endl; // Using 1x1 tiles

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tile_id++ << " ";
        }
        cout << endl;
    }

    return 0;
}

