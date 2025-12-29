//Menu screen designs.
#include <iostream>
#include <cstdlib> //for clearing screen
#include <cctype> //for forcing lowercase characters

using namespace std;

class MainChecker{
    public:
    int number; //useful for the main menu selections.
    char choice_alphabet; //useful for the difficulty selection.
    
    //constructor for the instantiation of the object.
    MainChecker(int num, char alphabet): number(num), choice_alphabet(alphabet){}
    
    //1. to clean the screen and to show the new necessary functions/actions.
    void clearScreen() {
        #ifdef _WIN32
        system("cls");  
        #else
        system("clear");
        #endif
    }
    
    //2. to force the characters to lower case.
    void forceLowercase(){
        choice_alphabet = tolower(choice_alphabet);
    }
    
    //3. to take input for characters.
    // void characterInput(){
    //     cout << "Enter the character: " << endl;
    //     cin >> choice_alphabet;
    //     forceLowercase();
    // }
    
    //4. to select for the options in the difficulty.
    void diffcultySelector(){
        switch (choice_alphabet){
            case 'a':
               cout << "a.Easy" << endl;
               break;
               
            case 'b':
               cout << "b.Medium" << endl;
               break;
               
            case 'c':
               cout << "c.Hard" << endl;
               break;
               
            case 'd':
               cout << "d.Sinister" << endl;
               break;
               
            default :
                cout << "invalid, please select the correct one" << endl;
        }
    }
    
    //5. to select the options in the main menu.
    void InputChecker(){
    if(number>=1 and number<=4){
        switch (number){
        case 1:
            clearScreen();
            cout << "START!!!" << endl;
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
            //characterInput();
            diffcultySelector();
            break;
            
        case 3:
            clearScreen();
            cout << "Let's choose the score" << endl;
            break;
            
        case 4:
            clearScreen();
            cout << "Let's close the game" << endl;
            break;
        
        default:
            clearScreen();
            cout << "Invalid selection" << endl;
            break;
        }
    }
    else{
        cout << "no" << endl;
    }
        
    }
};

int main(){
    cout << "ASTRO JUMPER" << endl;
    cout << "----------------------" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Difficulty" << endl;
    cout << "3. Score" << endl;
    cout << "4. Close the game" << endl;
    cout << "Please select these options from 1 - 4" << endl;
    
    int number;
    cout << "Please enter the number: " << endl;
    cin >> number;
    
    char choice_alphabet;
    
    MainChecker M(number, choice_alphabet);
    M.InputChecker();
    return 0;}