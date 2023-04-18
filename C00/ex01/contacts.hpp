#ifndef CONTACTS_HPP

# define CONTACTS_HPP
	
#include <string>

class Contacts
{
	public:
	// Constructor and destructor
		Contacts();
		~Contacts();

	// Getters
		std::string getFirstName () const;
		std::string getLastName () const;
		std::string getNickName () const;
		std::string getPhoneNumber() const;
		std::string getSecret () const;

	// Setters
		void setFirstName (std::string name);
		void setLastName (std::string name);
		void setNickName (std::string name);
		void setPhoneNumber(std::string number);
		void setSecret (std::string secret);

	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string number;
		std::string secret;
};

#endif
