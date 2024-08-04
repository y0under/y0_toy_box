#ifndef RESOURCES_STANDARD_NEW_DELETE_FORMS
#define RESOURCES_STANDARD_NEW_DELETE_FORMS

#include <new>

class StandardNewDeleteForms {
  public:
    static void *operator new(std::size_t size) noexcept(false) { // throw(std::bad_alloc) {
      return ::operator new(size);
    }

    static void operator delete(void *memory) throw() {
      ::operator delete(memory);
    }

    static void *operator new(std::size_t size, void *ptr) throw() {
      return ::operator new(size, ptr);
    }

    static void operator delete(void *memory, void *ptr) throw() {
      return ::operator delete(memory, ptr);
    }

    static void *operator new(std::size_t size,
                              const std::nothrow_t &nt) throw() {
      return ::operator new(size, nt);
    }

    static void operator delete(void *memory, const std::nothrow_t&) throw() {
      ::operator delete(memory);
    }
};

#endif
