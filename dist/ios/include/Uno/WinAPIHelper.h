#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// windows.h is mean, and define pre-processor symbols that cause problems :(

#undef ChangeDirectory
#undef CopyFile
#undef CreateDirectory
#undef CreateMutex
#undef DeleteFile
#undef GetCurrentDirectory
#undef GetMessage
#undef GetSystemDirectory
#undef MessageBox
#undef MoveFile
#undef SetCurrentDirectory
