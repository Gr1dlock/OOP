#ifndef FILE_LOADER_H
#define FILE_LOADER_H

#include <fstream>
#include <iostream>
#include "base_loader.h"
#include "../math/point.h"
#include "../objects/model.h"
#include "../exceptions/file_open_exception.h"

namespace uploading
{

using math::Point;
using objects::Model;

class FileLoader: public BaseLoader
{
public:
    FileLoader() = default;
    ~FileLoader() override;

    void open(std::string source_name) override;
    void close() override;
    std::pair<size_t, size_t> readModelInfo() override;
    std::pair<size_t, size_t> readEdgeInfo() override;
    math::Point readPoint() override;
private:
    std::ifstream _file;
};

}

#endif // FILE_LOADER_H
