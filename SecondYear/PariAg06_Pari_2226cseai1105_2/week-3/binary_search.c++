int search(vector<int> &nums, int target) {
    // Write your code here.
    int s=0;
    int e=sizeof(nums)/sizeof(nums[0])-1;
    while(s<=e){
    int mid=s+(e-s)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        else if(target>nums[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        // mid=s+(e-s)/2;;
    }
    return -1;
  


}