#pragma once
namespace Polymorphism 
{
	//Base class
	class Mammal 
	{
		public:
			Mammal(int a, int b);
			//Virtual Function (base class has an implementation)
			virtual void listCharicteristics();
			//Pure Virutal Function (base class does not have a implemenation)
			virtual void sound() = 0;

		protected:
			int width{};
			int height{};
	};

	//Derived Classes
	class Bear : public Mammal 
	{
		public:
			Bear(int a, int b);
			void listCharicteristics();
			void sound();
	};

	class Tiger : public Mammal 
	{
		public:
			Tiger(int a, int b);
			void listCharicteristics();
			void sound();
	};

	class Whale : public Mammal 
	{
		public:
			Whale(int a, int b);
			void listCharicteristics();
			void sound();
	};

	void RunPolymorphism();
}
