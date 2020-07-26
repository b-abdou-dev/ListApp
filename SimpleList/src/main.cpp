#include <iostream>
using namespace std;

int main (int arg_count, char* args[]){
     if (arg_count > 1){
        string name = args[1];
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

