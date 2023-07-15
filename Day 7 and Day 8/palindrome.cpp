class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long rev=0;
        while(n>0){
            long last=n%10;
            rev=rev*10+last;
            n=n/10;
        }
        if((rev>pow(2,31)-1) || rev<pow(-2,31)){
            return 0;
        }
        return rev==x;
    }
};