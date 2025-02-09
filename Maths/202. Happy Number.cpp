class Solution {
public:

    int nextnumber(int n) {

        int newnumber = 0;
        
        while(n != 0) {
            int rem = n % 10;
            newnumber += rem * rem;
            n /= 10;
        }

        return newnumber;
    }

    bool isHappy(int n) {

        unordered_set<int> set;

        while(n != 1 && !set.count(n)) {
            set.insert(n)          ;
            n = nextnumber(n);
        }

        return n == 1;
    }
};
