#include <iostream>
#include <vector>

int process_data_set() {
  size_t data_set_size;
  std::cin >> data_set_size;
  std::vector<size_t> arr(data_set_size);
  for (auto& it : arr) {
    std::cin >> it;
  }
  if (arr[0] == arr[data_set_size - 1] and data_set_size >= 2) {
    std::cout << "NO" << std::endl;
  } else {
    std::cout << "YES" << std::endl;
    std::cout << arr[data_set_size - 1];
    for (auto it = arr.begin(); it != arr.end() - 1; ++it) {
      std::cout << " " << *it;
    }
    std::cout << std::endl;
  }
  return 0;
}

int main() {
  size_t input_data_sets_amount;
  std::cin >> input_data_sets_amount;
  while (input_data_sets_amount--) {
    process_data_set();
  }
  return 0;
}
