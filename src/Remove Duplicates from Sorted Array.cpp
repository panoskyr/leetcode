class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        std::vector<int> ::iterator uniqueptr=nums.begin();
        std::vector<int> ::iterator duplicateptr=nums.begin();
        for(duplicateptr;duplicateptr!=nums.end();duplicateptr++)
        {
            if(*uniqueptr!=*duplicateptr)
            {
                uniqueptr++;
                *uniqueptr=*duplicateptr;
            }
        }
        uniqueptr++;
        nums.erase(uniqueptr,nums.end());
        return nums.size();
                
       
        
    }
};