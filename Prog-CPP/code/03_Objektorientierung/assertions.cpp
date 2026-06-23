//#define NDEBUG // Deaktiviert Assertions im Projekt
#include <cassert>
bool testStuff(int* in1){
    assert(in1 != nullptr); // If in1 == nullptr, code dies
    ...
}