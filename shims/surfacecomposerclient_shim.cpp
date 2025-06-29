#include <stddef.h>

// Dummy implementation for missing createVirtualDisplay
extern "C" void _ZN7android21SurfaceComposerClient20createVirtualDisplayERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbS9_f() {
    // Empty dummy function
}

// Dummy vtable implementation
#if defined(__arm__) || defined(__aarch64__)
void* _ZTVN7android21SurfaceComposerClient11TransactionE __attribute__((weak)) = NULL;
#endif
