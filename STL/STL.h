#pragma once
#include <iostream>
#include <numeric>	// Accumulate Function


//Sequence Container Libraries
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

//Associative Containers
#include <set>	//includes multiset
#include <unordered_set>
#include <map>	//include multimap
#include <unordered_map>

//Container Adapters (don't support iterators)
// Can not be used with STL algorithms
#include <stack>
#include <queue>	//includes priority queue

bool comparator(int first, int second);
void exercise01();