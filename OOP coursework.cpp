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
    TeamStandart t("t", team);
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

    Team* t = sf->CreateTeam();
    t->SetTeamName(js["teamName"].get<std::string>());

    std::vector <Player> v;
    for (int i = 0; i < js["sizeTeam"].get<int>(); i++) {
        Player p{};
        p.nickName = js["team"][i]["name"].get<std::string>(),
        p.team = js["team"][i]["team"].get<std::string>(),
        p.reaction = js["team"][i]["Reaction"].get<double>(),
        p.aim = js["team"][i]["AIM"].get<double>(),
        p.tactics = js["team"][i]["Tactics"].get<double>(),
        p.teamwork = js["team"][i]["Teamwork"].get<double>(),
        p.deduction = js["team"][i]["Deduction"].get<double>(),
        p.gamingExp = js["team"][i]["GamingExp"].get<double>(),
        p.moralPsychoState = js["team"][i]["MoralPsychoState"].get<double>(),

        v.push_back(p);
    }

    t->SetCommandStaff(v);
    t->Print();

    //JsonWorker::Writing2File("test.json",js);
    ////Player p{js};
    ////p.Print();

}