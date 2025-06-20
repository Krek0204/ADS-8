// Copyright 2021 NNTU-CS
#include <string>
#include "bst.h"

void makeTree(BST<std::string>& tree, const char* filename);
void printFreq(BST<std::string>& tree);

int main() {
  const char* file = "war_peace.txt";
  BST<std::string> tree;
  makeTree(tree, file);
  printFreq(tree);
  return 0; }
