#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

namespace math
{

class Matrix
{
public:
    Matrix();

    double get(size_t i, size_t j) const;
    void set(size_t i, size_t j, double value);
protected:
    std::vector<std::vector<double>> _data;
};

}

#endif //MATRIX_H
