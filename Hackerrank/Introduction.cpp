#include "Introduction.h"
#include <cstdio>
#include <stdio.h>

void VariableSizeArrays() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> multivect;
    for (int i = 0; i < n; i++) {
        int idxVal;
        cin >> idxVal;
        multivect.push_back(vector<int>());
        for (int ix = 0; ix < idxVal; ix++) {
            int curVal;
            cin >> curVal;
            multivect[i].push_back(curVal);
            //printf("Value Added: %d", curVal);
        }
    }

    for (int i = 0; i < q; i++) {
        int baseidx;
        int idx;
        cin >> baseidx >> idx;
        cout << multivect[baseidx][idx] << endl;
    }
}

void BasicDataTypes() {
    int a;
    long b;
    char c;
    float d;
    double e;


    int result;
    result = scanf_s("%i %ld %c %3e3f %lf", &a, &b, &c, &d, &e);
    printf(" %i\n %ld\n %c\n %3e3f\n %lf", a, b, c, d, e);

}
