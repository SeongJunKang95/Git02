#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal() {}
	virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal
{
public:
	Dog(string word) : sound(word) {}
	void makeSound()
	{
		cout << " Dog: " << sound << endl;
	}
private:
	string sound;
};

class Cat : public Animal
{
public:
	Cat(string word) : sound(word) {}
	void makeSound()
	{
		cout << " Cat: " << sound << endl;
	}
private:
	string sound;
};

class Cow : public Animal
{
public:
	Cow(string word) : sound(word) {}
	void makeSound()
	{
		cout << " Cow: " << sound << endl;
	}
private:
	string sound;
};

int main()
{
	Animal* Pet[3];

	Pet[0] = new Dog("멍! 멍!");
	Pet[1] = new Cat("야옹! 야옹!");
	Pet[2] = new Cow("음매! 음매!");

	for (int i = 0; i < 3; ++i)
	{
		Pet[i]->makeSound();
	}

	for (int i = 0; i < 3; ++i)
	{
		delete Pet[i];
	}

	return 0;
}
//d