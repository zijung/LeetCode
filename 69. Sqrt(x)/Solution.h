class Solution {
public:
    int mySqrt(int x) {
        int min = 0;
        int max = x;
        long long cent = 0;

        while (min <= max) {
            cent = (max + min) / 2;
            long long int r = cent * cent;
            if (r == x) {
                return cent;
            } else if (r < x) {
                if ((cent + 1) * (cent + 1) > x) {
                    return cent;
                }

                min = cent + 1;
            } else {
                max = cent - 1;
            }
        }

        return cent;
    }
};
