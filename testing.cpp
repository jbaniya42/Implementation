#include<iostream>
#include<string>
#include<vector>
#include<fstream>


using namespace std;

class Passenger  {
    string name;
    string seat;
    string age;
    string specialNeeds;
    
    public: Passenger(string name, string s, string a, string sn)
    {
        seat = s;
        age = a;
        specialNeeds = sn;
    }
};

class myListPassengers {
    vector<Passenger> my_passengers;
    
    void addPassenger(string name, string s, string a, string sn){
        Passenger my_newPassenger(name, s, a,sn);
        my_passengers.push_back(my_newPassenger);    
    }
    
    void print() {
        vector<Passenger>::iterator it;
        for(it = my_passengers.begin; it != my_passengers.end(); it++){
            cout << *it.name << *it.seat;
        }
    }
}; 

int main() {
    
    
    bool word = true;
    myListPassengers my_list;
   
    while(word){
      string name, s, a, sn;
      cin >> name >>s >> a >>sn;
      my_list.addPassenger(name,s,a,sn);
      
      if(name = " " || s = " " || a = " " || sn = " "){
          word = false;
      }
      
      
    }
} 