#include <iostream>
#include <limits>
#include <vector>

int linearSearch(const std::vector<int>& values, int target) {
    for (int i = 0; i < static_cast<int>(values.size()); i++) {
        if (values[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;

    std::cout << "=== Linear Search ===\n";
    std::cout << "How many numbers? ";
    std::cin >> n;

    if (std::cin.fail() || n <= 0) {
        std::cout << "Please enter a positive whole number.\n";
        return 1;
    }

    std::vector<int> values(n);

    std::cout << "Enter " << n << " numbers: ";
    for (int& value : values) {
        if (!(std::cin >> value)) {
            std::cout << "Invalid input.\n";
            return 1;
        }
    }

    int target;

    std::cout << "Enter the number to search for: ";
    std::cin >> target;

    if (std::cin.fail()) {
        std::cout << "Invalid input.\n";
        return 1;
    }

    int index = linearSearch(values, target);

    if (index != -1) {
        std::cout << target << " found at index " << index << ".\n";
    } else {
        std::cout << target << " was not found in the array.\n";
    }

    return 0;
}
