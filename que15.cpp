#include <iostream>
using namespace std;

class Student
{
public:
    int m[5];
    int sum;

    Student()
    {
        sum = m[5];
    }
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
            sum = sum + m[i];
        }
    }

    int calculateTotalScore()
    {
        return sum;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    //3 
    //30 40 45 10 10
    //40 40 40 10 10 
    //50 20 30 10 10
    
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}