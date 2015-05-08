#include "loader.h"
#include <sstream>
#include <iostream>

using namespace std;

File* gFiles[ 10 ];

void createFile(int num, const char* filename) {
  Loader::instance()->createFile( &gFiles[num], filename);
  cout << num << " th file is created." << endl;
}

void outputFile(int num) {
  Loader::instance()->outputFile(gFiles[num]);
}

void loadFiles() {
  Loader::instance()->loadFiles();
  cout << "files are loaded." << endl;
}

void destroyFile(int num) {
  Loader::instance()->destroyFile( &gFiles[num] );
  cout << num << " th file is destroyed." << endl;
}

int main() {
  if ( !Loader::instance() ) {
    Loader::create();
  }

  createFile(0, "./test.txt");

  loadFiles();

  outputFile(0);

  destroyFile(0);
}
