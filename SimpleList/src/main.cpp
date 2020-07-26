#include <iostream>
#include <vector>
using namespace std;

// function prototype print_menu

void print_menu(string name);
void print_list();
void add_item();
void delete_item();

vector<string> list;
string name;

int main (int arg_count, char* args[]){
     if (arg_count > 1){
        name = args[1];
        print_menu(name);
        }
     else {
         cout << "Username not inserted.. exiting the program" << endl;
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
    if(choice == 2){
        add_item();
    }
    if(choice == 1){
        print_list();
    }
    if(choice == 3){
        if (list.empty()){
        cout << "\n\ncannot delete an item, the list is empty!\n\n";
        print_menu(name);
        }
        else
        {
            delete_item();
        }
        
    }
    else {
        cout << "Please insert a valid choice\n";

    }
}

void add_item(){
    cout << "\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);
    cout << "\n\nSuccessfully added an item to the list\n\n";
    cin.clear();
    
    print_menu(name);
}
void print_list(){
    if (list.size() == 0){
        cout << "\n\nList is empty!\n\n"; 
    }
    else{
        cout << "\n\n";
        for(unsigned int i=0; i < list.size(); i++){
        cout << "item " << i << " is: " << list.at(i)<< endl;
        cout << "\n\n";
        } 
    }
    print_menu(name);
}

void delete_item() {

    cout << "*** Delete Item ***\n";
    cout <<"Select Item by index to be deleted:\n";
    for(unsigned int i=0; i < list.size(); i++){
    cout << "item " << i << " is: " << list.at(i)<< "\n\n";
    } 
    int index_delete;
    cin >> index_delete;
    string del_item = list.at(index_delete);
    list.erase(list.begin() + index_delete);
    cout << del_item << " was deleted\n\n";

    print_menu(name);
    
}