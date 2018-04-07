//===- OpenOrbis.h -----------------------------------------------*- C++ -*-===//
//
//                             The LLVM Linker
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
// Greets: flatz, CrazyVoid, specter
//
//===----------------------------------------------------------------------===//

#ifndef LLD_ELF_OPENORBIS_H
#define LLD_ELF_OPENORBIS_H
#include <cstdint>

namespace lld {
namespace elf {

#define SCEPROCPARAMS_MAGIC 0x4942524F // 'ORBI'

struct SceProcParams
{
    uint64_t Size;
    union
    {
        uint32_t Magic;
        char MagicBits[4];
    };
    uint32_t ThingCount;    // 1
    uint16_t Build;         // 0x0000
    uint8_t Minor;          // 0x00
    uint8_t Major;          // 0x01
    uint8_t Unknown[36];
    uint64_t Things[1];       // Things[ThingCount]; (gta is 0)
};

} // namespace elf
} // namespace lld

#endif // LLD_ELF_OPENORBIS_H
