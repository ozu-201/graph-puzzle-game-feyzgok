#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include  "List/Graph/Graph.h"

using namespace std;
//using  namespace list;


void linkWords(list::Graph& graph, const vector<string> words){
    int count=words.size();

    for(int i=0; i<count; ++i){
        for(int j=0; j<count; ++j){
            string word1=words[i];
            string word2=words[j];

            int diffCount=0;
            for(size_t k=0; k<word1.size(); ++k){
                if(word1[k]==word2[k]){
                    diffCount++;
                }
            }

            if(diffCount==1){
                graph.addEdge(i,j);
            }
        }
    }
}

int main() {

    //scan files into vectors
    //loop vectors and add edge them
    //implying dijktras algorithm

    ifstream inputFile("C:\\Users\\TEMP\\Downloads//english-dictionary.txt");

    if(!inputFile.is_open()){
        cerr<<"error"<<endl;
        return 1;
    }

    vector<string> word3;
    vector<string> word4;
    vector<string> word5;

    string word;
    while(inputFile>>word){
        if(word.size()==3){
            word3.push_back(word);
        }
        else if(word.size()==4){
            word4.push_back(word);
        }
        else if(word.size()==5) {
            word5.push_back(word);
        }
    }

    inputFile.close();


    list::Graph graph3(static_cast <int> (word3.size()));
    list::Graph graph4(static_cast <int> (word4.size()));
    list::Graph graph5(static_cast <int> (word5.size()));

    linkWords(graph3,word3);
    linkWords(graph4,word4);
    linkWords(graph5,word5);

//there are also myBreadthFirstSearchAlgorithm in graph.cpp
//have a nice day
    return 0;

}