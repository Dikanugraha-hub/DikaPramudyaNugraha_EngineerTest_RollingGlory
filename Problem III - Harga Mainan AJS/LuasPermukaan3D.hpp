#ifndef LUAS_PERMUKAAN_3D_HPP
#define LUAS_PERMUKAAN_3D_HPP

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class LuasPermukaan3D {
public:
    static long long hitungHargaMainan(int H, int W, const vector<vector<int>>& grid);
};

#endif
