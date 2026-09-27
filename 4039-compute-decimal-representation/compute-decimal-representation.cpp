class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long place=1,rem;
        vector<int> res;
        while(n!=0)
        {
            rem=n%10;
            if(rem!=0)
                res.push_back(rem*place);
            place=place*10;
            n=n/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};