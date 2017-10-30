// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// internal struct Dictionary<TKey, TValue>.Bucket :16
// {
uStructType* Dictionary__Bucket_typeof();

template<class TKey, class TValue>
struct Dictionary__Bucket
{
    TKey Key;
    TValue Value;
    int State;
};
// }

}}} // ::g::Uno::Collections
