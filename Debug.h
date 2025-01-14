#ifndef __DEBUG_H
#define __DEBUG_H

#include "Settings.h"

#ifdef DEBUG
  #define DEBUG_OUT  Serial
#else
  #include <SoftwareSerial.h>
//---
// disable Serial DEBUG output
  #define DEBUG_OUT DummySerial
  static class {
  public:
      void begin(...) {}
      void print(...) {}
      void println(...) {}
      void flush() {}
      bool available() { return false;}
      int  readBytes(...) { return 0;}
      int  printf (...) {return 0;}
  } DummySerial;
#endif

#endif 
