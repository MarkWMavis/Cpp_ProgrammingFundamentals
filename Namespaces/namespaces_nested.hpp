#pragma once

namespace function_pointers {
	void Print(int count, char ch);
	void Run();
}
namespace namespaces {
	namespace mathclass01 {
		float calculate(const float x, const float y);
	}
	namespace mathclass02 {
		float calculate(const float x, const float y);
	}

	namespace sorting {
		void Quicksort();
		void Insertionsort();
		void Mergesort();
		namespace comparison {
			void less();
			bool Greater(int x, int y);
		}
	}
}





