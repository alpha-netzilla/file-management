#include "loader.h"
#include "assert.h"
#include <fstream>
#include <iostream>

using namespace std;

Loader* Loader::mInstance = 0;

Loader::Loader() {
}

Loader::~Loader() {
  typedef list< File* >::iterator It;
  for ( It i = mFiles.begin(); i != mFiles.end(); ++i ) {
    delete( *i );
  }
}

Loader* Loader::instance() {
  return mInstance;
}

void Loader::create() {
  assert( !mInstance && "already created." );
  mInstance = new Loader();
}

void Loader::destroy() {
  delete( mInstance );
}
