#include<iostream>

int ** create(size_t rows, size_t cols);
void remove(int ** n, size_t rows);
void input(int ** n, size_t rows, size_t cols);
void output (const int * const * n, size_t rows, size_t cols);
//hometask untill evening -> commit
//look at phone -> photos :)

int main() {
    size_t rows = 0, cols = 0;
    std::cin >> rows >> cols;
    if (!std::cin) return 1;
    int ** n = create(rows, cols);
    input(n, rows, cols);
    if (!std::cin) {
        remove(n, rows);
        return 1;
    }
    output(n, rows, cols);
    remove(n, rows);
    std::cout << std::endl;
    return 0;
}

void input(int ** n, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows && (std::cin); ++i) {
        for (size_t j = 0; j < cols && (std::cin); ++j) {
            std::cin >> n[i][j];
        }
    }
}
void output(const int * const * n, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << n[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void remove(int ** n, size_t rows) {
    for (size_t i = 0; i < rows; ++i) delete[] n[i];
    delete[] n;
}
int ** create(size_t rows, size_t cols) {
    int ** result = new int*[rows];
    size_t i = 0;
    try {
        for (;i < rows; ++i) {
            result[i] = new int[cols];
        }
    } catch (...) {
        remove(result, i);
        throw;
    }
    return result;
}