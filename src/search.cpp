#include <iostream>
#include <vector>
// This creates a functoon that receives a 2-D vector and an integer as the number we are looking for 
bool searchMatrix(std::vector<std::vector<int>> matrix, int target){
    // This checks if the row is empty, return false (0) if it was empty
   if (matrix.empty()){
    return false;
   }
   //This checks if the column is empty, return false (0) if it was empty
   if (matrix[0].empty()){
    return false;
   }

   //We are trying to use binary search here 
   //Firstly, we need to figure out how many elements are there in the vector 
   //Secondly, we calculate the midpoint of all the elemets 
        //Since the list of numbers is already sorted, we can use binary search to improve the efficiency 
        //We start from the midpoint, if the midpoint is bigger than the target, we only need to check the number before the midpoint to find the target
   int m = matrix.size();
   int n = matrix[0].size();

   int total = m*n;

   int low = 0;
   int high = total - 1;

   while (low <= high) {
    int mid = low + (high - low)/2;

    int row = mid / n;
    int col = mid % n;

    int midValue = matrix[row][col];

    if (midValue == target) {
        return true;
    } else if (midValue <target){
        low = mid + 1;
    } else {
        high = mid - 1;
    }
   }
   return false;
}

int main(){
    std::vector<std::vector<int>> matrix ={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int target = 3;
    std::cout << searchMatrix(matrix, target)<< std::endl;
    return 0;
}