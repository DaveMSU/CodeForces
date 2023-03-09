#include <iostream>
#include <vector>

int process_data_set() {
  size_t matrix_side_size;
  std::cin >> matrix_side_size;
  std::vector<std::vector<size_t>> matrix(matrix_side_size,
                                          std::vector<size_t>(matrix_side_size));
  size_t row, col;
  size_t n = matrix_side_size * matrix_side_size;
  for (size_t i = 0; i < n; ++i) {
    row = i / matrix_side_size;
    if ((i / matrix_side_size) % 2 == 0) {
      col = i % matrix_side_size;
    } else {
      col = matrix_side_size - (i % matrix_side_size) - 1;
    }
    matrix[row][col] = i % 2 == 0 ? n - (i + 1) / 2 : (i + 1) / 2;
  }
  for (auto line : matrix) {
    for (auto elem : line) {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}

int main() {
  size_t inout_data_sets_amount;
  std::cin >> inout_data_sets_amount;
  while (inout_data_sets_amount--) {
    process_data_set();
  }
  return 0;
}
