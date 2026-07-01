#include "LuasPermukaan3D.hpp"

long long LuasPermukaan3D::hitungHargaMainan(int H, int W, const vector<vector<int>>& grid) {
    long long total = 0;

    auto tinggi = [&](int i, int j) -> int {
        if (i < 0 || i >= H || j < 0 || j >= W) {
            return 0;
        }
        return grid[i][j];
    };

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int h = grid[i][j];

            if (h > 0) {
                total += 2;
            }

            total += max(0, h - tinggi(i - 1, j));
            total += max(0, h - tinggi(i + 1, j));
            total += max(0, h - tinggi(i, j - 1));
            total += max(0, h - tinggi(i, j + 1));
        }
    }

    return total;
}
