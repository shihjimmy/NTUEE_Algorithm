// **************************************************************************
//  File       [sort_tool.cpp]
//  Author     [Yu-Hao Ho]
//  Synopsis   [The implementation of the SortTool Class]
//  Modify     [2020/9/15 Mu-Ting Wu]
// **************************************************************************

#include "sort_tool.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

// Constructor
SortTool::SortTool() {}

// Insertsion sort method
void SortTool::InsertionSort(vector<int>& data) {
    // Function : Insertion sort
    // TODO : Please complete insertion sort code here
    for (int i = 1; i < data.size();i++)
    {
        int key = data[i];
        int j = i - 1;
        while (j>=0 && data[j]>key)
        {
            data[j + 1] = data[j];
            j -= 1;
        }
        data[j + 1] = key;
    }
}

// Quick sort method
void SortTool::QuickSort(vector<int>& data){
    QuickSortSubVector(data, 0, data.size() - 1);
}

// Sort subvector (Quick sort)
void SortTool::QuickSortSubVector(vector<int>& data, int low, int high) {
    // Function : Quick sort subvector
    // TODO : Please complete QuickSortSubVector code here
    // Hint : recursively call itself
    //        Partition function is needed
    if(low < high)
    {
        int pivot = RandomPartition(data, low, high);
        QuickSortSubVector(data, low, pivot-1);
        QuickSortSubVector(data,pivot+1,high);
    }
}

int SortTool::RandomPartition(vector<int>& data,int low,int high){
    srand((unsigned)time(NULL));
    int key = (rand() % (high-low+1)) + low;
    int temp;
    temp = data[high];
    data[high] = data[key];
    data[key] = data[high];
    return Partition(data, low, high);
}

int SortTool::Partition(vector<int>& data, int low, int high) {
    // Function : Partition the vector 
    // TODO : Please complete the function
    int pivot = data[high];
    int cur = low - 1;
    int i = low;
    while (i < high)
    {
        if(data[i] <= pivot)
        {
            cur++;
            int temp;
            temp = data[i];
            data[i] = data[cur];
            data[cur] = temp;
        }
        i++;
    }
    int temp;
    temp = data[++cur];
    data[cur] = data[high];
    data[high] = temp;
    return cur;
}

// Merge sort method
void SortTool::MergeSort(vector<int>& data){
    MergeSortSubVector(data, 0, data.size() - 1);
}

// Sort subvector (Merge sort)
void SortTool::MergeSortSubVector(vector<int>& data, int low, int high) {
    // Function : Merge sort subvector
    // TODO : Please complete MergeSortSubVector code here
    // Hint : recursively call itself
    //        Merge function is needed
    if(low < high)
    {
        int mid = (low+high)/2;
        MergeSortSubVector(data, low, mid);
        MergeSortSubVector(data, mid + 1, high);
        Merge(data, low, mid, high);
    }
    return;
}

// Merge
void SortTool::Merge(vector<int>& data, int low, int middle,int high) {
    // Function : Merge two sorted subvector
    // TODO : Please complete the function
    vector<int> left;
    vector<int> right;

    for (int i = low; i <= middle;i++)
        left.push_back(data[i]);
    left.push_back(2147483647);

    for (int i = middle + 1; i <= high; i++)
        right.push_back(data[i]);
    right.push_back(2147483647);

    int index_left = 0;
    int index_right = 0;
    for (int i = low; i <= high;i++)
    {
        if(left[index_left] <= right[index_right])
        {
            data[i] = left[index_left];
            index_left++;
        }
        else
        {
            data[i] = right[index_right];
            index_right++;
        }
    }
}

// Heap sort method
void SortTool::HeapSort(vector<int>& data) {
    // Build Max-Heap
    BuildMaxHeap(data);
    // 1. Swap data[0] which is max value and data[i] so that the max value will be in correct location
    // 2. Do max-heapify for data[0]
    for (int i = data.size() - 1; i >= 1; i--) {
        swap(data[0],data[i]);
        heapSize--;
        MaxHeapify(data,0);
    }
}

//Max heapify
void SortTool::MaxHeapify(vector<int>& data, int root) {
    // Function : Make tree with given root be a max-heap if both right and left sub-tree are max-heap
    // TODO : Please complete max-heapify code here
    int left = root * 2 + 1;
    int right = root * 2 + 2;
    int max = root;
    if(left < heapSize && data[max] < data[left])
        max = left;
    if(right < heapSize && data[max] < data[right])
        max = right;
    if(max!=root)
    {
      int temp;
      temp = data[root];
      data[root] = data[max];
      data[max] = temp;
      MaxHeapify(data, max);
    }
}

//Build max heap
void SortTool::BuildMaxHeap(vector<int>& data) {
    heapSize = data.size(); // initialize heap size
    // Function : Make input data become a max-heap
    // TODO : Please complete BuildMaxHeap code here
    for (int i = heapSize / 2; i >= 0;i--)
        MaxHeapify(data, i);
}