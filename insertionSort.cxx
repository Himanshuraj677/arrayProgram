#include <iostream>
using namespace std;
//to print the array
void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
};
class Sorting
{
    // to perform inserrion sort
  public:
    void insertionSort(int array[], int length)
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length - 1; j++)
            {
                //Swap the number if the first number is largest
                if (array[j] > array[j + 1])
                {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
};
int main()
{
    // Number of arrays
    int array[] = {25, 63, 12, 19, 32, 18, 86, 9, 15, 21, 68, 91, 24, 85, 98};
    int length = sizeof(array) / sizeof(array[0]);
    Sorting s1;
    cout << "Array before sorting is:";
    //Array before Sorting
    printArray(array, length);
    cout << "Array after sorting is:";
    s1.insertionSort(array, length);
    //Array after Sorting
    printArray(array, length);

    return 0;
}
