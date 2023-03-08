#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class ThroneInheritance {
private:
    unordered_map<string, vector<string>> inheritance;
    unordered_set<string> deaths;
    string king;
    
public:
    ThroneInheritance(string kingName) {
        this->king = kingName;
        this->inheritance[kingName] = vector<string>();
    }
    
    void birth(string parentName, string childName) {
        this->inheritance[parentName].push_back(childName);
        this->inheritance[childName] = vector<string>();
    }
    
    void death(string name) {
        this->deaths.insert(name);
    }
    
    void helper(string name, vector<string> &order){
        if(this->deaths.find(name) == this->deaths.end()) order.push_back(name);
        for(int i = 0; i < inheritance[name].size(); i++){
            helper(this->inheritance[name][i], order);
        }
    }

    vector<string> getInheritanceOrder() {
        vector<string> order;
        helper(king, order);
        return order;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */