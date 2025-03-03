#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val){
  int count=0; 
  
  for(int i = 0; i<nums.size(); i++){

    if(nums[i] !=val){
      nums[count] = nums[i];
        count++;
    }
  }
  return count;
}

int main(){

  vector<int> nums = {3,2,2,3};
  int secoundLargestValue = removeElement(nums, 3);
  cout<< "Second Larger value is : " << secoundLargestValue<<endl;
  
}
