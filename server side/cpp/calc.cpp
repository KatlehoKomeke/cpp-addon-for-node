// Including the input output steam
#include <iostream> 

// Including the native abstractions for node
#include <nan.h>

// V8 is the engine that node is running on
// so we are using the namespace of V8 to 
// ensure that the compilation is compatible.
using namespace v8;

NAN_METHOD(calc) {
  unsigned long long count = 0;
  for (unsigned long long i = 0; i < 9999999; i++) {
    count += i;
    std::cout<< count <<"\n";
  }
  std::cout<<"Sum of integers from 0 to "<< 9999999 <<" in c++ = "<< count <<"\n";
  std::cout<<"c++'s largest possible integer "<< ULLONG_MAX <<"\n";
}

NAN_MODULE_INIT(init) {
  Nan::SetMethod(target, "calc", calc);
}

NODE_MODULE(calc, init);
