#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

std::vector<std::string> read_file(const std::string& file_path);

class Graph {       
  public:     
    std::vector<std::string> nodes;
    std::map<char,char,int> edges;
    std::map<char,int> heuristics;
};

int main()
{
    std::vector<std::string> lines = read_file("graph.txt");
    return 0;
}
std::vector<std::string> read_file(const std::string& file_path){
    std::ifstream file_reader(file_path);
    std::string line;
    std::vector<std::string> rows;
    std::map<std::string,Graph> graphs;
    while (getline (file_reader, line)) {
        if(line.find("#") != std::string::npos)
        {
            continue;
        }
        rows.push_back(line);
    }
    for(const auto i : rows)
    {
        std::string current_graph_name;
        if(i.find("graph") != std::string::npos)
        {
            current_graph_name = i.substr(i.find(" ")+1,i.length());
            std::cout << current_graph_name;
        }
    }
    return rows;
}