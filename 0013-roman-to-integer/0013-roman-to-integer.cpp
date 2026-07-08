class Solution {
public:
    int romanToInt(string s) {
        //IV IX XL XC CD CM
        int sum = 0 ;
sum += std::count(s.begin(), s.end(), 'I') * 1;
        sum += std::count(s.begin(), s.end(), 'V') * 5;
        sum += std::count(s.begin(), s.end(), 'X') * 10;
        sum += std::count(s.begin(), s.end(), 'L') * 50;
        sum += std::count(s.begin(), s.end(), 'C') * 100;
        sum += std::count(s.begin(), s.end(), 'D') * 500;
        sum += std::count(s.begin(), s.end(), 'M') * 1000;


        if (s.find("IV") != string::npos) sum -= 2;
        if (s.find("IX") != string::npos) sum -= 2;
        if (s.find("XL") != string::npos) sum -= 20;
        if (s.find("XC") != string::npos) sum -= 20;
        if (s.find("CD") != string::npos) sum -= 200;
        if (s.find("CM") != string::npos) sum -= 200;
        return sum ;
    }
    
};