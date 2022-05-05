#include <iostream>
using namespace std;

//Inheritance:

class Student :  
  public Person{
      
    private:
        vector<int> testScores;  
        
    public:
        Student(string firstName, string lastName, int identification, vector<int> scores) 
        : Person(firstName, lastName, identification) {
            this->testScores = scores;
        }   

        char calculate() {
            int average = 0;
            for(int i = 0; i < testScores.size(); i++) {
                average += testScores[i];
            }
            average = average / testScores.size();

            if(average >= 90) {
                return 'O'; // Outstanding
            }
            else if(average >= 80) {
                return 'E'; // Exceeds Expectations
            }
            else if(average >= 70) {
                return 'A'; // Acceptable
            }
            else if(average >= 55) {
                return 'P'; // Poor
            }
            else if(average >= 40) {
                return 'D'; // Dreadful
            }
            else {
                return 'T'; // Troll
            }
        }      
};

int main(){


    return 0;
}
