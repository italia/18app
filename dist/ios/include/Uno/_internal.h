// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Backends/CPlusPlus/Uno/_internal.h.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Traits.h>
#include <Uno/ObjectModel.h>
#include <Uno/_gc.h>

struct uAutoReleaseFrame
{
    size_t StartIndex;

#ifdef DEBUG_ARC
    size_t AllocCount;
    size_t FreeCount;
    size_t AllocSize;
    size_t FreeSize;
#endif
};

struct uCallStackFrame
{
    const char* Type;
    const char* Function;
};

struct uObjectList
{
    size_t _alloc;
    size_t _length;
    uObject** _data;

    uObjectList()
        : _alloc(0)
        , _length(0)
        , _data(0)
    {
    }
    ~uObjectList()
    {
        U_FREE_ARPVECTOR(_data);
        _alloc = 0;
        _length = 0;
        _data = 0;
    }

    size_t Length() const { return _length; }
    uObject* operator [](size_t index) const { return _data[index]; }

    void Add(uObject* obj)
    {
        if (_alloc == _length)
        {
            if (_alloc == 0)
            {
                // GC doesn't support initial allocation through realloc
                _data = (uObject**) U_MALLOC_ARPVECTOR(256 * sizeof(uObject*));
                _alloc = 256;
            }
            else
            {
                _data = (uObject**) U_REALLOC_ARPVECTOR(_data, _alloc * 2 * sizeof(uObject*));
                _alloc *= 2;
            }
        }

        _data[_length++] = obj;
    }

    void Resize(size_t newLength)
    {
        memset(_data + newLength, 0, (_length - newLength) * sizeof(uObject* ));
        _length = newLength;

        // TODO: Shrink container
    }
};

struct uThreadData
{
    uObjectList AutoReleaseList;
    uAutoReleaseFrame AutoReleaseStack[0x800];
    uAutoReleaseFrame* AutoReleasePtr;
    uAutoReleaseFrame* AutoReleaseEnd;
    uCallStackFrame CallStack[0xffff];
    uCallStackFrame* CallStackPtr;
    uCallStackFrame* CallStackEnd;
    uType* CurrentType;

    uThreadData()
        : AutoReleasePtr(AutoReleaseStack - 1)
        , AutoReleaseEnd(AutoReleaseStack + sizeof(AutoReleaseStack) / sizeof(AutoReleaseStack[0]))
        , CallStackPtr(CallStack - 1)
        , CallStackEnd(CallStack + sizeof(CallStack) / sizeof(CallStack[0]))
        , CurrentType(NULL)
    {
    }
};

struct uWeakObject
{
    uObject* Object;
    int RefCount;

    enum ObjectState
    {
        Dead = -1,
        Healthy,
        Infected,
        Zombie
    };

    ObjectState ZombieState;
    uWeakStateIntercept::Callback ZombieStateIntercept;
};

struct uTypeKey
{
    uType* Definition;
    uType** Arguments;

    uTypeKey()
        : Definition(NULL)
        , Arguments(NULL)
    {
    }
    uTypeKey(uType* def)
        : Definition(def->Definition)
        , Arguments((uType**)malloc(def->GenericCount * sizeof(uType*)))
    {
        U_ASSERT(def && def->Definition && def->GenericCount);
    }
    uTypeKey(uType* def, uType** args)
        : Definition(def->Definition)
        , Arguments((uType**)malloc(def->GenericCount * sizeof(uType*)))
    {
        U_ASSERT(def && def->Definition && def->GenericCount && args);
        memcpy(Arguments, args, def->GenericCount * sizeof(uType*));
    }
    uTypeKey(const uTypeKey& copy)
        : Definition(copy.Definition)
    {
        if (!Definition)
            Arguments = NULL;
        else
        {
            U_ASSERT(copy.Arguments);
            Arguments = (uType**)malloc(Definition->GenericCount * sizeof(uType*));
            memcpy(Arguments, copy.Arguments, Definition->GenericCount * sizeof(uType*));
        }
    }
    ~uTypeKey()
    {
        if (Arguments)
            free(Arguments);
    }
    uTypeKey& operator =(const uTypeKey& copy)
    {
        if (Arguments)
            free(Arguments);

        Definition = copy.Definition;

        if (!Definition)
            Arguments = NULL;
        else
        {
            Arguments = (uType**)malloc(Definition->GenericCount * sizeof(uType*));
            memcpy(Arguments, copy.Arguments, Definition->GenericCount * sizeof(uType*));
        }

        return *this;
    }
};

namespace uBase
{
    template<> struct Traits<uTypeKey>
    {
        static bool Equals(const uTypeKey& a, const uTypeKey& b)
        {
            if (a.Definition != b.Definition)
                return false;

            if (a.Definition)
                for (size_t i = 0; i < a.Definition->GenericCount; i++)
                    if (a.Arguments[i] != b.Arguments[i])
                        return false;

            return true;
        }

        static uint32_t Hash(const uTypeKey& t)
        {
            if (!t.Definition)
                return 0;

            uint32_t hash = uBase::Default::Hash(t.Definition);

            for (size_t i = 0; i < t.Definition->GenericCount; i++)
                hash = ((hash << 5) + hash) ^ uBase::Default::Hash(t.Arguments[i]);

            return hash;
        }
    };
}
