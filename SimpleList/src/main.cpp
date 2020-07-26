#include <iostream>
using namespace std;

// function prototype print_menu

void print_menu(string name);

int main (int arg_count, char* args[]){
     if (arg_count > 1){
        string name = args[1];
        print_menu(name);


        if (args[2]){
            string second_name(args[2]);
            cout << "the 2 arguments inserted are "<< args[1] << 
            " and "<< args[2]<<endl;
            }
        }
     else {
         cout << "Please insert at least one argument.." <<
        "exiting" << endl;
         }
 
     return 0;    
} 

void print_menu(string name){
    int choice;

    cout << "*************************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list. \n";
    cout << " 3 - Delet from list.\n";
    cout << " 4 - Quit.\n";
    cout << " 5 - Enter your choice and press return: ";

    cin >> choice;

    if(choice == 4) {
        exit(0);
    }
    else {
        cout << "Sorry choice not implemented yet\n";
    }
}

