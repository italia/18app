// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Array.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public sealed class Array :9
// {
uType* Array_typeof();
void Array__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length);
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int* length);
void Array__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right);
void Array__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right);
void Array__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison);
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison);
void Array__Swap_fn(uType* __type, uArray* data, int* a, int* b);

struct Array
{
    static void Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length);
    static void Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int length);
    static void QuickSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right);
    static void ShellSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right);
    static void Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison);
    static void Sort1(uType* __type, uArray* elements, uDelegate* comparison);
    static void Swap(uType* __type, uArray* data, int a, int b);
};
// }

}} // ::g::Uno
