#include <iostream>
#include <map>
#include <String>

using namespace std;

int main(){
    int myAge = 22;
    string name = "Aang";
    float decimal = 2.5;
    bool real = true;
    bool fake = false;
    int score[5] = {10, 20, 15, 10, 30};
    //score[0] = "a"; invalid
    //int x = "5" + 6; can not convert a const char with an int
    //map<int, string>colors = {{1, "Purple"}, {2, "Pink"}, {3, "Blue"}}; error expected primary expression before int
    //map<string, int> colors = {{"Purple", 1}, {"Pink", 2}, {"Blue", 3}};
    //map<int, string>colors = {{1, "Purple",}, {2, "Black",}, {3, "Orange",}};
    cout<< "My name is " << name <<"\n";
    cout<<"My age is "<< myAge<<"\n"; 
    cout<<decimal << " This is a float\n";
    cout<<real<< " is the output for the boolean 'real' True values return the number 1.\n";
    cout<<fake<< " is the output for the boolean 'fake' False values return the value 0.\n";
    cout<<score<<" --> outputs the location of the array\n"; 
    cout<<score[0]<<" --> outputs the first element in the array\n"; 
    
    return 0;                                                                                                            

}