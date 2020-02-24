/// Guessing Game C++ version:))))

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(static_cast<int>(time(0)));/// the random number will change after the game ends

    /// Generate random number from 1 to 40 :)
    int random_number = (rand()%40) + 1 ;

    /// Get input
    int your_guess;

    cout<< "your guess is: "<<endl;
    cin>> your_guess;

    int chances = 1;

    /// MAIN GAME
    while (chances <=5){

        if (your_guess == random_number){
            cout<< " Congratulation!!! You guessed correctly"  << endl;
            break;
        }else{

            if (chances <5){
                cout<< "You guessed incorrectly!"  << endl;

                /// outside or inside the zone
                if (abs(your_guess - random_number) <= 5){
                    cout<< "Your inside the zone! try again!"<<endl;
                }else{
                    cout<< "Your outside the zone! Try again!"<<endl;
                }

                cout<< "YOUR having " << 5 - chances << "chances left " << endl;

                chances++;

                cout<< "your guess now is: "<<endl;
                cin>> your_guess;
            }else{
                cout<< "Your failed the game!! see you later:))"<< endl;
                cout<< "The random number is: "<< random_number << endl;
                break;
            }
        }
    }
    return 0;
}
