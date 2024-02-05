#pragma once

#include "common/assert.h"
#include "video_core/pica/regs_internal.h"
#include "video_core/renderer_metal/mtl_common.h"

namespace Picatomtl {

    using TextureFilter = Pica::TexturingRegs::TextureConfig::TextureFilter;

    inline mtl::filter TextureFilterMode(TextureFilter Mode){
        switch (Mode){
       case TextureFilter::Linear:
        return mtl::Filter::eLinear;
    case TextureFilter::Nearest:
        return mtl::Filter::eNearest;
    default:
        UNIMPLEMENTED_MSG("Unknown texture filtering mode {}", mode);
        }

       return mtl::Filter::eLinear;

    }

    }