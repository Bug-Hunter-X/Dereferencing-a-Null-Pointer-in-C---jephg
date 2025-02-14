int main() {
  int* ptr = nullptr; 
  if (ptr != nullptr) {
    *ptr = 10; 
  } else {
    std::cerr << "Error: Pointer is null" << std::endl; 
    // Handle the null pointer appropriately, e.g., return an error code or throw an exception
    return 1; // Indicate an error
  }
  return 0;
}