/*   constraints. 

1. array size can be 10,0000 { so it is not a good approach to solve it using Binary Search or sorting algorithms }
2. there should be atleast 2 numbers in the array 
3. numbers should be there between 1 and size of the array. 

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // this step is for the intersection of both pointers to meet. 

        do{ 
            slow = nums[slow]; // this will move 1 step in the cycle 
            fast = nums[nums[fast]]; // this will move 2 steps in the cycle 
        }while(slow!= fast);

        // now its time to check the cycle start...might we missed some steps in between reset the slow pointer 
        // this is the actual step to find the duplicates 

        slow = nums[0];

        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};
