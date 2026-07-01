#include "BatuPermata.hpp"

int BatuPermata::hitungTotalPermata(int n, const vector<std::string>& kumpulanBatu) {
    if (n <= 0 || kumpulanBatu.empty()) {
        return 0;
    }

    int jumlahBatu = min(n, static_cast<int>(kumpulanBatu.size()));
    bool permata[26] = {false};

    for (char mineral : kumpulanBatu[0]) {
        permata[mineral - 'a'] = true;
    }

    for (int i = 1; i < jumlahBatu; i++) {
        bool mineralPadaBatu[26] = {false};
        for (char mineral : kumpulanBatu[i]) {
            mineralPadaBatu[mineral - 'a'] = true;
        }
        for (int j = 0; j < 26; j++) {
            if (!mineralPadaBatu[j]) {
                permata[j] = false;
            }
        }
    }

    int total = 0;
    for (int j = 0; j < 26; j++) {
        if (permata[j]) {
            total++;
        }
    }
    return total;
}