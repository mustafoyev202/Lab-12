//
// Created by Baxtiyor Mustafoyev on 5/15/24.
//
#include <iostream>

using namespace std;

//int evenCount(const int *a, int size) {
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        if (*(a + i) % 2 == 0)
//            count++;
//    }
//    return count;
//}

//bool is_mirrored(const int *a, const int *b, int size) {
//    for (int i = 0; i < size; i++) {
//        if (*(a + i) != *(b + size - 1 - i)) {
//            return false;
//        }
//    }
//    return true;
//}

//void sumArrays(const double *arr1, const double *arr2, double *sum, int size) {
//    for (int i = 0; i < size; i++) {
//        *(sum + i) = *(arr1 + i) + *(arr2 + i);
//    }
//}

//void swap(int *arr1, int *arr2, int size) {
//    for (int i = 0; i < size; i++) {
//        swap(*(arr1 + i), *(arr2 + i));
//    }
//}
bool is_in(const int* arr1,const int* arr2, int size1,int size2){
    const int *p1=arr1;
    const int *p2=arr2;
    for ( int i=0;i<size2;i++){
        for (int j=0;j<size1;j++){

        }
    }

}

int main() {
    //Problem1
//    const int SIZE = 10;
//    float *ptr, arr[SIZE];
//    ptr = arr;
//    cout << "Enter the grades of 10 students for the Midterm exam:" << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cin >> arr[i];
//        *(ptr + i) = arr[i] * 0.3;
//    }
//    cout << "Overall grades (in reverse order):" << endl;
//    for (int i = SIZE - 1; i >= 0; i--) {
//        cout << *(ptr + i) << " ";
//    }
    //Problem2
//    int size;
//    cout << "Enter the size of the array followed by the elements:" << endl;
//    cin >> size;
//    int array[size];
//    int *a = array;
//    for (int i = 0; i < size; i++) {
//        cin >> array[i];
//    }
//    cout << evenCount(a, size) << endl;

//Problem3
//    int size;
//    cout << "Enter the size of the arrays:" << endl;
//    cin >> size;
//
//    int array1[size];
//    int array2[size];
//    const int *a = array1;
//    const int *b = array2;
//
//    cout << "Enter the elements of the first array:" << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> array1[i];
//    }
//
//    cout << "Enter the elements of the second array (in reverse order):" << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> array2[i];
//    }
//
//    cout << is_mirrored(a, b, size) << endl;

//Problem 4
//    int size;
//    cin >> size;
//    double array1[size], array2[size], sum[size];
//    double *arr1 = array1;
//    double *arr2 = array2;
//    double *sum4 = sum;
//    for (int i = 0; i < size; i++) {
//        cin >> array1[i];
//    }
//    for (int i = 0; i < size; i++) {
//        cin >> array2[i];
//    }
//    sumArrays(arr1, arr2, sum4, size);
//    for (int i = 0; i < size; i++) {
//        cout << sum4[i];
//    }
//    cout << endl;
//Problem 5
//    int size;
//    cin >> size;
//    int array1[size], array2[size];
//    int *arr1 = array1;
//    int *arr2 = array2;
//    for (int i = 0; i < size; i++) {
//        cin >> array1[i];
//    }
//    for (int i = 0; i < size; i++) {
//        cin >> array2[i];
//    }
//    swap(arr1, arr2, size);
//    cout << "Array 1 after swap:" << endl;
//    for (int i = 0; i < size; i++) {
//        cout << array1[i] << endl;
//    }
//    cout << "Array 2 after swap:" << endl;
//    for (int i = 0; i < size; i++) {
//        cout << array2[i] << endl;
//    }


    return 0;
}
