#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <fstream>

using namespace std;

string choice = "";
string fileName = "";
string fileInformation = "";
string newFileInformation = "";
string passwordProtect = "";
string fullFileName = "";
string password = "";
string newPassword = "";
string passwordAttempt = "";
bool correctPassword = false;
int attempts;
bool correctFileName = false;

int main() {
	cout << "Welcome to the DataCrypt program!" << endl << endl;
	sleep(1);
	cout << "DataCrypt program created by ModernFilms" << endl << endl;
	sleep(2);
	cout << "Would you like to create or decrypt a file > ";
	cin >> choice;
	transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
	if (choice == "decrypt") {
		cout << endl << "Please enter the name of the file (do NOT include .txt)> ";
		cin >> fileName;
		fullFileName = fileName + ".txt";
		ifstream searchFile;
		searchFile.open(fullFileName.c_str());
		if (searchFile.is_open()) {
			getline(searchFile, fileInformation);
			searchFile.close();
			cout << endl << "Successfully found " << fullFileName << ".";
			ifstream passwordFile;
			passwordFile.open((fileName + "Password.pw").c_str());
			if (passwordFile.is_open()) {
				getline(passwordFile, password);
				searchFile.close();
				for (string::size_type i = 0; i < password.size(); ++i) {
					if (password[i] == ';') {
						newPassword += "a";
					}
					else if (password[i] == 'c') {
						newPassword += " ";
					}
					else if (password[i] == '-') {
						newPassword += "b";
					}
					else if (password[i] == ')') {
						newPassword += "c";
					}
					else if (password[i] == '=') {
						newPassword += "d";
					}
					else if (password[i] == '~') {
						newPassword += "e";
					}
					else if (password[i] == 'x') {
						newPassword += "f";
					}
					else if (password[i] == ':') {
						newPassword += "g";
					}
					else if (password[i] == ',') {
						newPassword += "h";
					}
					else if (password[i] == '/') {
						newPassword += "i";
					}
					else if (password[i] == '(') {
						newPassword += "j";
					}
					else if (password[i] == '3') {
						newPassword += "k";
					}
					else if (password[i] == '#') {
						newPassword += "l";
					}
					else if (password[i] == '?') {
						newPassword += "m";
					}
					else if (password[i] == '<') {
						newPassword += "n";
					}
					else if (password[i] == 'k') {
						newPassword += "o";
					}
					else if (password[i] == '7') {
						newPassword += "p";
					}
					else if (password[i] == '`') {
						newPassword += "q";
					}
					else if (password[i] == '!') {
						newPassword += "r";
					}
					else if (password[i] == 'p') {
						newPassword += "s";
					}
					else if (password[i] == 'w') {
						newPassword += "t";
					}
					else if (password[i] == 'l') {
						newPassword += "u";
					}
					else if (password[i] == '\"') {
						newPassword += "v";
					}
					else if (password[i] == '%') {
						newPassword += "w";
					}
					else if (password[i] == '^') {
						newPassword += "x";
					}
					else if (password[i] == '0') {
						newPassword += "y";
					}
					else if (password[i] == '$') {
						newPassword += "z";
					}
					else if (password[i] == '+') {
						newPassword += ".";
					}
					else if (password[i] == 'b') {
						newPassword += "$";
					}
					else if (password[i] == ']') {
						newPassword += "!";
					}
					else if (password[i] == 'h') {
						newPassword += "?";
					}
					else if (password[i] == '*') {
						newPassword += "/";
					}
					else if (password[i] == '4') {
						newPassword += "(";
					}
					else if (password[i] == '2') {
						newPassword += ")";
					}
					else if (password[i] == '6') {
						newPassword += "-";
					}
					else if (password[i] == '@') {
						newPassword += "_";
					}
					else if (password[i] == '8') {
						newPassword += "\"";
					}
					else if (password[i] == '9') {
						newPassword += "\'";
					}
					else if (password[i] == '&') {
						newPassword += "1";
					}
					else if (password[i] == 'i') {
						newPassword += "2";
					}
					else if (password[i] == '}') {
						newPassword += "3";
					}
					else if (password[i] == '\'') {
						newPassword += "4";
					}
					else if (password[i] == '>') {
						newPassword += "5";
					}
					else if (password[i] == '{') {
						newPassword += "6";
					}
					else if (password[i] == '.') {
						newPassword += "7";
					}
					else if (password[i] == 'q') {
						newPassword += "8";
					}
					else if (password[i] == 'y') {
						newPassword += "9";
					}
					else if (password[i] == 'a') {
						newPassword += "0";
					}
					else if (password[i] == 'f') {
						newPassword += "#";
					}
					else if (password[i] == 'b') {
						newPassword += "$";
					}
					else if (password[i] == 'd') {
						newPassword += "%";
					}
					else if (password[i] == 'v') {
						newPassword += "&";
					}
					else if (password[i] == 's') {
						newPassword += "@";
					}
					else if (password[i] == 'j') {
						newPassword += ":";
					}
					else if (password[i] == 'u') {
						newPassword += ";";
					}
					else if (password[i] == 'X') {
						newPassword += "A";
					}
					else if (password[i] == 'Z') {
					    newPassword += "Y";
					}
					else if (password[i] == 'P') {
						newPassword += "B";
					}
					else if (password[i] == 'E') {
						newPassword += "C";
					}
					else if (password[i] == 'L') {
						newPassword += "D";
					}
					else if (password[i] == 'R') {
						newPassword += "E";
					}
					else if (password[i] == 'V') {
						newPassword += "F";
					}
					else if (password[i] == 'W') {
						newPassword += "G";
					}
					else if (password[i] == 'N') {
						newPassword += "H";
					}
					else if (password[i] == 'O') {
						newPassword += "I";
					}
					else if (password[i] == 'G') {
						newPassword += "J";
					}
					else if (password[i] == 'U') {
						newPassword += "K";
					}
					else if (password[i] == 'J') {
						newPassword += "L";
					}
					else if (password[i] == 'T') {
						newPassword += "M";
					}
					else if (password[i] == 'M') {
						newPassword += "N";
					}
					else if (password[i] == 'W') {
						newPassword += "G";
					}
					else if (password[i] == 'H') {
						newPassword += "V";
					}
					else if (password[i] == 'S') {
						newPassword += "P";
					}
					else if (password[i] == 'P') {
						newPassword += "Q";
					}
					else if (password[i] == 'Q') {
						newPassword += "R";
					}
					else if (password[i] == 'C') {
						newPassword += "S";
					}
					else if (password[i] == 'D') {
						newPassword += "T";
					}
					else if (password[i] == 'A') {
						newPassword += "U";
					}
					else if (password[i] == 'B') {
						newPassword += "O";
					}
					else if (password[i] == 'F') {
						newPassword += "W";
					}
					else if (password[i] == 'I') {
						newPassword += "X";
					}
					else if (password[i] == 'Y') {
						newPassword += "Q";
					}
					else if (password[i] == 'K') {
						newPassword += "Z";
					}
					else if (password[i] == '_') {
						newPassword += ",";
					}
					else {
						cout << endl << endl << "Error decrypting.";
					}
				}
				cout << endl << endl << fullFileName << " is password protected.";
				sleep(1);
				while (correctPassword == false) {
					attempts++;
					cout << endl << endl << "Please enter the password for " << fullFileName << " > ";
					cin >> passwordAttempt;
					if (passwordAttempt != newPassword) {
						cout << endl << "You have entered an incorrect password.";
						sleep(2);
					}
					else {
						cout << endl  << "You have successfully unlocked " << fullFileName << "." << endl;
						correctPassword = true;
					}
					if (attempts == 8 && correctPassword == false) {
						cout << endl << endl << "You have failed too many attempts.";
						break;
					}
				}
			}
			else {
			    correctPassword = true;
			    cout << endl;
			}
			if (correctPassword == true) {
				correctPassword = true;
				cout << endl << fullFileName << " is currently being decrypted...";
				sleep(3);
				for (string::size_type i = 0; i < fileInformation.size(); ++i) {
					if (fileInformation[i] == ')') {
						newFileInformation += "a";
					}
					else if (fileInformation[i] == '^') {
						newFileInformation += "b";
					}
					else if (fileInformation[i] == '!') {
						newFileInformation += "c";
					}
					else if (fileInformation[i] == '%') {
						newFileInformation += "d";
					}
					else if (fileInformation[i] == '$') {
						newFileInformation += "e";
					}
					else if (fileInformation[i] == '*') {
						newFileInformation += "f";
					}
					else if (fileInformation[i] == '(') {
						newFileInformation += "g";
					}
					else if (fileInformation[i] == '#') {
						newFileInformation += "h";
					}
					else if (fileInformation[i] == '@') {
						newFileInformation += "i";
					}
					else if (fileInformation[i] == '-') {
						newFileInformation += "j";
					}
					else if (fileInformation[i] == '_') {
						newFileInformation += "k";
					}
					else if (fileInformation[i] == '=') {
						newFileInformation += "l";
					}
					else if (fileInformation[i] == '{') {
						newFileInformation += "m";
					}
					else if (fileInformation[i] == '}') {
						newFileInformation += "n";
					}
					else if (fileInformation[i] == '1') {
						newFileInformation += "o";
					}
					else if (fileInformation[i] == '0') {
						newFileInformation += "p";
					}
					else if (fileInformation[i] == '7') {
						newFileInformation += "q";
					}
					else if (fileInformation[i] == '3') {
						newFileInformation += "r";
					}
					else if (fileInformation[i] == '2') {
						newFileInformation += "s";
					}
					else if (fileInformation[i] == '8') {
						newFileInformation += "t";
					}
					else if (fileInformation[i] == '4') {
						newFileInformation += "u";
					}
					else if (fileInformation[i] == ';') {
						newFileInformation += "v";
					}
					else if (fileInformation[i] == '?') {
						newFileInformation += "w";
					}
					else if (fileInformation[i] == '/') {
						newFileInformation += "x";
					}
					else if (fileInformation[i] == ',') {
						newFileInformation += "y";
					}
					else if (fileInformation[i] == '>') {
						newFileInformation += "z";
					}
					else if (fileInformation[i] == '<') {
						newFileInformation += " ";
					}
					else if (fileInformation[i] == ':') {
						newFileInformation += ".";
					}
					else if (fileInformation[i] == '`') {
						newFileInformation += ",";
					}
					else if (fileInformation[i] == '~') {
						newFileInformation += "!";
					}
					else if (fileInformation[i] == '6') {
						newFileInformation += "?";
					}
					else if (fileInformation[i] == '9') {
						newFileInformation += "/";
					}
					else if (fileInformation[i] == 'a') {
						newFileInformation += "(";
					}
					else if (fileInformation[i] == 'b') {
						newFileInformation += ")";
					}
					else if (fileInformation[i] == 'c') {
						newFileInformation += "-";
					}
					else if (fileInformation[i] == 'd') {
						newFileInformation += "_";
					}
					else if (fileInformation[i] == 'e') {
						newFileInformation += "\"";
					}
					else if (fileInformation[i] == 'f') {
						newFileInformation += "\'";
					}
					else if (fileInformation[i] == 'g') {
						newFileInformation += "1";
					}
					else if (fileInformation[i] == 'h') {
						newFileInformation += "2";
					}
					else if (fileInformation[i] == 'i') {
						newFileInformation += "3";
					}
					else if (fileInformation[i] == 'j') {
						newFileInformation += "4";
					}
					else if (fileInformation[i] == 'k') {
						newFileInformation += "5";
					}
					else if (fileInformation[i] == 'l') {
						newFileInformation += "6";
					}
					else if (fileInformation[i] == 'm') {
						newFileInformation += "7";
					}
					else if (fileInformation[i] == 'n') {
						newFileInformation += "8";
					}
					else if (fileInformation[i] == 'o') {
						newFileInformation += "9";
					}
					else if (fileInformation[i] == 'p') {
						newFileInformation += "0";
					}
					else if (fileInformation[i] == 'q') {
						newFileInformation += "#";
					}
					else if (fileInformation[i] == 'r') {
						newFileInformation += "$";
					}
					else if (fileInformation[i] == 's') {
						newFileInformation += "%";
					}
					else if (fileInformation[i] == 't') {
						newFileInformation += "&";
					}
					else if (fileInformation[i] == 'u') {
						newFileInformation += "@";
					}
					else if (fileInformation[i] == 'v') {
						newFileInformation += ":";
					}
					else if (fileInformation[i] == 'w') {
						newFileInformation += ";";
					}
					else if (fileInformation[i] == 'Z') {
						newFileInformation += "A";
					}
					else if (fileInformation[i] == 'Y') {
						newFileInformation += "B";
					}
					else if (fileInformation[i] == 'X') {
						newFileInformation += "C";
					}
					else if (fileInformation[i] == 'W') {
						newFileInformation += "D";
					}
					else if (fileInformation[i] == 'V') {
						newFileInformation += "E";
					}
					else if (fileInformation[i] == 'U') {
						newFileInformation += "F";
					}
					else if (fileInformation[i] == 'T') {
						newFileInformation += "G";
					}
					else if (fileInformation[i] == 'S') {
						newFileInformation += "H";
					}
					else if (fileInformation[i] == 'R') {
						newFileInformation += "I";
					}
					else if (fileInformation[i] == 'Q') {
						newFileInformation += "J";
					}
					else if (fileInformation[i] == 'P') {
						newFileInformation += "K";
					}
					else if (fileInformation[i] == 'O') {
						newFileInformation += "L";
					}
					else if (fileInformation[i] == 'N') {
						newFileInformation += "M";
					}
					else if (fileInformation[i] == 'M') {
						newFileInformation += "N";
					}
					else if (fileInformation[i] == 'L') {
						newFileInformation += "O";
					}
					else if (fileInformation[i] == 'K') {
						newFileInformation += "P";
					}
					else if (fileInformation[i] == 'J') {
						newFileInformation += "Q";
					}
					else if (fileInformation[i] == 'I') {
						newFileInformation += "R";
					}
					else if (fileInformation[i] == 'H') {
						newFileInformation += "S";
					}
					else if (fileInformation[i] == 'G') {
						newFileInformation += "T";
					}
					else if (fileInformation[i] == 'F') {
						newFileInformation += "U";
					}
					else if (fileInformation[i] == 'E') {
						newFileInformation += "V";
					}
					else if (fileInformation[i] == 'D') {
						newFileInformation += "W";
					}
					else if (fileInformation[i] == 'C') {
						newFileInformation += "X";
					}
					else if (fileInformation[i] == 'B') {
						newFileInformation += "Y";
					}
					else if (fileInformation[i] == 'A') {
						newFileInformation += "Z";
					}
        			else if (fileInformation[i] == '5') {
            				newFileInformation += "`";
        			}
        			else if (fileInformation[i] == '&') {
            				newFileInformation += "~";
        			}
        			else if (fileInformation[i] == '+') {
            				newFileInformation += "^";
        			}
        			else if (fileInformation[i] == '[') {
            				newFileInformation += "*";
        			}
        			else if (fileInformation[i] == ']') {
            				newFileInformation += "=";
        			}
        			else if (fileInformation[i] == 'x') {
            				newFileInformation += "+";
        			}
        			else if (fileInformation[i] == 'y') {
            				newFileInformation += "[";
        			}
        			else if (fileInformation[i] == 'z') {
            				newFileInformation += "]";
        			}
        			else if (fileInformation[i] == '.') {
            				newFileInformation += "}";
        			}
        			else if (fileInformation[i] == '\'') {
            				newFileInformation += "{";
        			}
        			else if (fileInformation[i] == '\"') {
            				newFileInformation += "<";
        			}
        			else if (fileInformation[i] == '|') {
            				newFileInformation += ">";
        			}
					else {
						cout << endl << endl << "Error decrypting letter.";
					}
				}
				cout << endl << endl << "Your decrypted text from " << fullFileName << " has been decrypted! Here it is:";
				sleep(3);
				cout << endl << endl << newFileInformation;
			}
		}
		else {
			cout << endl << fullFileName << " does not exist.";
		}
	}
	else if (choice == "create") {
		cout << endl << "Please enter the name of the file > ";
		cin >> fileName;
		fullFileName = fileName + ".txt";
		ofstream newFile;
		
		newFile.open(fullFileName.c_str());
		cout << endl << "Successfully created " << fullFileName << "." << endl << endl;
		sleep(2);
		cout << "Please enter the information that will be entered into " << fullFileName << " > ";
		cin.ignore();
		getline(cin, fileInformation);
		for (string::size_type i = 0; i < fileInformation.size(); ++i) {
			if (fileInformation[i] == 'a') {
				newFileInformation += ")";
			}
			else if (fileInformation[i] == 'b') {
				newFileInformation += "^";
			}
			else if (fileInformation[i] == 'c') {
				newFileInformation += "!";
			}
			else if (fileInformation[i] == 'd') {
				newFileInformation += "%";
			}
			else if (fileInformation[i] == 'e') {
				newFileInformation += "$";
			}
			else if (fileInformation[i] == 'f') {
				newFileInformation += "*";
			}
			else if (fileInformation[i] == 'g') {
				newFileInformation += "(";
			}
			else if (fileInformation[i] == 'h') {
				newFileInformation += "#";
			}
			else if (fileInformation[i] == 'i') {
				newFileInformation += "@";
			}
			else if (fileInformation[i] == 'j') {
				newFileInformation += "-";
			}
			else if (fileInformation[i] == 'k') {
				newFileInformation += "_";
			}
			else if (fileInformation[i] == 'l') {
				newFileInformation += "=";
			}
			else if (fileInformation[i] == 'm') {
				newFileInformation += "{";
			}
			else if (fileInformation[i] == 'n') {
				newFileInformation += "}";
			}
			else if (fileInformation[i] == 'o') {
				newFileInformation += "1";
			}
			else if (fileInformation[i] == 'p') {
				newFileInformation += "0";
			}
			else if (fileInformation[i] == 'q') {
				newFileInformation += "7";
			}
			else if (fileInformation[i] == 'r') {
				newFileInformation += "3";
			}
			else if (fileInformation[i] == 's') {
				newFileInformation += "2";
			}
			else if (fileInformation[i] == 't') {
				newFileInformation += "8";
			}
			else if (fileInformation[i] == 'u') {
				newFileInformation += "4";
			}
			else if (fileInformation[i] == 'v') {
				newFileInformation += ";";
			}
			else if (fileInformation[i] == 'w') {
				newFileInformation += "?";
			}
			else if (fileInformation[i] == 'x') {
				newFileInformation += "/";
			}
			else if (fileInformation[i] == 'y') {
				newFileInformation += ",";
			}
			else if (fileInformation[i] == 'z') {
				newFileInformation += ">";
			}
			else if (fileInformation[i] == ' ') {
				newFileInformation += "<";
			}
			else if (fileInformation[i] == '.') {
				newFileInformation += ":";
			}
			else if (fileInformation[i] == ',') {
				newFileInformation += "`";
			}
			else if (fileInformation[i] == '!') {
				newFileInformation += "~";
			}
			else if (fileInformation[i] == '?') {
				newFileInformation += "6";
			}
			else if (fileInformation[i] == '/') {
				newFileInformation += "9";
			}
			else if (fileInformation[i] == '(') {
				newFileInformation += "a";
			}
			else if (fileInformation[i] == ')') {
				newFileInformation += "b";
			}
			else if (fileInformation[i] == '-') {
				newFileInformation += "c";
			}
			else if (fileInformation[i] == '_') {
				newFileInformation += "d";
			}
			else if (fileInformation[i] == '\"') {
				newFileInformation += "e";
			}
			else if (fileInformation[i] == '\'') {
				newFileInformation += "f";
			}
			else if (fileInformation[i] == '1') {
				newFileInformation += "g";
			}
			else if (fileInformation[i] == '2') {
				newFileInformation += "h";
			}
			else if (fileInformation[i] == '3') {
				newFileInformation += "i";
			}
			else if (fileInformation[i] == '4') {
				newFileInformation += "j";
			}
			else if (fileInformation[i] == '5') {
				newFileInformation += "k";
			}
			else if (fileInformation[i] == '6') {
				newFileInformation += "l";
			}
			else if (fileInformation[i] == '7') {
				newFileInformation += "m";
			}
			else if (fileInformation[i] == '8') {
				newFileInformation += "n";
			}
			else if (fileInformation[i] == '9') {
				newFileInformation += "o";
			}
			else if (fileInformation[i] == '0') {
				newFileInformation += "p";
			}
			else if (fileInformation[i] == '#') {
				newFileInformation += "q";
			}
			else if (fileInformation[i] == '$') {
				newFileInformation += "r";
			}
			else if (fileInformation[i] == '%') {
				newFileInformation += "s";
			}
			else if (fileInformation[i] == '&') {
				newFileInformation += "t";
			}
			else if (fileInformation[i] == '@') {
				newFileInformation += "u";
			}
			else if (fileInformation[i] == ':') {
				newFileInformation += "v";
			}
			else if (fileInformation[i] == ';') {
				newFileInformation += "w";
			}
			else if (fileInformation[i] == 'A') {
				newFileInformation += "Z";
			}
			else if (fileInformation[i] == 'B') {
				newFileInformation += "Y";
			}
			else if (fileInformation[i] == 'C') {
				newFileInformation += "X";
			}
			else if (fileInformation[i] == 'D') {
				newFileInformation += "W";
			}
			else if (fileInformation[i] == 'E') {
				newFileInformation += "V";
			}
			else if (fileInformation[i] == 'F') {
				newFileInformation += "U";
			}
			else if (fileInformation[i] == 'G') {
				newFileInformation += "T";
			}
			else if (fileInformation[i] == 'H') {
				newFileInformation += "S";
			}
			else if (fileInformation[i] == 'I') {
				newFileInformation += "R";
			}
			else if (fileInformation[i] == 'J') {
				newFileInformation += "Q";
			}
			else if (fileInformation[i] == 'K') {
				newFileInformation += "P";
			}
			else if (fileInformation[i] == 'L') {
				newFileInformation += "O";
			}
			else if (fileInformation[i] == 'M') {
				newFileInformation += "N";
			}
			else if (fileInformation[i] == 'N') {
				newFileInformation += "M";
			}
			else if (fileInformation[i] == 'O') {
				newFileInformation += "L";
			}
			else if (fileInformation[i] == 'P') {
				newFileInformation += "K";
			}
			else if (fileInformation[i] == 'Q') {
				newFileInformation += "J";
			}
			else if (fileInformation[i] == 'R') {
				newFileInformation += "I";
			}
			else if (fileInformation[i] == 'S') {
				newFileInformation += "H";
			}
			else if (fileInformation[i] == 'T') {
				newFileInformation += "G";
			}
			else if (fileInformation[i] == 'U') {
				newFileInformation += "F";
			}
			else if (fileInformation[i] == 'V') {
				newFileInformation += "E";
			}
			else if (fileInformation[i] == 'W') {
				newFileInformation += "D";
			}
			else if (fileInformation[i] == 'X') {
				newFileInformation += "C";
			}
			else if (fileInformation[i] == 'Y') {
				newFileInformation += "B";
			}
			else if (fileInformation[i] == 'Z') {
				newFileInformation += "A";
			}
			else if (fileInformation[i] == '`') {
    				newFileInformation += "5";
			}
			else if (fileInformation[i] == '~') {
    				newFileInformation += "&";
			}
			else if (fileInformation[i] == '^') {
    				newFileInformation += "+";
			}
			else if (fileInformation[i] == '*') {
    				newFileInformation += "[";
			}
			else if (fileInformation[i] == '=') {
    				newFileInformation += "]";
			}
			else if (fileInformation[i] == '+') {
    				newFileInformation += "x";
			}
			else if (fileInformation[i] == '[') {
    				newFileInformation += "y";
			}
			else if (fileInformation[i] == ']') {
    				newFileInformation += "z";
			}
			else if (fileInformation[i] == '}') {
    				newFileInformation += ".";
			}
			else if (fileInformation[i] == '{') {
    				newFileInformation += "\'";
			}
			else if (fileInformation[i] == '<') {
    				newFileInformation += "\"";
			}
			else if (fileInformation[i] == '>') {
    				newFileInformation += "|";
			}
			else {
				cout << "The character " << fileInformation[i] << " is not allowed to be encrypted. Please stop the program and try another one.";
			}
		}
		newFile << newFileInformation;
		newFile.close();
		sleep(2);
		cout << endl << "Successfully encrypted and added your information to " << fullFileName << endl;
		cout << endl << "Would you like to password protect this file > ";
		cin >> passwordProtect;
		transform(passwordProtect.begin(), passwordProtect.end(), passwordProtect.begin(), ::tolower);
		if (passwordProtect == "yes") {
			ofstream passwordFile;
			passwordFile.open((fileName + "Password.pw").c_str());
			cout << endl << "Successfully created " << fileName << "Password.pw.";
			while (correctFileName == false) {
			    password = "";
			    newPassword = "";
    			cout << endl << endl << "Please enter your password > ";
    			cin.ignore();
    			getline(cin, password);
    			for (string::size_type i = 0; i < password.size(); ++i) {
    			    correctFileName = true;
    				if (password[i] == 'a') {
    					newPassword += ";";
    				}
    				else if (password[i] == 'b') {
    					newPassword += "-";
    				}
    				else if (password[i] == 'c') {
    					newPassword += ")";
    				}
    				else if (password[i] == 'd') {
    					newPassword += "=";
    				}
    				else if (password[i] == 'e') {
    					newPassword += "~";
    				}
    				else if (password[i] == 'f') {
    					newPassword += "x";
    				}
    				else if (password[i] == 'g') {
    					newPassword += ":";
    				}
    				else if (password[i] == 'h') {
    					newPassword += ",";
    				}
    				else if (password[i] == 'i') {
    					newPassword += "/";
    				}
    				else if (password[i] == 'j') {
    					newPassword += "(";
    				}
    				else if (password[i] == 'k') {
    					newPassword += "3";
    				}
    				else if (password[i] == 'l') {
    					newPassword += "#";
    				}
    				else if (password[i] == 'm') {
    					newPassword += "?";
    				}
    				else if (password[i] == 'n') {
    					newPassword += "<";
    				}
    				else if (password[i] == 'o') {
    					newPassword += "k";
    				}
    				else if (password[i] == 'p') {
    					newPassword += "7";
    				}
    				else if (password[i] == 'q') {
    					newPassword += "`";
    				}
    				else if (password[i] == 'r') {
    					newPassword += "!";
    				}
    				else if (password[i] == 's') {
    					newPassword += "p";
    				}
    				else if (password[i] == 't') {
    					newPassword += "w";
    				}
    				else if (password[i] == 'u') {
    					newPassword += "l";
    				}
    				else if (password[i] == 'v') {
    					newPassword += "\"";
    				}
    				else if (password[i] == 'w') {
    					newPassword += "%";
    				}
    				else if (password[i] == 'x') {
    					newPassword += "^";
    				}
    				else if (password[i] == 'y') {
    					newPassword += "0";
    				}
    				else if (password[i] == 'z') {
    					newPassword += "$";
    				}
    				else if (password[i] == '.') {
    					newPassword += "+";
    				}
    				else if (password[i] == ',') {
    					newPassword += "_";
    				}
    				else if (password[i] == '!') {
    					newPassword += "]";
    				}
    				else if (password[i] == '?') {
    					newPassword += "h";
    				}
    				else if (password[i] == '/') {
    					newPassword += "*";
    				}
    				else if (password[i] == '(') {
    					newPassword += "4";
    				}
    				else if (password[i] == ')') {
    					newPassword += "2";
    				}
    				else if (password[i] == '-') {
    					newPassword += "6";
    				}
    				else if (password[i] == '_') {
    					newPassword += "@";
    				}
    				else if (password[i] == '\"') {
    					newPassword += "8";
    				}
    				else if (password[i] == '\'') {
    					newPassword += "9";
    				}
    				else if (password[i] == '1') {
    					newPassword += "&";
    				}
    				else if (password[i] == '2') {
    					newPassword += "i";
    				}
    				else if (password[i] == '3') {
    					newPassword += "}";
    				}
    				else if (password[i] == '4') {
    					newPassword += "'";
    				}
    				else if (password[i] == '5') {
    					newPassword += ">";
    				}
    				else if (password[i] == '6') {
    					newPassword += "{";
    				}
    				else if (password[i] == '7') {
    					newPassword += ".";
    				}
    				else if (password[i] == '8') {
    					newPassword += "q";
    				}
    				else if (password[i] == '9') {
    					newPassword += "y";
    				}
    				else if (password[i] == '0') {
    					newPassword += "a";
    				}
    				else if (password[i] == '#') {
    					newPassword += "f";
    				}
    				else if (password[i] == '$') {
    					newPassword += "b";
    				}
    				else if (password[i] == '%') {
    					newPassword += "d";
    				}
    				else if (password[i] == '&') {
    					newPassword += "v";
    				}
    				else if (password[i] == '@') {
    					newPassword += "s";
    				}
    				else if (password[i] == ':') {
    					newPassword += "j";
    				}
    				else if (password[i] == ';') {
    					newPassword += "u";
    				}
    				else if (password[i] == 'A') {
    					newPassword += "X";
    				}
    				else if (password[i] == 'B') {
    					newPassword += "P";
    				}
    				else if (password[i] == 'C') {
    					newPassword += "E";
    				}
    				else if (password[i] == 'D') {
    					newPassword += "L";
    				}
    				else if (password[i] == 'E') {
    					newPassword += "R";
    				}
    				else if (password[i] == 'F') {
    					newPassword += "V";
    				}
    				else if (password[i] == 'G') {
    					newPassword += "W";
    				}
    				else if (password[i] == 'H') {
    					newPassword += "N";
    				}
    				else if (password[i] == 'I') {
    					newPassword += "O";
    				}
    				else if (password[i] == 'J') {
    					newPassword += "G";
    				}
    				else if (password[i] == 'K') {
    					newPassword += "U";
    				}
    				else if (password[i] == 'L') {
    					newPassword += "J";
    				}
    				else if (password[i] == 'M') {
    					newPassword += "T";
    				}
    				else if (password[i] == 'N') {
    					newPassword += "M";
    				}
    				else if (password[i] == 'O') {
    					newPassword += "B";
    				}
    				else if (password[i] == 'P') {
    					newPassword += "S";
    				}
    				else if (password[i] == 'Q') {
    					newPassword += "Y";
    				}
    				else if (password[i] == 'R') {
    					newPassword += "Q";
    				}
    				else if (password[i] == 'S') {
    					newPassword += "C";
    				}
    				else if (password[i] == 'T') {
    					newPassword += "D";
    				}
    				else if (password[i] == 'U') {
    					newPassword += "A";
    				}
    				else if (password[i] == 'V') {
    					newPassword += "H";
    				}
    				else if (password[i] == 'W') {
    					newPassword += "F";
    				}
    				else if (password[i] == 'X') {
    					newPassword += "I";
    				}
    				else if (password[i] == 'Y') {
    					newPassword += "Z";
    				}
    				else if (password[i] == 'Z') {
    					newPassword += "K";
    				}
    				else {
    				    correctFileName = false;
    					cout << "The character " << password[i] << " is not allowed to be in your password.";
    					sleep(1);
    					cout << endl;
    				}
    			}
			}
			passwordFile << newPassword;
			passwordFile.close();
		}
	}
	return 0;
}