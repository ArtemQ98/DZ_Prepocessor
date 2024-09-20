#include "function.h"
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    setlocale(LC_ALL, "Ru");

    const int size = 4;

    double arr[size] = {'A', 'B', 'D', 'C'};
    fill(arr , size);
    show(arr, size);
    findMin(arr, size);
    findMax(arr, size);
    sort(arr, size);
    show(arr, size);
    change(arr, size);
    show(arr, size);
}

