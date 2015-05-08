#ifndef INCLUDED_LOADER_H
#define INCLUDED_LOADDR_H

#include <list>
#include <string>
#include "file.h"

using namespace std;

class Loader {
private:
  Loader();
  Loader( const Loader& );
  ~Loader();

  list< File* > mFiles;
  static Loader* mInstance;

public:
  static Loader* instance();
  static void create();
  static void destroy();

  void createFile( File**, const char* filename );
  void loadFiles();
  void outputFile( File *f );
  void destroyFile( File** );
};

#endif
