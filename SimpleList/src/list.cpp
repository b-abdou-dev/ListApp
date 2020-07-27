#include "include/list.h"

void List::print_menu(){
    int choice;

    cout << "*************************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list. \n";
    cout << " 3 - Delet from list.\n";
    cout << " 4 - Quit.\n";
    cout << " 5 - Enter your choice and press return: ";

    cin >> choice;
    if(choice == 3){
        if (list.empty()){
        cout << "\n\ncannot delete an item, the list is empty!\n\n";
        print_menu();
        }
        else
        {
            delete_item();
        }
        
    }
    if(choice == 4) {
        cout << "exiting the application...\n";
        exit(0);
    }
    if(choice == 2){
        add_item();
    }
    if(choice == 1){
        print_list();
    }

    else {
        cout << "Please insert a valid choice\n";

    }
}

void List::add_item(){
    cout << "\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);
    cout << "\n\nSuccessfully added an item to the list\n\n";
    cin.clear();
    
    print_menu();
}
void List::print_list(){
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
    print_menu();
}

void List::delete_item() {

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

    cin.clear();   
}