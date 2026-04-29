#include <bits/stdc++.h>
using namespace std;

class User {
    int id;
    string password;

    public:
    string username;

    User (int id) {
        this-> id = id; 
    }

    void setPassword(string password){
       this->password = password;
    }

    string getPassword(){
        return password;
    }
  // getter for id
    int getId(){
        return id;
    }

};

int main(){
    User user1(101);
    user1.username = "Anuj";
    user1.setPassword("abcd");

    cout<< user1.username <<endl;
    cout << user1.getPassword() <<endl; 
    cout << user1.getId() <<endl;


    return 0;
}

