#include "file.h"
#include <fstream>
#include <assert.h>

using namespace std;

File::File( const char* filename ) :
mFilename( filename ),
mData( 0 ),
mSize( 0 ) {
}

File::~File() {
  if ( mData ) {
    delete[]( mData );
  }
  mSize = 0;
}

bool File::isReady() const {
  return ( mData != 0 );
}

int File::getSize() const {
  assert( mData && "loading is not finished." );
  return mSize;
}

const char* File::getData() const {
  assert( mData && "loading is not finished." );
  return mData;
}
