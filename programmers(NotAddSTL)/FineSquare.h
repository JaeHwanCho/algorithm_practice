using namespace std;

long long gcd(int x, int y) {
    
    while(y > 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
    
}

long long solution(int w,int h) {
    long long answer = 1;
    
    long long gcdValue = gcd(w,h);
    
    answer = w * h - w - h + gcdValue;
    
    return answer;
}