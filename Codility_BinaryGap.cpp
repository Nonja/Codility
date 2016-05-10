// CODILITY LESSON 1 TASK - BINARY GAP

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    
    int longest = 0;
    int current = 0;
    bool counting = false;
    
    while (N > 0){
        
        unsigned int bits = N & 1;
        N >>= 1;
        
        
        if (bits == 0 && counting == true) {
            current++;
        }
        
        if (bits == 1) {
            counting = true;
            longest = current > longest ? current : longest;
            current = 0;
        }
    }
    return longest;
    
}