/*
    There are 4 rules to print any pattern in C++:
        1. for outer loop, count the number of rows/lines.
        2. for inner loop, focus on the colums, and connect them somehow to the rows.
        3. whatever you want to print, print them inside the inner for loop.
        4. observe symetry {optional one}.


    Approach: 
        There are 4 general rules for solving a pattern-based question : 
            A. We always use nested loops for printing the patterns. For the outer loop, we count the number of lines/rows and loop for them.
            B. Next, for the inner loop, we focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the required number of columns to be printed.
            C. We print the ‘*’ inside the inner loop.
            D. Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns or not.
*/


#include <bits/stdc++.h>
using namespace std;

// Pattern-1: Rectangular Star Pattern
void pattern01(int N){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


// Pattern-2: Right-Angled Triangle Pattern
void pattern02(int N){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


// Pattern - 3: Right-Angled Number Pyramid
void pattern03(int N){
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}


// Pattern - 4: Right-Angled Number Pyramid - II
void pattern04(int N){
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}


// Pattern-5: Inverted Right Pyramid
void pattern05(int N){
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


// Pattern - 6: Inverted Numbered Right Pyramid
void pattern06(int N){
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}


// Pattern - 7: Star Pyramid
void pattern07(int N){
    for (int i = 0; i < N; i++) {
        // space
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // space
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

// Pattern - 8: Inverted Star Pyramid
void pattern08(int N) {
    for (int i = 0; i < N; i++) {
        // space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2*N - (2 * i + 1); j++) {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}


// Pattern - 9: Diamond Star Pattern
void pattern09(int N) {
    pattern07(N); // upper part
    pattern08(N); // lower part
}


// Pattern - 10: Half Diamond Star Pattern
void pattern10(int N) {
    for(int i=1;i<=2*N-1;i++) {
        int stars = i;
        if(i>N) stars = 2*N-i;
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        cout << endl;
    }
}


// Pattern - 11: Binary Number Triangle Pattern
void pattern11(int N) {
    int start = 1;
    for(int i=0;i<N;i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;

        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}


// Pattern - 12: Number Crown Pattern
void pattern12(int N) {
    int spaces = 2 * (N - 1);

    for (int i = 1; i <= N; i++) {
        // numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;

        spaces -= 2;
    }
}


// Pattern - 13: Increasing Number Triangle Pattern
void pattern13(int N) {
    int num = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}


// Pattern-14: Increasing Letter Triangle Pattern
void pattern14(int N) {
    for(int i=0;i<N;i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


// Pattern-15: Reverse Letter Triangle Pattern
void pattern15(int N) {
    for (int i = 0; i < N; i++) {
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }   
}


// Pattern - 16: Alpha-Ramp Pattern
void pattern16(int N) {
    for (int i = 0; i < N; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


// Pattern - 17: Alpha-Hill Pattern
void pattern17(int N) {
    for (int i = 0; i < N; i++) {
        // spaces
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }

        // characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // spaces
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }

        cout << endl;
    }
}


// Pattern-18: Alpha-Triangle Pattern
void pattern18(int N) {
    for (int i = 0; i < N; i++) {
        for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


// Pattern-19: Symmetric-Void Pattern
void pattern19(int N) {
    // for upper half of the pattern
    int inis = 0;
    for (int i = 0; i < N; i++) {
        // stars
        for (int j = 1; j <= N - i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < inis; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= N - i; j++) {
            cout << "*";
        }

        inis += 2;
        cout << endl;
    }

    // for lower half of the pattern
    inis = 2 * N - 2;
    for (int i = 1; i <= N; i++) {
        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < inis; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        inis -= 2;
        cout << endl;
    }
}


// Pattern - 20: Symmetric-Butterfly Pattern
void pattern20(int N) {
    int spaces = 2 * N - 2;
    for (int i = 1; i <= 2 * N - 1; i++) {
        int stars = i;

        if (i > N) stars = 2 * N - i;
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        if (i < N) spaces -= 2;
        else spaces += 2;
    }
}


// Pattern - 21: Hollow Rectangle Pattern
void pattern21(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || j == 0 || i == N - 1 || j == N - 1)
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}


// Pattern - 22: The Number Pattern
void pattern22(int N) {
    for (int i = 0; i < 2 * N - 1; i++) {
        for (int j = 0; j < 2 * N - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * N - 2) - j;
            int bottom = (2 * N - 2) - i;

            cout << N - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}


int main() {   
    int N = 5;
    // cin >> N;

    cout << "Pattern-1: Rectangular Star Pattern: " << endl;
    pattern01(N);
    cout << endl;

    cout << "Pattern-2: Right-Angled Triangle Pattern: " << endl;
    pattern02(N);
    cout << endl;

    cout << "Pattern-3: Right-Angled Number Pyramid: " << endl;
    pattern03(N);
    cout << endl;

    cout << "Pattern-4: Right-Angled Number Pyramid - II: " << endl;
    pattern04(N);
    cout << endl;

    cout << "Pattern-5: Inverted Right Pyramid: " << endl;
    pattern05(N);
    cout << endl;

    cout << "Pattern-6: Inverted Numbered Right Pyramid: " << endl;
    pattern06(N);
    cout << endl;

    cout << "Pattern-7: Star Pyramid: " << endl;
    pattern07(N);
    cout << endl;

    cout << "Pattern-8: Inverted Star Pyramid: " << endl;
    pattern08(N);
    cout << endl;

    cout << "Pattern-9: Diamond Star Pattern: " << endl;
    pattern09(N);
    cout << endl;

    cout << "Pattern-10: Half Diamond Star Pattern: " << endl;
    pattern10(N);
    cout << endl;

    cout << "Pattern-11: Binary Number Triangle Pattern: " << endl;
    pattern11(N);
    cout << endl;

    cout << "Pattern-12: Number Crown Pattern: " << endl;
    pattern12(N);
    cout << endl;

    cout << "Pattern-13: Increasing Number Triangle Pattern: " << endl;
    pattern13(N);
    cout << endl;

    cout << "Pattern-14: Increasing Letter Triangle Pattern: " << endl;
    pattern14(N);
    cout << endl;

    cout << "Pattern-15: Reverse Letter Triangle Pattern: " << endl;
    pattern15(N);
    cout << endl;

    cout << "Pattern-16: Alpha-Ramp Pattern: " << endl;
    pattern16(N);
    cout << endl;

    cout << "Pattern-17: Alpha-Hill Pattern: " << endl;
    pattern17(N);
    cout << endl;

    cout << "Pattern-18: Alpha-Triangle Pattern: " << endl;
    pattern18(N);
    cout << endl;

    cout << "Pattern-19: Symmetric-Void Pattern: " << endl;
    pattern19(N);
    cout << endl;

    cout << "Pattern-20: Symmetric-Butterfly Pattern: " << endl;
    pattern20(N);
    cout << endl;

    cout << "Pattern-21: Hollow Rectangle Pattern: " << endl;
    pattern21(N);
    cout << endl;

    cout << "Pattern-22: The Number Pattern: " << endl;
    pattern22(N);
    cout << endl;

    return 0;
}