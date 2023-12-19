#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include "point.cpp"
#include "rectangle.cpp"

using namespace std;
/*
class Point{
    private:
    double x;
    double y;

    public:
    void SetX(double valueX){
        x = valueX;
    }
    void SetY(double valueY){
        y = valueY;
    }
    double GetX(){
        return x;
    }
    double GetY(){
        return y;
    }
};
*/

/*
class Rectangle{
    private:
    Point x1y1, x2y2;
    vector<Point>points = {x1y1, x2y2};
    vector<double>coords = vector<double>(4); //{0.0, 0.0, 0.0, 0.0}; 
    
    public:
    Rectangle(vector<double>params){
        int i = 0;
        for (int k = 0; k < 2; k++){
            points[k].SetX(params[i]);
            i++;
            points[k].SetY(params[i]);
            i++;
        }

        int j = 0;
        for (int k = 0; k < 2; k++){

            coords[j] = points[k].GetX();
            j++;
            coords[j] = points[k].GetY();
            j++;
        }
    }

    vector<double> GetCoords(){
        return coords; 
    }
};

*/

vector<double> create_copy(vector<double> const &vec){
    vector<double>v(vec);
    return v;
}

bool Proverka(vector<double>&coord1, vector<double>&coord2){

    if ((coord1[0] > coord2[2]) or (coord2[0] > coord1[2]) or (coord1[1] > coord2[3]) or (coord2[1]> coord1[3])){
        cout<< "no"<<endl;
        return false;
    }
    else{
        cout<< "no"<<endl;
        return true;
    }
}

int main(){     
    vector<double>params1;
    vector<double>params2;

    std::ifstream in("data.txt");
    string first, second; 
    if (in.is_open()){
        getline(in, first, '\n');
        getline(in, second, '\n');       
    }
    in.close();

    int k = 0;
    for (int i = 0; i < 4; i++){
        string num;
        while (first[k] != ' '){
            num+=first[k];
            k++;
        }
        params1.push_back(stof(num));
        k++;
    }

    int j = 0;
    for (int i = 0; i < 4; i++){
        string num;
        while (second[j] != ' '){
            num+=second[j];
            j++;
        }
        params2.push_back(stof(num));
        j++;
    }

    Rectangle Pr1(params1); 
    Rectangle Pr2(params2);

    vector<double>c1 = create_copy(Pr1.GetCoords());
    vector<double>c2 = create_copy(Pr2.GetCoords());

    Proverka(c1,  c2);   

    return 0;
}