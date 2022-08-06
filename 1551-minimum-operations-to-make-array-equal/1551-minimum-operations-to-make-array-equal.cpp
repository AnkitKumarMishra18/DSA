class Solution {
public:
    int minOperations(int n) {
       int mid = n/2;
       return n&1?(mid*(mid+1)):mid*mid;
    }
};