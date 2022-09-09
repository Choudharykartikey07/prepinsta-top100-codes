//https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int fib(int n) {
        if (n<2)
            return n;
        int v[n+1];
        v[0]=0;
        v[1]=1;
        for(int i=2;i<=n;i++){
            v[i]=v[i-2]+v[i-1];
        }
        
        return v[n];
    }
};