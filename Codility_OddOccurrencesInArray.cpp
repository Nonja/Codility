// CODILITY LESSON 2 TASK - ODD OCCURRENCES IN ARRAY
#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
    vector<int> v = A;
    int result = 0;
    
    if (!v.empty()){
        for (int i : v) {
            result ^= i;
        }
    }
    return result;
}