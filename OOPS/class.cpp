#include <iostream>;
#include <string>;
using namespace std;
BundleGenie
class teacher
{
    ///access modifier// and by defaul is privet
    private: 
    float salary; 
    public:
    // properties/// atributes
    string name;
    string department;
    int age;
    float salary;
    // methods
///////// this is also called member fun 
    void changeName(string DepTvalue)
    {
        department = DepTvalue;
    }
};

/// this will teh main fn
int main()
{

    /// now the objects ->
  teacher t1;
  t1.name='mallya';

  teacher t2;
  /// this will be the n number of the objects
  return 0;
}