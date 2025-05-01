// Time Complexity - O(nlogn)
// Space Complexity - O(U + D)
// U -> size of freq
// D -> number of distinct card values present in the deck

class Solution {
public:

    bool check(vector<int> freq_count) {
        int gcdvalue = 0;

        for(int freq : freq_count) {
            if(freq > 0) {
                gcdvalue = gcd(gcdvalue, freq);
            }
        }

        return gcdvalue >= 2;
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        
        int n = deck.size();

        vector<int> freq(10000, 0);
        for(int i=0;i<n;i++) {
            freq[deck[i]]++;
        }

        vector<int> freq_count;
        for(int i=0;i<freq.size();i++) {
            if(freq[i] > 0) {
                freq_count.push_back(freq[i]);
            }
        }

       return check(freq_count);
    }
};
