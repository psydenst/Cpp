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
    void    search(int contacts);
    // Getters
    void    print_tableline(int index);
    void    display_start_msg(void);
    void    display_instructions(void);
    void    display_contacts();
    void    display_contactsinfo(int i);

    // Others
    void            print_line(void);
    std::string     truncate(std::string otter);

    // Constructor and Destructor 
    private:
        Contacts contacts[8];
};