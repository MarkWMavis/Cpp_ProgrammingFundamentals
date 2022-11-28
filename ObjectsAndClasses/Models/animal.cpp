#include "animal.h"
#include <cstdio>
#include <string>

const std::string unkString = "unk";
const std::string cloneprefix = "clone-";

Animal::Animal()
	: a_type(unkString), a_name(unkString), a_sound(unkString) {
	printf("Using the Default constructor\n");
};
Animal::Animal(const std::string& type, const std::string& name, const std::string& sound)
	: a_type(type), a_name(name), a_sound(sound) {
	printf("Using the Constructor to create a new Object\n");
};
Animal::Animal(const Animal& a)
	: a_type(a.a_type), a_name(cloneprefix + a.a_name), a_sound(a.a_sound) {
	printf("Using the Copy constructor\n");
};
Animal::~Animal() {
	printf("Destructor called on a %s\n", a_name.c_str());
	a_name = "";
	a_type = "";
	a_sound = "";
};

void Animal::setType(const std::string& type) { a_type = type; }
void Animal::setName(const std::string& name) { a_name = name; }
void Animal::setSound(const std::string& sound) { a_sound = sound; }

std::string Animal::getType() const { return a_type; };
std::string Animal::getName() const { return a_name; };
std::string Animal::getSound() const { return a_sound; };

void Animal::makeSound() { printf("I am a %s, hear me %s\n", a_name.c_str(), a_sound.c_str()); }
void Animal::walkForward() { printf("I am a %s and I am moving forward\n", a_name.c_str()); }
void Animal::declareSelf() { printf("I am a %s, which is of the type %s, and the sound I make is %s\n", a_name.c_str(), a_type.c_str(), a_sound.c_str()); }

void Animal::checkAnimalType(const Animal& animal) { printf("I am a %s talking to a %s\n", a_name.c_str(), animal.a_name.c_str()); };

Animal& Animal::operator= (const Animal& other) {
	if (this != &other) {
		a_type = other.a_type;
		a_name = cloneprefix + other.a_name;
		a_sound = other.a_sound;
	}
	return *this;
}
Animal& Animal::operator+ (const Animal& other) {
	if (this != &other) {
		a_name = a_name + " " + other.a_name;
		a_type = a_type + " " + other.a_type;
		a_sound = a_sound + " " + other.a_sound;
	}
	return *this;
}