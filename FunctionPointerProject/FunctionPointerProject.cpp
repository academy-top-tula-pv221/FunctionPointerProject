#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct User
{
	char name[50];
	int age;
	double salary;
};

bool UsersAgeComparer(User u1, User u2)
{
	return u1.age < u2.age;
}

bool UsersAlphabetComparer(User u1, User u2)
{
	return strcmp(u1.name, u2.name) < 0;
}

bool UsersNameSizeComparer(User u1, User u2)
{
	return strlen(u1.name) < strlen(u2.name);
}

bool UsersSalaryComparer(User u1, User u2)
{
	return u1.salary < u2.salary;
}

bool UsersNameAgeComparer(User u1, User u2)
{
	int result = strcmp(u1.name, u2.name);
	if (!result)
		return u1.age < u2.age;
	else
		return result < 0;
}

void UsersSort(User* users, int size, bool(*predicat)(User, User))
{
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i; j < size; j++)
			if (predicat(users[j], users[min]))
				min = j;
		User temp = users[i];
		users[i] = users[min];
		users[min] = temp;
	}
}

void UsersPrint(User* users, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << users[i].name << " " << users[i].age << " " << users[i].salary << "\n";
	std::cout << "\n";
}

int main()
{
	User* users = new User[5];

	strcpy(users[0].name, "Tim");
	users[0].age = 28;
	users[0].salary = 56000;

	strcpy(users[1].name, "Tim");
	users[1].age = 44;
	users[1].salary = 31000;

	strcpy(users[2].name, "Mike");
	users[2].age = 31;
	users[2].salary = 26000;

	strcpy(users[3].name, "Tim");
	users[3].age = 47;
	users[3].salary = 59000;

	strcpy(users[4].name, "Mike");
	users[4].age = 39;
	users[4].salary = 30000;

	UsersPrint(users, 5);
	UsersSort(users, 5, UsersNameAgeComparer);
	UsersPrint(users, 5);

	return 0;
}
