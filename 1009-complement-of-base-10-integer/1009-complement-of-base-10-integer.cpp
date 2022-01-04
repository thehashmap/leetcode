class Solution {
public:
    int bitwiseComplement(int n) {
        int res = 1;
        while( n > res) res = res * 2 + 1;
        return res - n;
    }
};