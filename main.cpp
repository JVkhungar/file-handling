#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream abc("problem.txt");
    string operation;
    int x;
    int y;
    cout <<"press ctrl z to stop"<<endl;
    cout <<"now write the question in the given format"<<endl;
    cout <<"operator  integer  integer"<<endl;
    while(cin >> operation>>x>>y){
        abc << operation <<" " <<x <<" " << y<<endl;
    }
    abc.close();
    ifstream xyz("problem.txt");
    ofstream cake("solution.txt");
    cake <<"#1           OPERATION         #2     ANSWER"<<endl;
    while(xyz >>operation>>x>>y){
            if(operation == "add")
            cake << x<<"             +           "<<y<<"        "<<x+y<<endl;
            if(operation == "subtract")
            cake << x<<"             -           "<<y<<"        "<<x-y<<endl;
            if(operation == "multiply")
            cake << x<<"             *           "<<y<<"        "<<x*y<<endl;
            if(operation == "divide")
            cake << x<<"             /           "<<y<<"        "<<x/y<<endl;
    }

}
