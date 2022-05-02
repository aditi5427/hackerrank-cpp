#include <iostream>
#include <sstream>
using namespace std;

class Student
{
  private:
  int age;
  int standard;
    string first_name, last_name;
    
    public:
    //age
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    //standard
    void set_standard(int b)
    {
        standard = b;
    }
    int get_standard()
    {
        return standard;
    }
    //first_name
    void set_first_name(string c)
    {
        first_name = c;
    }
    string get_first_name()
    {
        return first_name;
    }
    //last-name
    void set_last_name(string d)
    {
        last_name = d;
    }
    string get_last_name()
    {
        return last_name;
    }
    
};

int main() {
    int age =15;
    int standard =10;
    string first_name = "john";
    string last_name = "charmel";
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
     //cout << st.to_string();
     cout <<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
    
    return 0;
}