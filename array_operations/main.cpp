#include <iostream>
#include <stdio.h>

using namespace std;

void print_array(char input[]) {
  if (input[0] == '\0') {
    cout << endl;
    return;
  }

  cout << input[0];
  print_array(input + 1);
}

void reverse_print_array(char input[]) {
  if (input[0] == '\0') {
    return;
  }

  reverse_print_array(input + 1);
  cout << input[0];
}

int length_array(char input[]) {
  if (input[0] == '\0') {
    return 0;
  }
  return 1 + length_array(input + 1);
}

void replace_chars(char input[], char cur_char, char new_char) {
  if (input[0] == '\0') {
    return;
  }
  if (input[0] == cur_char) {
    input[0] = new_char;
  }
  replace_chars(input + 1, cur_char, new_char);
}

void remove_chars(char input[], char rem_char) {
  if (input[0] == '\0') {
    return;
  }

  if (input[0] != rem_char) {
    remove_chars(input + 1, rem_char);
  } else {
    for (size_t i = 0; input[i] != '\0'; i++) {
      input[i] = input[i + 1];
    }
    remove_chars(input, rem_char);
  }
}

void remove_subsequent_chars(char input[]) {
  if (input[0] == '\0') {
    return;
  }
  if (input[0] == input[1]) {
    for (size_t i = 0; input[i] != '\0'; i++) {
      input[i] = input[i + 1];
    };
    remove_subsequent_chars(input);
  } else {
    remove_subsequent_chars(input + 1);
  }
}

void print_substrings(string input, string output) {
  if (input.length() == 0) {
    cout << output << endl;
    return;
  }

  print_substrings(input.substr(1), output);
  print_substrings(input.substr(1), output + input[0]);
}

int main(int argc, char **argv) {
  char a[100];
  cout << "Enter input:";
  cin >> a;

  cout << "Entered input:";
  print_array(a);

  cout << "Reversed input:";
  reverse_print_array(a);
  cout << endl;

  cout << "Length of array: " << length_array(a) << endl;

  char current_char, new_char;
  cout << "Character to replace: ";
  cin >> current_char;
  cout << "New character: ";
  cin >> new_char;

  replace_chars(a, current_char, new_char);

  cout << "Updated array:";
  print_array(a);

  char rem_char;
  cout << "Character to remove: ";
  cin >> rem_char;

  remove_chars(a, rem_char);

  cout << "Updated array:";
  print_array(a);

  remove_subsequent_chars(a);
  cout << "Removed subsequent characters from array:";
  print_array(a);

  string b, o = "";
  cout << "Enter string:";
  cin >> b;

  cout << "Substrings:";

  print_substrings(b, o);

  return 0;
}
