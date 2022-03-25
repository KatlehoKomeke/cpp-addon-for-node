// Including the input output steam
#include <iostream> 

// Including the native abstractions for node
#include <nan.h>

// V8 is the engine that node is running on
// so we are using the namespace of V8 to 
// ensure that the compilation compatible.
using namespace v8;

NAN_METHOD(calc) {
  unsigned long long int count = 0;
  for (unsigned long long int i = 0; i < 900000000; i++) {
    count += i;
  }
  std::cout<<"Sum of integers from 0 to "<< 900000000<<" in c++ ="<< count <<"\n";
}

NAN_MODULE_INIT(init) {
  Nan::SetMethod(target, "calc", calc);
}

NODE_MODULE(calc, init);