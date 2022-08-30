#include <iostream>

using namespace std;

void printArray(int A[], int size)
{
    for(auto i=0;i<size;i++)
        cout<< A[i]<<" ";
    cout<<endl;
}

void merge (int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid-left +1;
    auto const subArrayTwo = right-mid;

    auto * leftArray  = new int[subArrayOne];
    auto * rightArray = new int[subArrayTwo];

    //copy the array to the data
    for(auto i = 0;i<subArrayOne;i++)
        leftArray[i]=array[left+i];
    for(auto i =0;i<subArrayTwo;i++)
        rightArray[i]=array[mid+1+i];

    auto indexOfSubArrayOne = 0;
    auto indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    while(indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if(leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray]=leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else{
            array[indexOfMergedArray]=rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    //copy the remaining elements of left[], if there are any

    while(indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMergedArray]=leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    ///copy the remaining elements of right[], if there are any

    while(indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMergedArray]=rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int array[],int const begin, int const end)
{
    if(begin >= end)
        return; //Returns
    auto mid = begin + (end -begin)/2;
    mergeSort(array,begin,mid);
    mergeSort(array,mid+1,end);
    merge(array,begin,mid,end);
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr)/sizeof(arr[0]);

    

    cout << "Given arra is:  \n";
    printArray(arr,arr_size);


    mergeSort(arr, 0, arr_size-1);

    cout<<"sorted array is \n";
    printArray(arr,arr_size);

    return 0;
}