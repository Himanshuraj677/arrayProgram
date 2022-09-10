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
    // to perform selection sort
  public:
    void selectionSort(int array[], int length)
    {
        for (int i = 0; i < length-1; i++)
        {
            for (int j=i+1;j<length;j++)
            {
                //swap if array [j] is smaller
                if (array [i]>array[j])
                {
                    int temp=array [i];
                    array [i]=array [j];
                    array [j]=temp;
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
    s1.selectionSort(array, length);
    //Array after Sorting
    printArray(array, length);

    return 0;
}