class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m,n2=n;
        for ( int i= m+n; (i >0) ; i--){ 
            if (( n1 > 0) && (n2 > 0)) {
                if (nums2[n2-1] >= nums1[n1-1]) {
                    nums1[i-1] = nums2[n2-1];
                    n2--;
                }
                else {
                    nums1[i-1] = nums1[n1-1];
                    n1--;
                }  
            }
            else if (n1==0) {
                nums1[i-1] = nums2[n2-1];
                n2--;
            }
            else {
                nums1[i-1] = nums1[n1-1];
                n1--;
            }
                      
        }              
    }
    
};