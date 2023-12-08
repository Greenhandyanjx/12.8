#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void merge(int* arr, int start, int mid, int end)
{
    int* ret = (int*)malloc((end - start + 1) * sizeof(int));
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            ret[k++] = arr[i++];
        else
            ret[k++] = arr[j++];

    }
    while (i <= mid)
        ret[k++] = arr[i++];
    while (j <= end)
        ret[k++] = arr[j++];
    for (i = 0; i < k; i++)
    {
        arr[start + i] = ret[i];
    }
    free(ret);
    ret = NULL;
}
void mergeSort(int* arr, int start, int end)
{
    if (arr == NULL || start >= end)
        return;
    int mid = 0;
    mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
//void merge(int* arr, int start, int mid, int end)
//{
//    int* ret = (int*)malloc((end - start + 1) * sizeof(int));
//    int i = start, j = mid + 1, k = 0;
//    while (i <= mid && j <= end)
//    {
//        if (arr[i] <= arr[j])
//            ret[k++] = arr[i++];
//        else
//            ret[k++] = arr[j++];
//
//    }
//    while (i <= mid)
//        ret[k++] = arr[i++];
//    while (j <= end)
//        ret[k++] = arr[j++];
//    for (i = 0; i < k; i++)
//    {
//        arr[start + i] = ret[i];
//    }
//    free(ret);
//    ret = NULL;
//}
//{
//    int a = 0, b = 0, c = 0, d = start, e;
//    if (start == end)
//        c = mid;
//    else
//        c = mid + 1;
//    int arr1[10000] = { 0 };
//    e = end - start;
//    for (a = 0; a <= e; a++)
//    {
//        arr1[a] = arr[a];
//    }
//    for (a = 0; a <= end - start; a++)
//    {
//        if (arr1[d] < arr1[c])
//        {
//            arr[a] = arr1[d];
//            d++;
//        }
//        else
//        {
//            arr[a] = arr1[c];
//            c++;
//        }
//        while (d == mid + 1 && end >= c)
//        {
//            a++;
//            arr[a] = arr1[c++];
//        }
//        while (c == end + 1 && mid >= d)
//        {
//            a++;
//            arr[a] = arr1[d];
//            d++;
//        }
//    }
//}
//void mergeSort(int* arr, int start, int end)
//{
//    if (arr==NULL||start >= end)
//        return;
//    int mid = 0;
//    mid = (start + end) / 2;
//    mergeSort(arr, start, mid);
//    mergeSort(arr, mid + 1, end);
//    merge(arr, start, mid, end);
//}
int main() {
    // length of array
    int n=0;
    scanf("%d", &n);

    // initial array
    int* arr = (int*)malloc(sizeof(int) * (n));
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    // sorting
    mergeSort(arr, 0, n - 1);

    // print array
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    free(arr);
    return 0;
}
//void merge(int* arr, int start, int mid, int end)
//{
//    int a = 0, b = 0, c=0,d = start, e;
//    if (start == end)
//        c = mid;
//    else
//        c = mid + 1;
//    int arr1[10000] = { 0 };
//    e = end - start;
//    for (a = 0; a <= e; a++)
//    {
//        arr1[a] = arr[a];
//    }
//    for (a = 0; a <= end - start; a++)
//    {
//        if (arr1[d] < arr1[c])
//        {
//            arr[a] = arr1[d];
//            d++;
//        }
//        else
//        {
//            arr[a] = arr1[c];
//            c++;
//        }
//        while (d == mid+1 && end >= c)
//        {
//            a++;
//            arr[a] = arr1[c++];
//        }
//        while (c == end+1 && mid >= d)
//        {
//            a++;
//            arr[a] = arr1[d];
//            d++;
//        }
//    }
//
//}
//int main()
//{
//    int a = 0;
//    int arr[100] = {0};
//    do { scanf("%d", &arr[a]);a++; } while (getchar() != '\n');
//    int end = a-1;
//    int mid = (0 + end) / 2;
//    merge(arr, 0, mid, end);
//    for (a = 0; a < end+1; a++)
//    {
//        printf("%d ", arr[a]);
//    }
//    return 0;
//}