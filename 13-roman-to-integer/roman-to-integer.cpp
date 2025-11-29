class Solution {
public:
int romanToInt(std::string s) {
    short sum = 0;
    char prev = '\0';
    
    for (char c : s) {
        switch (c) {
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += (prev == 'I') ? 3 : 5;
                break;
            case 'X':
                sum += (prev == 'I') ? 8 : 10;
                break;
            case 'L':
                sum += (prev == 'X') ? 30 : 50;
                break;
            case 'C':
                sum += (prev == 'X') ? 80 : 100;
                break;
            case 'D':
                sum += (prev == 'C') ? 300 : 500;
                break;
            case 'M':
                sum += (prev == 'C') ? 800 : 1000;
                break;
        }
        prev = c;
    }
    return sum;
}
};