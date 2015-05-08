#ifndef INCLUDED_FILE_H
#define INCLUDED_FILE_H

#include <string>
using namespace std;

class File {
private:
  File( const char* filename );
  ~File();
  friend class Loader;

  string mFilename;
  char* mData;
  int mSize;

public:
  bool isReady() const;
  int getSize() const;
  const char* getData() const;
};

#endif
