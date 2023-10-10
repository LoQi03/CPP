#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>

std::vector<std::string> read_file(const std::string& file_path);
std::string get_graph_name(std::string line);

enum GraphReaderMode{
    NAME,
    HEURISTIC,
    NODE
};
class Graph {       
  public:     
    std::vector<std::string> nodes;
    std::map<char,char,int> edges;
    std::map<char,std::map<char,int>> heuristics;
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
    for(const auto row : rows)
    {
        std::string current_graph_name;
        if(row.find("graph") != std::string::npos)
        {
            current_graph_name = get_graph_name(row);
        }
        if(row.find("graph") != std::string::npos)
        {

        }
    }
    return rows;
}
std::string get_graph_name(std::string row)
{
    return row.substr(row.find(" ")+1,row.length());
}