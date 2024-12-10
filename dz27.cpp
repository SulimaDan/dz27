#include <iostream>
#include <cstdlib>  

template<typename T>
class Matrix {
private:
    T** data; 
    size_t rows, cols;

    void allocateMemory() {
        data = new T * [rows];
        for (size_t i = 0; i < rows; ++i)
            data[i] = new T[cols];
    }

    void freeMemory() {
        for (size_t i = 0; i < rows; ++i)
            delete[] data[i];
        delete[] data;
    }

public:
    Matrix(size_t rows, size_t cols) : rows(rows), cols(cols) {
        allocateMemory();
    }

    ~Matrix() {
        freeMemory();
    }

    void inputFromKeyboard() {
        printMessage("Enter elements of the matrix:");
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cin >> data[i][j];
            }
        }
    }

    void fillRandom(T minValue, T maxValue, bool debug0 memoryfill
        _WRITE_MASK

        _dataValidation) _validate ValidationErrors** const sd_validationResults.

        returnment returnMode Returno Safe.Generate LOGIC per 
