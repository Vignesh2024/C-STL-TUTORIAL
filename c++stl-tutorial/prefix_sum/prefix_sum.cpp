#include <iostream>
#include <vector>

std::vector<int> calculatePrefixSum(const std::vector<int>& input) {
    int n = input.size();
    std::vector<int> prefixSum(n);

    prefixSum[0] = input[0]; // The first element remains the same

    // Calculate prefix sum
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + input[i];
    }

    return prefixSum;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> prefixSum = calculatePrefixSum(input);

    std::cout << "Input Array: ";
    for (int num : input) {
        std::cout << num << " ";
    }

    std::cout << "\nPrefix Sum Array: ";
    for (int num : prefixSum) {
        std::cout << num << " ";
    }

    return 0;
}
