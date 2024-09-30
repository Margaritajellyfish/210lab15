/*Code a Movie class that has the screen writer, the year released, and the title as its private member variables. It has the standard setters and getters for each private member variable. Also code a print() method which prints the object data in a simple format.

Your code should read data from an input file, using the data below, which lists data in this order: title, year released, screen writer name.

Read this data into a temporary Movie object. Then append that object to your container.

For your container, you can choose an <array> class array or a <vector> class vector. Store your four records in this container.

Towards the end of your main() function, output the contents of the array/vector.
*/
#include<iostream>
#include<iomanip>
#include<fstream>
#include<array>

using namespace std;


class Movie{

string writer;
int year;
string title;

public:
void setWri(string w) {writer = w;}
void setYea(int y) {year = y;}
void setTit(string t) {title = t;}

string getWri() {return writer;}
int getYea() {return year;}
string getTit() {return title;}

};

int main(){
    vector<Movie> movies;
    string title;
    int year;
    string writer;
    ifstream fin;

    if(fin.good()){
        while(getline(fin, title){
            fin >> year;
            cin.ignore();
            getline(fin, )

    }
    }
    
    else cout<<"faild to open file."
    return 0;
}