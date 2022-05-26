#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

	private:
		int			id;
		bool		is_empty;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;

	public:
		static std::string const info[5];

		// Constructors/ Destructor //

		Contact();
		~Contact();

		// Getters //

		std::string	getName() const		{return this->first_name;}
		std::string	getLastName() const	{return this->last_name;}
		std::string	getNick() const		{return this->nickname;}
		std::string	getPhone() const	{return this->phone;}
		std::string	getSecret() const	{return this->secret;}

		// Setters //

		void	setName(std::string str)		{this->first_name = str;}
		void	setLastName(std::string str)	{this->last_name = str;}
		void	setNick(std::string str)		{this->nickname = str;}
		void	setPhone(std::string str)		{this->phone = str;}
		void	setSecret(std::string str)		{this->secret = str;}
		void    setIndex(int index)             {this->id = index;}

		// Methods //

		bool	empty();
		void	inputSet();
		void	print();

		// overloading operators //

		Contact& operator=(Contact &ct);
};

#endif