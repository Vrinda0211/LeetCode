class Solution {
public:
    string convertDateToBinary(string date) {
        string year=date.substr(0,4);
        string month=date.substr(5,2);
        string day=date.substr(8,2);
        string res="";
        int n1=stoi(year);
        int n2=stoi(month);
        int n3=stoi(day);
        while(n3!=0)
        {
            if(n3%2==1)
                res+='1';
            else
                res+='0';
            n3=n3/2;
        }
        res+='-';
        while(n2!=0)
        {
            if(n2%2==1)
                res+='1';
            else
                res+='0';
            n2=n2/2;
        }
        res+='-';
        while(n1!=0)
        {
            if(n1%2==1)
                res+='1';
            else
                res+='0';
            n1=n1/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};