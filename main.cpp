#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int evenCount(const int *a, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(a + i) % 2 == 0)
            count++;
    }
    return count;
}

bool is_mirrored(const int *a, const int *b, int size) {
    for (int i = 0; i < size; i++) {
        if (*(a + i) != *(b + size - 1 - i)) {
            return false;
        }
    }
    return true;
}

void sumArrays(const double *arr1, const double *arr2, double *sum, int size) {
    for (int i = 0; i < size; i++) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}

void swap(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        swap(*(arr1 + i), *(arr2 + i));
    }
}

bool is_in(const int *arr1, const int *arr2, int size1, int size2) {
    const int *p1 = arr1;
    for (int i = 0; i < size1; i++) {
        bool found = false;
        const int *p2 = arr2;
        for (int j = 0; j < size2; j++) {
            if (*p1 == *p2) {
                found = true;
                break;
            }
            p2++;
        }
        if (!found) {
            return false;
        }
        p1++;
    }
    return true;
}

void power(double *n, const int *p) {
    double base = *n;
    int exponent = *p;
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    *n = result;
}

vector<int> addOne(vector<int> &v) {
    int carry = 1;
    for (int i = v.size() - 1; i >= 0; --i) {
        int sum = v[i] + carry;
        v[i] = sum % 10;
        carry = sum / 10;
        if (carry == 0) {
            break;
        }
    }
    if (carry == 1) {
        v.push_back(1);
    }
    return v;
}

vector<char> normalizeWord(vector<char> word) {
    for (int i = 0; i < word.size(); i++) {
        if (i == 0) {
            word[i] = toupper(word[i]);
        } else {
            word[i] = tolower(word[i]);
        }
    }
    return word;
}

int singleNum(vector<int> &vec) {
    sort(vec.begin(), vec.end());
    if (vec[0] != vec[1]) {
        return vec[0];
    }
    for (int i = 1; i < vec.size() - 1; i++) {
        if (vec[i] != vec[i - 1] && vec[i] != vec[i + 1]) {
            return vec[i];
        }
    }
    return vec.back();
}

int main() {
    // Problem 1
    const int SIZE1 = 10;
    float *ptr, arr[SIZE1];
    ptr = arr;
    cout << "Enter the grades of 10 students for the Midterm exam:" << endl;
    for (int i = 0; i < SIZE1; i++) {
        cin >> arr[i];
        *(ptr + i) = arr[i] * 0.3;
    }
    cout << "Overall grades (in reverse order):" << endl;
    for (int i = SIZE1 - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    // Problem 2
    int size2;
    cout << "Enter the size of the array followed by the elements:" << endl;
    cin >> size2;
    int array2[size2];
    int *a2 = array2;
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }
    cout << evenCount(a2, size2) << endl;

    // Problem 3
    int size3;
    cout << "Enter the size of the arrays:" << endl;
    cin >> size3;

    int array3_1[size3];
    int array3_2[size3];
    const int *a3_1 = array3_1;
    const int *a3_2 = array3_2;

    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < size3; i++) {
        cin >> array3_1[i];
    }

    cout << "Enter the elements of the second array (in reverse order):" << endl;
    for (int i = 0; i < size3; i++) {
        cin >> array3_2[i];
    }

    cout << is_mirrored(a3_1, a3_2, size3) << endl;

    // Problem 4
    int size4;
    cin >> size4;
    double array4_1[size4], array4_2[size4], sum[size4];
    double *arr4_1 = array4_1;
    double *arr4_2 = array4_2;
    double *sum4 = sum;
    for (int i = 0; i < size4; i++) {
        cin >> array4_1[i];
    }
    for (int i = 0; i < size4; i++) {
        cin >> array4_2[i];
    }
    sumArrays(arr4_1, arr4_2, sum4, size4);
    for (int i = 0; i < size4; i++) {
        cout << sum4[i];
    }
    cout << endl;

    // Problem 5
    int size5;
    cin >> size5;
    int array5_1[size5], array5_2[size5];
    int *arr5_1 = array5_1;
    int *arr5_2 = array5_2;
    for (int i = 0; i < size5; i++) {
        cin >> array5_1[i];
    }
    for (int i = 0; i < size5; i++) {
        cin >> array5_2[i];
    }
    swap(arr5_1, arr5_2, size5);
    cout << "Array 1 after swap:" << endl;
    for (int i = 0; i < size5; i++) {
        cout << array5_1[i] << endl;
    }
    cout << "Array 2 after swap:" << endl;
    for (int i = 0; i < size5; i++) {
        cout << array5_2[i] << endl;
    }

    // Problem 6
    int size6_1, size6_2;

    cout << "Enter the size of array 1: ";
    cin >> size6_1;
    int *arr6_1 = new int[size6_1];

    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < size6_1; i++) {
        cin >> arr6_1[i];
    }

    cout << "Enter the size of array 2: ";
    cin >> size6_2;
    int *arr6_2 = new int[size6_2];

    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < size6_2; i++) {
        cin >> arr6_2[i];
    }

    bool result6 = is_in(arr6_1, arr6_2, size6_1, size6_2);
    cout << result6 << endl;

    delete[] arr6_1;
    delete[] arr6_2;

    // Problem 7
    double baseNumber;
    int powerValue;

    cout << "Enter the base number: ";
    cin >> baseNumber;

    cout << "Enter the power: ";
    cin >> powerValue;

    power(&baseNumber, &powerValue);

    cout << "Result: " << baseNumber << endl;

    // Problem 8
    int size8;
    cout << "Enter the number of digits: ";
    cin >> size8;
    vector<int> v(size8);
    cout << "Enter the digits (from right to left): ";
    for (int i = 0; i < size8; ++i) {
        cin >> v[i];
    }
    vector<int> result8 = addOne(v);
    cout << "Result: ";
    for (int digit: result8) {
        cout << digit;
    }
    cout << endl;

    // Problem 9
    string input9;
    cin.ignore(); // Ignore the newline character left in the buffer
    cout << "Enter a word: ";
    getline(cin, input9);
    vector<char> word(input9.begin(), input9.end());
    vector<char> normalizedWord = normalizeWord(word);
    cout << "Normalized word: ";
    for (char letter: normalizedWord) {
        cout << letter;
    }
    cout << endl;

    // Problem 10
    vector<int> v10;
    int t10;
    while (cin >> t10) {
        v10.push_back(t10);
    }
    cout << singleNum(v10);

    return 0;
}


