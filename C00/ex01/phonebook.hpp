class Contacts
{
    private:

    public:

    int number;
};

class Phonebook
{   
    public:
        Contacts phonebook[8];

// Getter and Destroyer. 
    private:
        Phonebook();
        ~Phonebook();
};