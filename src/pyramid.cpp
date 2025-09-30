#include <iostream>
#include <string>

void pyramid (int n) {
    for (int i = 0; i < n; ++i) {
        int startingValue = 1;
        
        for (int j = 0; j <= i; ++j) {
            std::cout << startingValue;
            startingValue *= 2;
        }

        int descendingValue = startingValue/4;
        for (int j = i - 1; j >= 0; --j) {
            std::cout << descendingValue;
            descendingValue /= 2;
        }

        std::cout << std::endl;
    }
}   

int main(int argc, char* argv[]){
    int n = std::stoi(argv[1]);
    pyramid(n);
    return 0;
}