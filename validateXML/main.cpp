/**
 * main.cpp;
 * A main program that check the XML Strings
 *
 *@author Sishi Cheng
 */
#include <iostream>
#include <vector>
#include <stack>
#include <cctype>
#include <iomanip>

using namespace std;

bool Checking(stack<char, vector<char>>&, string);

/**
 *Function main begins with program execution
 */
int main() {
    cout << "Please enter your XML strings:";
    string input;
    cin >> input;
    stack <char, vector<char>> cStack;
    cout << "Checking " << input << endl;
    if(Checking(cStack, input)) {
        cout << "VALID\n";
    };

    string input2;
    stack <char, vector<char>> cStack2;
    cout << "Please enter your XML strings:";
    cin >> input2;
    cout << "Checking " << input2 << endl;
    if(Checking(cStack2, input2)) {
        cout << "VALID\n";
    };

    cout << "\nPart 2" << endl;
    cout << "Checking " << input << endl;
    int count=0;
    if(Checking(cStack, input)) {
        cout << "VALID\n\n";
        for(char i='a'; i<='z'; i++) {
            for (int j=1; j<input.length(); j++) {
                if(input[j]==i) count++;
            }
            if(count!=0) {
                cout << i << setw(4) << right << count/2 << endl;
                count=0;
            }
        }
    };

    return 0;
}

/**
 *A function to check XML strings
 *
 *@param s The stack which store the identity of the start tag
 *@param in The user's input
 */
bool Checking(stack<char, vector<char>>& s, string in) {
    for(int i=1; i<in.length(); i++) {
        if(islower(in[i])) {
            s.push(in[i]);
        }
        if(in[i]=='/'){
            i++;
            if(s.empty()) {
                cout << "NOT VALID \n";
                return false;
            }
            else if(in[i]!=s.top()) {
                cout << "NOT VALID \n";
                return false;
            }
            else {
                s.pop();
            }
        }
    }
    if (s.empty()) return true;
    else {
        cout << "NOT VALID \n";
        return false;
    }
}