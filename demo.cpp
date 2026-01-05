//Menu screen designs.
#include <iostream>
#include <cstdlib> //for clearing screen
#include <cctype> //for forcing lowercase characters
#include <limits> //to force only particular data types to be taken as input.

using namespace std;

class MainChecker{
    private:
    int& number; //useful for the main menu selections.
    char& choice_alphabet; //useful for the difficulty selection.
    
    public:
    //constructor for the instantiation of the object.
    MainChecker(int& num, char& alphabet) : number(num), choice_alphabet(alphabet){}
    
    void clearScreen() {
        #ifdef _WIN32
        system("cls");  
        #else
        system("clear");
        #endif
    }
    
    void InputChecker(){
        cout << "ASTRO JUMPERa" << endl;
        cout << "----------------------" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Difficulty" << endl;
        cout << "3. Score" << endl;
        cout << "4. Close the game" << endl;
        cout << "Please select these options from 1 - 4" << endl;
        //cin>>number;
        
        while((!(cin>>number)) && (number<1 || number>4)){
        clearScreen();
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         diffcultySelector();
        }
        
        switch (number){
        case 1:
            clearScreen();
            cout << "START!!!" << endl;
            //to start the game in a new 'clear screen'.
            break;
            
        case 2:
            clearScreen();
            cout << "Select the difficulty: " << endl;
            cout << "a. Easy" << endl;
            cout << "b. Medium" << endl;
            cout << "c. Hard" << endl;
            cout << "d. Sinister" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Please enter the alphabet: " << endl;
            cin >> choice_alphabet;
            //to store these states and to be able to differentiate between those states as well and to go back to the 'menu screen'
            diffcultySelector();
            break;
            
        case 3:
            clearScreen();
            cout << "Let's choose the score" << endl;
            //to store the scores and be used to display them when selected the '3. Score'.
            break;
            
        case 4:
            clearScreen();
            cout << "Let's close the game" << endl;
            break;
            
        default:
            clearScreen();
            InputChecker();
        }
    }
   
    void diffcultySelector(){
        choice_alphabet = tolower(choice_alphabet);
        switch (choice_alphabet){
            case 'a':
              cout << "a.Easy" << endl;
              InputChecker();
               
            case 'b':
              cout << "b.Medium" << endl;
              InputChecker();
               
            case 'c':
              cout << "c.Hard" << endl;
              InputChecker();
               
            case 'd':
              cout << "d.Sinister" << endl;
              InputChecker();
               
            default :
                InputChecker();
        }
    }
};

int main(){
    int number;
    char choice_alphabet;
    
    MainChecker M(number, choice_alphabet);
    //M.mainMenu();
    M.InputChecker();
    return 0;
}