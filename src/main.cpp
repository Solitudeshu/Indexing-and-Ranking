#include <vector>
#include "sort.h"
#include "file_io.h"
#include "display.h"

int main() {
    std::vector<int> o_arr, o_brr, o_crr;

    readFileToVector("data/arr.txt", o_arr);
    readFileToVector("data/brr.txt", o_brr);
    readFileToVector("data/crr.txt", o_crr);

    displayWithIndexes(o_arr);
    displayWithIndexes(o_brr);
    displayWithIndexes(o_crr);

    std::vector<int> arr = o_arr, brr = o_brr, crr = o_crr;
    
    Indexx arrindex(arr);
    Indexx brrindex(brr);
    Indexx crrindex(crr);
    
    arrindex.sort(arr);
    printVector("Sorted arr: ", arr);
    printSortedAccordingToIndexes("Sorted brr according to arr sorted indexes: ", arrindex, o_brr);
    printSortedAccordingToIndexes("Sorted crr according to arr sorted indexes: ", arrindex, o_crr);

    brrindex.sort(brr);
    printVector("Sorted brr: ", brr);
    printSortedAccordingToIndexes("Sorted arr according to brr sorted indexes: ", brrindex, o_arr);
    printSortedAccordingToIndexes("Sorted crr according to brr sorted indexes: ", brrindex, o_crr);

    crrindex.sort(crr);
    printVector("Sorted crr: ", crr);
    printSortedAccordingToIndexes("Sorted arr according to crr sorted indexes: ", crrindex, o_arr);
    printSortedAccordingToIndexes("Sorted brr according to crr sorted indexes: ", crrindex, o_brr);

    printRanks("Ranks for arr: ", arrindex);
    printRanks("Ranks for brr: ", brrindex);
    printRanks("Ranks for crr: ", crrindex);

    return 0;
}