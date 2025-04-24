class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        int n = s.size();
        vector<int> index;

        for(int i=0;i<n;i++) {
            if(s[i] == c) {
                index.push_back(i);
            }
        }
        
        vector<int> result;
        for(int i=0;i<n;i++) {
            int distance = INT_MAX;
            for(int j=0;j<index.size();j++) {
                distance = min(distance, abs(i - index[j]));
            }
            result.push_back(distance);
        }

        return result;
    }
};
