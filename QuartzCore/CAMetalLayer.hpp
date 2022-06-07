//
//  MetalLayer.hpp
//  InteractiveComputerGraphics
//
//  Created by Eisen Montalvo on 1/12/22.
//

#pragma once

#include "../Metal/MTLDrawable.hpp"

#include "CADefines.hpp"
#include "CAPrivate.hpp"

namespace CA {
class MetalLayer: public NS::Referencing<MetalLayer> {
public:
    class MTL::Device* device() const;
    class CA::MetalDrawable* nextDrawable() const;
};
}

_CA_INLINE MTL::Device* CA::MetalLayer::device() const
{
    return Object::sendMessage<MTL::Device*>(this, _MTL_PRIVATE_SEL(device));
}

_CA_INLINE CA::MetalDrawable* CA::MetalLayer::nextDrawable() const
{
    return Object::sendMessage<CA::MetalDrawable*>(this, _MTL_PRIVATE_SEL(nextDrawable));
}
