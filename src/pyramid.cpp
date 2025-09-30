#include <iostream>
#include <string>


void pyramid (int n) {
    for (int i = 0; i < n; ++i) {
        int spaces = n - 1 - i;
        for (int s = 0; s < spaces; ++s) {
            std::cout << " "; 
        }
        /// Here when I'm doing spacing, I simply calculated how many rows are left to the bottom n-1-i
        ///And prints out that many spaces to the left 
        
        int startingValue = 1;
        
        for (int j = 0; j <= i; ++j) {
            std::cout << startingValue<<" ";
            startingValue *= 2; ///Here I simply added space after each number in the ascending part 
        }

        int descendingValue = startingValue/4;
        for (int j = i - 1; j >= 0; --j) {
            std::cout << descendingValue << " "; 
            descendingValue /= 2; ///Here I simply added space after each number in the descending part
        } /// I realized my mistakes in the spacing. The pyramid looks ugly because as the number get bigger, it takes up more spaces.
        /// But I genuinely don't know how to fix that in my code :)

        std::cout << std::endl;
    }
}   

int main(int argc, char* argv[]){
    int n = std::stoi(argv[1]);
    pyramid(n);
    return 0;
}