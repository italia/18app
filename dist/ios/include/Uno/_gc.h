// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Backends/CPlusPlus/Uno/_gc.h.
// WARNING: Changes might be lost if you edit this file directly.

//#if #(GC:Defined)
//# include <gc.h>
//
//static void uGCInit();
//
//static void *uGCMallocObject(size_t allocSize, uType *objType);
//static void uGCFree(uObject *);
//
//static void uGCFreeWeakRef(uWeakObject*);
//
//#ifdef DEBUG_GC
//static void uGCPrintStats();
//static void uGCFinalizeWeakRef(uWeakObject*, uType*);
//#endif
//
//# define U_MALLOC_OBJECT(size, type) uGCMallocObject(size, type)
//# define U_FREE_OBJECT(obj) uGCFree(obj)
//
//# define U_MALLOC_WEAKREF(size) GC_MALLOC_ATOMIC(size)
//# define U_FREE_WEAKREF(weak) uGCFreeWeakRef(weak)
//
//# define U_MALLOC_ARPVECTOR(size) GC_MALLOC_UNCOLLECTABLE(size)
//# define U_REALLOC_ARPVECTOR(ptr, size) GC_REALLOC(ptr, size)
//# define U_FREE_ARPVECTOR(ptr) GC_FREE(ptr)
//#endif // #(GC:Defined)


#ifndef U_MALLOC_TYPE
# define U_MALLOC_TYPE(size) calloc(1, size)
# define U_FREE_TYPE(obj) free(obj)
#endif

#ifndef U_MALLOC_OBJECT
# define U_MALLOC_OBJECT(size, type) calloc(1, size)
# define U_FREE_OBJECT(obj) free(obj)
#endif

#ifndef U_MALLOC_STRING
# define U_MALLOC_STRING(size) calloc(1, size)
# define U_FREE_STRING(obj) free(obj)
#endif

#ifndef U_MALLOC_WEAKREF
# define U_MALLOC_WEAKREF(size) calloc(1, size)
# define U_FREE_WEAKREF(weak) free(weak)
#endif

#ifndef U_MALLOC_CSTR
# define U_MALLOC_CSTR(size) malloc(size)
# define U_FREE_CSTR(obj) free(obj)
#endif

#ifndef U_MALLOC_ARPVECTOR
# define U_MALLOC_ARPVECTOR(size) malloc(size)
# define U_REALLOC_ARPVECTOR(ptr, size) realloc(ptr, size)
# define U_FREE_ARPVECTOR(ptr) free(ptr)
#endif

// Disable free()
#if DEBUG_ARC >= 4
# define free(X) void()
#endif
