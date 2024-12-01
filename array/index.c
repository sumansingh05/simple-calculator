#include<stdio.h>

int twoSum(int *nums,int numSize,int target,int *result){
    for(int i=0;i<numSize-1;i++){
        for(int j=i+1;j<numSize;j++){
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                return 1;  //return 1 indicate that a valid pair was found
            }
        }
    }
    return 0;  //return 0 if no pair is found

}
int main(){
    int array[] = {10,2,6,8};
    int target = 12;
    int result[2];
    int Size = 4;
    if(twoSum(array,Size,target,result)){
        printf("Indices: %d %d \n",result[0],result[1]);
    }else{
        printf("No valid pair found.");
    }
    return 0;
}