#ifndef __CPP_XLI_FILE_SYSTEM_ENUMERATOR_H__
#define __CPP_XLI_FILE_SYSTEM_ENUMERATOR_H__

#include <uBase/FileSystem.h>

class CppXliFileSystemEnumerator: public uBase::Object
{
public:
    uBase::Array<uBase::FileInfo> Files;
    int Index;

    CppXliFileSystemEnumerator()
    {
        Index = -1;
    }
};


#endif
