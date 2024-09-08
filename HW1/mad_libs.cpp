#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
// TODO: Enter your First & Last Name
// TODO: Enter your Net ID

string program_name;
// No Changes needed, this method queries a user for input
/**
 * GetMadLibFile
 * @param input_file, This is a filestream that will open the user's file and be
 * available to main to access the file outside of the method
 * @returns A boolean, True if the file opened without error. False if the file
 * failed to open or the "exit" command was used
 */
bool GetMadLibFile(ifstream& input_file) {
  if (input_file.is_open()) input_file.close();
  cout << "Please enter a valid Mad Libs File or 'exit' to close: ";
  string filename;
  getline(cin, filename);
  string temp = filename;
  transform(filename.begin(), filename.end(), filename.begin(),
            [](unsigned char c) { return tolower(c); });
  if (filename == "exit") {
    cout << "Exiting program, Thanks for playing!\n";
    return false;
  }
  input_file.open(temp, ifstream::in);
  if (!input_file) {
    cerr << program_name
         << ", Function: GetMadLibFile. Error File cannot be found/opened: "
         << filename << ".\n";
    return false;
  }
  return true;
}

// TODO: Write Doxygen Commend Block
bool IsFillInBlank(const string& word) {
  // TODO: Check if string begins and ends with '_'. Remember that you can
  // access Strings as ArrayLike for characters

         return false;
}

// TODO: Write Doxygen Commend Block
string GetUserResponse(string& fill_in) {
  string out;
  // TODO: Use a Loop to search each space of the string.
  // If the character is an "_" then replace it with a " "
  // Remember that strings are Mutable and ArrayLike.
  //
  // Second tip: Remember that strings use "size_t" for their indexing and
  // length, so your loop variable will need to be of type size_t
  //
  // TODO: Query the user for the Fill in the blank word.
  //        Remember to remove any preceding or trailing " " characters
  // The format of the query is:
  //        "Please enter a "Fill in the blank word": "
  return " ";
}

// NOTE: No Doxygen comment needed for main!
int main(int, char* argv[]) {
  program_name = argv[0];
  // Create the File reading ifstream.
  ifstream input_file;
  while (GetMadLibFile(input_file)) {
    // NOTE: Your code goes here
    // NOTE: Get a line, check to see if any of the words in the line are a fill
    // in word. Remember that getline returns false if the filstream its reading
    // from is in a working state Look into stringstreams as a method to read
    // one word at a time from a string, strinstreams by default white space
    // deliminate each word
    string line;    // A string to save each line of the input file to
    string output;  // A string to save your in progress mad lib file

    // Steps:
    //  1) Get the sentence from input_file
    //  2) For each word in the sentence (Use a stringstream) check
    //		a) Is it a fill in the blank word?
    //		b) Yes -> Request user response on that word
    //		c) No -> Add it to the sentence and move on
    //		d) In both cases check if your sentence is over (if using a
    //         stringstream check if its NOT EOF), add a space between words
    //  Once you finished reading all the words from the sentence print your
    //  madlib like below
    // TODO: Output the finished madlib like so "Your MadLib!\n\n" followed by
    // their madlib and a new line at the end
  }
}