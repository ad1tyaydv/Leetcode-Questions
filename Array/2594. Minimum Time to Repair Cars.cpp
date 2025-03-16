class Solution {
public:
    typedef long long ll;

    bool isPossible(vector<int> ranks, ll mid, ll cars) {
        ll carsfixed = 0;

        for(int i=0;i<ranks.size();i++) {
            carsfixed += sqrt(mid/ranks[i]);
        }

        return carsfixed >= cars;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        
        int n = ranks.size();

        ll start = 1;
        ll maxrank = *max_element(ranks.begin(), ranks.end());
        ll end  = 1LL * maxrank * cars * cars;

        ll result = -1;

        while(start <= end) {
            ll mid = start + (end - start) / 2;

            if(isPossible(ranks, mid, cars)) {
                result = mid;
                end =  mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return result;
    }
};
