class Solution {
public:
    int maxArea(vector<int>& height) {
        return twoPointers(height);
    }

    /*
        maximize area

        have two pointers moving towards each other
        area is the min(h1, h2) * (r - l)

        as pointers move closer, width is decreasing (area is decreasing)

        loop until left and right pointers cross:
            if the new area is the max area:
                update the max area to the new area
        
    */
    int twoPointers(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        
        int area = -10e8;
        int a = 0;
        while (l != r) {
            // update area if greater
            a = min(arr[l], arr[r]) * (r - l);
            area = max(area, a);

            // move the smaller of the heights inward
            if (arr[l] <= arr[r]) {
                l++;
            }
            else {
                r--;
            }
        }

        return area;
    }
};
