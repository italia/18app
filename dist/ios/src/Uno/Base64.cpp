// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Backends/CPlusPlus/Uno/Base64.cpp.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.h>

static const char* base64_chars =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789+/";

uString* uBase64Encode(uArray* bytes)
{
    unsigned char* bytes_to_encode =(unsigned char*)bytes->Ptr();
    unsigned int in_len = bytes->Length();
    unsigned char* encoded_buffer = new unsigned char[in_len*2 + 3];

    int i = 0;
    int j = 0;
    unsigned char char_array_3[3] = { 0, 0, 0 };
    unsigned char char_array_4[4] = { 0, 0, 0, 0 };

    unsigned int out_len = 0;
    while (in_len--)
    {
        char_array_3[i++] = *(bytes_to_encode++);
        if (i == 3)
        {
            char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
            char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
            char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
            char_array_4[3] = char_array_3[2] & 0x3f;

            for (i = 0; i < 4 ; i++)
            {
                encoded_buffer[out_len++] = base64_chars[char_array_4[i]];
            }
            i = 0;
        }
    }

    if (i)
    {
        for (j = i; j < 3; j++)
        {
            char_array_3[j] = '\0';
        }

        char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
        char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
        char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
        char_array_4[3] = char_array_3[2] & 0x3f;

        for (j = 0; j < (i + 1); j++)
        {
            encoded_buffer[out_len++] = base64_chars[char_array_4[j]];
        }

        while (i++ < 3)
        {
            encoded_buffer[out_len++] = '=';
        }
    }

    uString* res = uString::Ansi((char const *)encoded_buffer, out_len);

    delete [] encoded_buffer;

    return res;
}
