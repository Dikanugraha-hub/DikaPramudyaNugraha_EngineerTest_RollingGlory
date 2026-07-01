#include "BilanganKuadrat.hpp"

static long long akarKuadratBulat(long long x) {
    long long r = static_cast<long long>(sqrt(static_cast<double>(x)));
    while ((r + 1) * (r + 1) <= x) {
        r++;
    }
    while (r * r > x) {
        r--;
    }
    return r;
}

long long BilanganKuadrat::hitungJumlahKuadrat(long long a, long long b) {
    long long akarBawah = akarKuadratBulat(a);
    if (akarBawah * akarBawah < a) {
        akarBawah++;
    }

    long long akarAtas = akarKuadratBulat(b);

    if (akarAtas < akarBawah) {
        return 0;
    }
    return akarAtas - akarBawah + 1;
}
