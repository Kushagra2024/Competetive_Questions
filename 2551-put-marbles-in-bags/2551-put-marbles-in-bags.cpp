class Solution {
public:
    long long putMarbles(vector<int>& weights, int k)
    {
        if(k == 1) return 0;
        int n = weights.size();
        vector<pair<int,int>> v(n-1);
        for(int i = 0; i < n-1; i++) {
            v[i] = {weights[i]+weights[i+1], i};
        }
        sort(v.begin(), v.end());
        vector<pair<int,int>> minv(v.begin(), v.begin()+k-1);
        sort(minv.begin(), minv.end(), [](auto& p1, auto& p2) {
            return p1.second < p2.second;
        });
        long long mn = weights[0] + weights[minv[0].second];
        for(int i = 1; i < k-1; i++) {
            mn += weights[minv[i-1].second+1] + weights[minv[i].second];
        }
        mn += weights[minv.back().second+1] + weights.back();
        vector<pair<int,int>> maxv(v.rbegin(), v.rbegin()+k-1);
        sort(maxv.begin(), maxv.end(), [](auto& p1, auto& p2) {
            return p1.second < p2.second;
        });
        long long mx = weights[0] + weights[maxv[0].second];
        for(int i = 1; i < k-1; i++) {
            mx += weights[maxv[i-1].second+1] + weights[maxv[i].second];
        }
        mx += weights[maxv.back().second+1] + weights.back();
        return mx-mn;
    }
};