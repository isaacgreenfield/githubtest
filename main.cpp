#include<iostream>

int ** create(size_t rows, size_t cols);
void remove(int ** n, size_t rows, size_t cols);

int main() {
    size_t rows = 0, cols = 0;
    std::cin >> rows >> cols;
    if (!std::cin) {
        return 1;
    }
    //std::cout << rows << " " << cols << std::endl;
    int ** n = create(rows, cols);
    remove(n, rows, cols);
    return 0;
}
