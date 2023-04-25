#include "contacts.hpp"
#include <iostream>
#include <iomanip>

class Phonebook
{ 
    public:
    Phonebook();
    ~Phonebook();
   // Setters
    int     add_main(int index);
    void    add_contact(int index);
    void    display_start_msg(void);
    void    display_instructions(void);
    void    search(int index);
    void    print_line(void);
    void    display_contacts();
    void    display_contactsinfo(int i);

    // Getters
    void    print_tableline(int index);

    // Constructor and Destructor 
    private:
        Contacts contacts[8];
};