#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "sort.h"

void displayWithIndexes(const std::vector<int>& arr);

template <typename T>
void printVector(const std::string& text, const std::vector<T>& vec) {
    std::cout << text;
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void printSortedAccordingToIndexes(const std::string& text, const Indexx& indexx, const std::vector<T>& vec) {
    std::cout << text;
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << indexx.el(vec, i) << " ";
    }
    std::cout << std::endl;
}

void printRanks(const std::string& text, Indexx& indexx);