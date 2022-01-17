//Login system for linux - Zorpze

#include <iostream>
#include <unistd.h>
#include <cstdlib>

unsigned int sleep(unsigned int seconds);


std::string Username;
std::string Password;



int option;

int ifloggedin()
{
	std::system("clear");
	std::cout << "code for our program";
	return 0;
}

void Login()
{
	std::cout << "This is a login system made in C++ for linux - by Zorpze#1336" << std::endl;
	std::cout << "Enter Username: ";
	std::cin >> Username;

	std::cout << "Enter Password: ";
	std::cin >> Password;

	if (Username == "Zorpze" && Password == "Zorpze")
	{
		std::system("clear");
		std::cout << "Loggined in!" << std::endl;
	}
	else 
	{
		std::system("clear");
		std::cout << "Login Failed..";
	}
}

void Register()
{
	std::cout << "Enter a username: ";
	std::cin >> Username;
	Username = Username;
	std::cout << "Enter a password: ";
	std::cin >> Password;
	Password = Password;
}

int main()
{
	std::cout << "Select an Option: ";
	std::cin >> option;
	if (option == 1)
	{
		Login();
	}
	if (option == 2)
	{
		Register();
	}
	else 
	{
		exit(0);
	}
}
