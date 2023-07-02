Problem: https://www.geeksforgeeks.org/chocolate-distribution-problem/

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long minDiff = INT_MAX;
    for(long long i=0;i<=n-m;i++)
    {
        long long temp = a[i+m-1]-a[i];
        minDiff = min(minDiff,temp);
    }
    return minDiff;
    }   
};
