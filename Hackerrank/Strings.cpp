#include "Strings.hpp"


#include <sstream>	// String Stream Library
using std::stringstream;
#include <cmath>
#include <cstdio>
#include <vector>
using std::vector;

#include <iostream>
#include <algorithm>
#include <string>	// strtok function, 

#include <map>
using std::map;

#include <fstream>
using std::ifstream;
using std::ios;

using namespace std;

void AttributeParser() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ifstream inputFile;
    inputFile.open("AttributeParser.txt", ios::in);
   
    int n, q, i;
    inputFile >> n >> q;
    inputFile.ignore();
    string discard;
    string line, tagNum, tagKey, tagVal ;
    map<string, string> m;

    vector<map<string, string>> multivector;
    
    vector<string> quer;

    for (i = 0; i < n; i++) {
        
        if (i < n / 2) {
            string temp;
            string tagTemp;

            getline(inputFile, line);
            copy(line.begin() + 1, line.end() - 1, back_inserter(temp));

            stringstream ss(temp);
            while (ss >> tagNum) {
                multivector.push_back(map<string, string>());
                ss >> tagKey >> discard >> tagVal;
                copy(tagVal.begin() + 1, tagVal.end() - 1, back_inserter(tagTemp));
                tagVal = tagTemp;
                multivector[i].insert(make_pair(tagKey, tagVal));
            }
        }
        else {
            inputFile >> discard;
        }  
    }


    
    
    /*
    map<string, string> m;
    vector<string> tag;
    for (i = 0; i < n; i++)
    {
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
        if (temp.substr(0, 2) == "</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss << temp;
            string t1, p1, v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tag.size() > 0)
            {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else
            {
                temp1 = t1;
            }
            tag.push_back(temp1);
            m[*tag.rbegin() + "~" + p1] = v1;
            while (ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }
    for (i = 0; i < q; i++)
    {
        if (m.find(quer[i]) == m.end())
        {
            cout << "Not Found!\n";
        }
        else
        {
            cout << m[quer[i]] << endl;
        }
    }
    */
}

void StringStream(string str) {
    stringstream ss(str);
    vector<int> integers;
    
    int temp;
    char delimiters;

    while (ss >> temp) {
        integers.push_back(temp);
        ss >> delimiters;
    }
    
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
}

void Strings(string str) {
    stringstream ss(str);
    string a;
    string b;
    ss >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;

}
