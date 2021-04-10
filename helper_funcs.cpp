// returns an index for vector<int>

int getIndex(vector<int> vec, int target) {
    int index = -1;
    auto it = find(vec.begin(), vec.end(), target);
    if (it != vec.end()) {
        index = it - vec.begin();
    }
    return index;
}

// returns bool if found in vector<int>

bool inVectorInt(vector<int> vec, int target) {
    for (int val : vec) {
        if (target == val) {
            return true;
        }
    }
    return false;
}
