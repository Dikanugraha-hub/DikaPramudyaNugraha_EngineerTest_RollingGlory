#include "LuasPermukaan3D.hpp"

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> grid(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    cout << LuasPermukaan3D::hitungHargaMainan(H, W, grid) << endl;
    return 0;
}
