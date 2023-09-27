#include <iostream>
using namespace std;

void min_max(const double arr[], const int length) {
    if (length <= 0) {
        std::cout << "array empty" << std::endl;
        return;
    }

    double min_value = arr[0];
    double max_value = arr[0];
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < length; ++i) {
        if (arr[i] < min_value) {
            min_value = arr[i];
            min_index = i;
        }

        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }

    std::cout << "Min Value: " << min_value << " (index " << min_index << ")" << std::endl;
    std::cout << "Max Value: " << max_value << " (index " << max_index << ")" << std::endl;
}


int main() {
    double arr[] = { 3.14, -5.0, 10.5, 0.0, 7.2 };
    int length = sizeof(arr) / sizeof(arr[0]);

    min_max(arr, length);

    return 0;
}