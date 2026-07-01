#include "BatuPermata.hpp"

int main() {
    int n;
    cin >> n;

    vector<string> kumpulanBatu(n);
    for (int i = 0; i < n; i++) {
        cin >> kumpulanBatu[i];
    }

    cout << BatuPermata::hitungTotalPermata(n, kumpulanBatu) << endl;
    return 0;
}
