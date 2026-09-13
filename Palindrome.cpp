#include<iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) 
    {
        bool Flag = false;
        int Rev = 0;
        int Digit = 0;
        while(x != 0)
        {
            Digit = x % 10;
            Rev = Rev * 10 + Digit;
            
            x = x / 10;
        }

        printf("%d",Rev);

        return Flag;
    }
};

int main()
{
    bool Flag = false;
    
    Solution sobj;

    Flag = sobj.isPalindrome(121);

    //cout<<Flag;

    return 0;
}