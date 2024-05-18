#include "Header.h"

vector<int> increase(vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}
