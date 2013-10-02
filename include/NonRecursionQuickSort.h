/*************************************************************************
	> File Name: NonRecursionQuickSort.cpp
	> Author: ldjhust
	> Mail: 471391503@qq.com 
	> Created Time: 2013年10月03日 星期四 01时14分13秒
 ************************************************************************/
#ifndef NonRecursionQuickSort_HNonRecursionQuickSort_H
#define NonRecursionQuickSort_HNonRecursionQuickSort_H

#include <stack>

using namespace std;

template<typename T>
T partition(T *arr, const int f, const int l)
{
    if ((NULL == arr) || (f < 0) || (f > l))
    {
        return -1;
    }

    T tmp = arr[f];
    int i = f;
    int j = l;

    while (i < j)
    {
        while ((i < j) && (arr[j] > tmp))
        {
            --j;
        }

        if (i < j)
        {
            arr[i++] = arr[j];
        }

        while ((i < j) && (arr[i] <= tmp))
        {
            ++i;
        }

        if (i < j)
        {
            arr[j--] = arr[i];
        }
    }

    arr[i] = tmp;

    return i;
}

// 非递归的快速排序，利用栈来实现
template<typename T>
void NonRecursionQuickSort(T *arr, const int f, const int l)
{
    if ((NULL == arr) || (f < 0) || (f > l))
    {
        return;
    }

    stack<T> s;
    int i;
    int j;

    // 先将右边界压入栈，再将左边界压入栈
    s.push(l);
    s.push(f);

    while (!s.empty())
    {
        // 左边界在栈顶
        i = s.top();
        s.pop();

        // 右边界是接下来的栈顶
        j = s.top();
        s.pop();

        if (i >= j)
        {
            continue;
        }

        int mid = partition(arr, i, j);

        s.push(mid - 1);
        s.push(i);
        s.push(j);
        s.push(mid + 1);
    }
}

// 递归快速排序
template<typename T>
void QuickSort(T *arr, const int f, const int l)
{
    if ((NULL == arr) || (f < 0))
    {
        return;
    }

    if (f >= l)
    {
        return;
    }

    T dir = partition(arr, f, l);

    QuickSort(arr, f, dir - 1);
    QuickSort(arr, dir + 1, l);
}

#endif
