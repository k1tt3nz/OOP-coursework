#include <iostream>
#include <fstream>

#include "JsonWorker.h"
#include "dependencies/include/nlohmann/json.hpp"


nlohmann::json JsonWorker::GetJsonStruct(std::string fileName)
{
    try
    {
        nlohmann::json objJson;

        std::fstream fileInput;
        fileInput.open(fileName);
        if (fileInput.is_open()) {
            fileInput >> objJson;

            fileInput.close();
        }
        else
        {
            throw std::exception("Не удалось открыть файл");
        }

        return objJson;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void JsonWorker::Writing2File(std::string fileName,nlohmann::json jString)
{
    try
    {
        std::ofstream out;
        out.open(fileName);
        if (out.is_open()) {
            out << jString << std::endl;
        }
        out.close();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
