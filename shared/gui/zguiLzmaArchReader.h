#ifndef __LOCKER_LZMAARCHREADER_H_
#define __LOCKER_LZMAARCHREADER_H_

#include "..\lzma_arch.h"

namespace zgui
{

class LockerLzmaArchReader
{
public:
    LockerLzmaArchReader();
    ~LockerLzmaArchReader();

    bool init(plzma_arch_header_t pLzmaArchHeader, uint32_t size);

	uint32_t getEntryOffset(const String&);
	bool getEntry(const String& name, MemoryBlock& entryBlock);

private:
    plzma_arch_header_t _pLzmaArchHeader;
};

}

#endif // __LOCKER_LZMAARCHREADER_H_
