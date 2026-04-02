# Indexing and Ranking Algorithm - CSC00004 

## Introduction

The Indexing and Ranking project provides a comprehensive data structure to sort and rank data arrays without altering the original memory layout or initial state of the input datasets. The algorithm is implemented based on concepts from "Numerical Recipes: The Art of Scientific Computing (Third Edition)".

In large-scale data analysis, moving and copying massive records in memory during sorting operations is highly resource-intensive and time-consuming. This project addresses this bottleneck by generating an index table that maps to the logical sorted positions of elements instead of performing direct in-place sorting on the records. This approach optimizes memory usage and selection processes, which is highly beneficial for data preparation and feature extraction tasks within data science and machine learning pipelines.

## Features

* **Non-destructive Indexing:** Generates an index array representing the sorted order of any data type without mutating the original array.
* **Element Ranking:** Computes and stores the exact rank of each element in the original array, ranging from 0 (smallest) to N-1 (largest).
* **Multi-array Synchronization:** Synchronizes the sorting of dependent arrays based on the index order of a primary key array, ensuring consistency across the dataset.
* **Virtual Array Access:** Retrieves sorted elements in O(1) time complexity, requiring no additional memory allocation for a duplicated array.

## Tech Stack

* **Language:** C++ (Core logic and memory management)
* **Libraries:** Standard Template Library (STL)
* **Environment:** GCC/G++ Compiler

## Project Structure

```text
Indexing-and-Ranking/
|-- data/
|   |-- arr.txt           
|   |-- brr.txt           
|   |-- crr.txt           
|-- include/
|   |-- display.h         
|   |-- file_io.h         
|   |-- sort.h            
|-- src/
|   |-- display.cpp       
|   |-- main.cpp          
|-- build.bat             
|-- README.md
```

## Setup and Usage

**Prerequisites:**
* A standard C++ compiler (e.g., MinGW GCC for Windows, or g++ for Linux/macOS).

**Build Instructions:**
Use the provided batch script to compile the source code:

```bash
build.bat
```

**Execution:**
Run the compiled executable to read data and perform synchronized sorting:

```bash
output.exe
```

## Roadmap

* **Algorithm Optimization:** Upgrade the underlying sorting mechanism to further reduce memory overhead and computation time for large-scale datasets.
* **Multidimensional Data Support:** Extend the C++ templates to apply the indexing algorithm to unstructured data and multidimensional matrices.
* **Data Science Integration:** Package the source code to plug directly into machine learning training systems for synchronized feature alignment and predictive model optimization.

## Authors

**Course:** CSC00004 - Introduction to Information Technology

**Program:** 24CNTN 

**Faculty:** Faculty of Information Technology (FIT)

**University:** University of Science, VNU-HCM

**Team Members:**
* Phan Minh Anh - 24120498
* Tran Dong Thuan - 24120146
* Ha Van Thien Bao - 24120022
* Phan The Minh Tri - 24120506
* Phan Ngoc Thuc - 24120228
