
#include "include/list.h"

int main (int arg_count, char* args[]){
     if (arg_count > 1){
        List first_list;
        first_list.name = args[1];
        first_list.print_menu();
        }
     else {
         cout << "Username not inserted.. exiting the program" << endl;
         } 
     return 0;    
} 
