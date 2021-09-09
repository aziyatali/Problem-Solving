class Solution {
public:
  int shipWithinDays(vector<int>& weights, int D) {
        int left = 0, right = accumulate(weights.begin(), weights.end(), 0);
        for (int w: weights)
            left = max(left, w);
        while (left < right) {
            int mid = (left + right) / 2, need = 1, cur = 0;
            for (int i = 0; i < weights.size() && need <= D; cur += weights[i++])
                // current carrier up to the target carrier
                if (cur + weights[i] > mid)
                    cur = 0, need++;
            // if need > D: shipping capacity is too small
            if (need > D) left = mid + 1;
            // shipping capacity too big
            else right = mid;
        }
        return left;
    }
};
