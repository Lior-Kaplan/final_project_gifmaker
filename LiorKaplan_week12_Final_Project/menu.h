#ifndef menu
#define menu

/*
Prints to the user the first menu that asks the user if create new project or 
load one
input: none
output: none
*/
void load_project_or_new();
/*
This function will check if the user enterd valid input for thr first menue
input: the user choice
output: the new choice(if it is not valid)
*/
int check_first_input(int choice);
/*
This function prints the menu to the user
input: none
output: the operation num
*/
void print_menu();
/*
This function will ask the user for the opertation num
input: none
output: the user choice
*/
int user_choice();
/*
This function will check if the user enterd a valid input
input: the user choice
output: the new choice(if it is not valid)
*/
int check_input(int choice);

#endif