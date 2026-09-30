class Solution {
public:
    int smallestNumber(int n) {
        int k=1,num=0,rem;
        while(n!=0)
        {
            rem=n%2;
            num+=k;
            k=k*2;
            n=n/2;
        }
        return num;
    }
};