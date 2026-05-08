#include<iostream>
#include<string>
using namespace std;
class user{
  private:
  int id;
  string password;
  public:
  string username;
  user(int id){
    this->id=id;
  }
  //geter
  string getpassword(){
    return password;
  }
  //setter
  void setpassword(string password){
    this->password=password;
  }





};
int main(){
    user u1(101);
    u1.username="Aayushman Singh";
    u1.setpassword("abcd");

    cout<<"username: "<<u1.username<<endl;
    cout<<"password: "<<u1.getpassword();

}