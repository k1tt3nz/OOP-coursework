#include "dependencies/include/nlohmann/json.hpp"

class JsonWorker
{
public:
	static nlohmann::json GetJsonStruct(std::string fileName);
	static void Writing2File(std::string fileName, nlohmann::json jString);
};

