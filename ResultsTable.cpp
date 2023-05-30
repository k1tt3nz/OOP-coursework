#include "ResultsTable.h"
#include <iostream>
#include <iomanip>

void ResultsTable::Print()
{
    std::cout << "********** Результаты матча **********" << "\n";
    std::cout << "Раунд# " << std::setw(20) << std::left << nameTeam1 << std::setw(20) << nameTeam2 << std::endl;

    for (int i = 0; i < numberRoundsPlayed; i++) {
        std::cout << std::setw(7) << i + 1 << std::left
            << std::setw(20) << resultsTeam1[i] 
            << std::setw(20) << resultsTeam2[i] 
            << std::endl;
    }

}

//ResultsTable ResultsTable::GetTable()
//{
//    return new ResultsTable();
//}

ResultsTable::ResultsTable(std::string nameTeam1, std::vector<std::string> resultsTeam1, std::string nameTeam2, std::vector<std::string> resultsTeam2)
{
    this->nameTeam1 = nameTeam1;
    this->nameTeam2 = nameTeam2;

    this->resultsTeam1 = resultsTeam1;
    this->resultsTeam2 = resultsTeam2;

    this->numberRoundsPlayed = resultsTeam1.size();
}
