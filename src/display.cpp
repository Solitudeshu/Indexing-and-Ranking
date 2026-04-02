#include "display.h"

void displayWithIndexes(const std::vector<int>& arr) {
    std::cout << "Original array with indexes: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << "(" << i << " : " << arr[i] << ") ";
    }
    std::cout << std::endl;
}

void printRanks(const std::string& text, Indexx& indexx) {
    std::vector<int> ranks(indexx.n);
    indexx.rank(ranks);
    std::cout << text;
    for (const auto& rank : ranks) {
        std::cout << rank + 1 << " ";
    }
    std::cout << std::endl;
}