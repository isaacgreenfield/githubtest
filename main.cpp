#include<iostream>

int ** create(size_t rows, size_t cols);
void remove(int ** n, size_t rows, size_t cols);
void input(int ** n, size_t rows, size_t cols);
void output (const int * const * n, size_t rows, size_t cols);

int main() {
    size_t rows = 0, cols = 0;
    std::cin >> rows >> cols;
    if (!std::cin) return 1;
    int ** n = create(rows, cols);
    //...
    input(n, rows, cols);
    if (!std::cin) {
        remove(n, rows, cols);
        return 1;
    }
    output(n, rows, cols);
    //...
    remove(n, rows, cols);
    std::cout << std::endl;
    return 0;
}
