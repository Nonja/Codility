// CODILITY LESSON 2 TASK - CYCLIC ROTATION

#include <algorithm>

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++11 (g++ 4.8.2)
    
    vector<int> v = A;
    
    if (!v.empty()) {
        vector <int>::size_type vectorsize = v.size();
        
        int count = K % vectorsize;
        
        std::rotate(v.begin(), v.end() - count, v.end());
        
    }
    return v;
    
}