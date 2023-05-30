#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Player.h"
#include "Team.h"
#include "TeamFactory.h"
#include "dependencies/include/nlohmann/json.hpp"
#include "JsonWorker.h"



void f() {
    Player p{ "Степан Степанов","Zтепан",10,10,10,10,10,10,0 };
    std::vector<Player> team = { p,p,p,p,p };
    TeamStandard t("t", team);
    t.Print();
}

class Person
{
public:
    std::string name;
    int age;

    void Print() {
        std::cout << name << " " << age << std::endl;
    }
};

void f00() {
    Player p{ "Stepan Stepanov","ZVO",10,10,10,10,10,10,0 };
    nlohmann::json j{};
    j["name"] = p.GetNickName();
    j["team"] = p.GetTeamName();
    j["AIM"] = p.GetAim();
    j["Reaction"] = p.GetReaction();
    j["Tactics"] = p.GetTactics();
    j["Teamwork"] = p.GetTeamwork();
    j["Deduction"] = p.GetDeduction();
    j["GamingExp"] = p.GetGamingExp();
    j["MoralPsychoState"] = p.GetMoralPsychoState();

    std::cout << j << std::endl;
}

int main()
{
    setlocale(LC_ALL, "");

    nlohmann::json js = JsonWorker::GetJsonStruct("test.json");
    //std::cout << js << std::endl;

    //std::cout << js["team"][4]["AIM"].get<double>();

    
    //std::string tName = js["teamName"].get<std::string>();
    StandartTeamFactory* sf = new StandartTeamFactory;

    Team* t = sf->CreateTeam(js);
    //t->SetTeamName(js["teamName"].get<std::string>());

    //std::vector <Player> v;
    //for (int i = 0; i < js["sizeTeam"].get<int>(); i++) {
    //    Player p{ js["team"][i]};
    //    v.push_back(p);
    //}

    //t->SetCommandStaff(v);
    t->Print();


    //JsonWorker::Writing2File("test.json",js);
    ////Player p{js};
    ////p.Print();

}