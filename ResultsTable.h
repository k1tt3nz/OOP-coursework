#include <vector>
#include <string>

class ResultsTable
{
public:
	void Print();
	void SetTable(ResultsTable table);
	ResultsTable GetTable();

	ResultsTable(std::string nameTeam1, std::vector<std::string> resultsTeam1, std::string nameTeam2, std::vector<std::string> resultsTeam2);
private:

	std::string nameTeam1;
	std::string nameTeam2;

	std::vector<std::string> resultsTeam1;
	std::vector<std::string> resultsTeam2;
};

