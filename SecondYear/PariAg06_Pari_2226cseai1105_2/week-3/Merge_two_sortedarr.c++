class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        int nums3[]={0};
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3[k++]=nums1[i++];

            }
            else{
                
             nums3[k]=nums2[j];
             k++;
             j++;
            }
        }
        while(i<n){
            nums3[k++]=nums1[i++];
        }
        while(j<m){
            nums3[k++]=nums2[j++];
        }
        
    }
};