
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

    fin.open("movies.txt");
    if(fin){
        while(getline(fin, title)){
            Movie movie;
            int i = 0;

            fin >> year;
            fin.ignore();
            getline(fin, writer);
            movie.setYea(year);
            movie.setWri(writer);
            movie.setTit(title);
            movies.push_back(movie);           
    }
    }
    
    else cout<<"faild to open file.";

    for(int i=0; i< 4; i++){
        cout << "Movie: " << movies[i].getTit() << "\nYear released: " << movies[i].getYea() 
        << "Screenwriter: " << movies[i].getWri() << "\n\n";
    }
    return 0;
}