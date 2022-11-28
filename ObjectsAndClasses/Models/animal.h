

class Animal {
	private:
		std::string a_type = "";
		std::string a_name = "";
		std::string a_sound = "";
	public:
		Animal();
		Animal(const std::string& type, const std::string& name, const std::string& sound);
		Animal(const Animal& a);
		~Animal();

		void setType(const std::string& type);
		void setName(const std::string& name);
		void setSound(const std::string& sound);

		std::string getType() const;
		std::string getName() const;
		std::string getSound() const;

		void makeSound();
		void walkForward();
		void declareSelf();

		void checkAnimalType(const Animal& animal);

		Animal& operator = (const Animal& other);
		Animal& operator + (const Animal& other);
};