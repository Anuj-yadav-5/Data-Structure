 #include <bits/stdc++.h>
using namespace std;

class Student {
 //Properties
 public:
    string name;
    float cgpa;

    //Methods
    void getPercentage(){
        cout << (cgpa*10) <<"% \n";
    }
};

// class User {
//      int id;
//      string username;
//      string password;
//      string bio;

//      void deactivate (){ 
//         cout<< "deleting account " <<endl;
//      }
//      void editbio(string newBio){
//         bio =newBio;
//      }
// };


int main(){

  //Object 
  Student s1;
  s1.name = "Anuj Yadav";
  cout << s1.name << endl;

  return 0;
}