class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();

        int totalkamai = accumulate(gas.begin(), gas.end(), 0);
        int totalkarch = accumulate(cost.begin(), cost.end(), 0);

        if(totalkamai < totalkarch) {
            return -1;
        }

        int sum = 0;
        int index = 0;

        for(int i=0;i<n;i++) {
            sum += gas[i] - cost[i];

            if(sum < 0) {
                index = i + 1;
                sum = 0;
            }
        }

        return index;
    }
};
