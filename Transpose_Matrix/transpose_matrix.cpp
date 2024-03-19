#include <iostream>
#include <vector>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    std::vector<std::vector<int>> matrix = {{0, 2, 4},
                                           {3, 5, 7},
                                           {6, 8, 9}};

    std::cout << "Original Matrix:\n";
    for (auto row : matrix) {
        for (int element : row) {
            std::cout << element << ' ';
        }
        std::cout << '\n';
    }

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    std::cout << "\nTransposed Matrix:\n";
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}

