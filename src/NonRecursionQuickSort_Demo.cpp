/*************************************************************************
	> File Name: NonRecursionQuickSort_Demo.cpp
	> Author: ldjhust
	> Mail: 471391503@qq.com 
	> Created Time: 2013年10月02日 星期三 09时58分09秒
 ************************************************************************/

#include <iostream>
#include "NonRecursionQuickSort.h"

using namespace std;

int main()
{
    int arr[] = {4, 9, 2, 0, 6, 8, 3, 7, 1, 5};

    NonRecursionQuickSort(arr, 0, 9);

    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;

}
