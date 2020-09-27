#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        vector<int> temp;
        vector<int> a;
        vector<int> b;
        while(x!=0)
        {
            a = x % 10;
            b = x/10;
            x = b;
            temp.pushback(a);
        }
        return a;
    }
};

int main()
{
int x=123;
reverse(x);
}