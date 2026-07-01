#include "BilanganKuadrat.hpp"

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        cout << BilanganKuadrat::hitungJumlahKuadrat(a, b) << endl;
    }

    return 0;
}
