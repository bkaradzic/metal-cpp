//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//
// QuartzCore/CAMetalLayer.hpp
//
// Copyright 2020-2021 Apple Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------


#pragma once

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "../Metal/MTLDrawable.hpp"

#include "CADefines.hpp"
#include "CAPrivate.hpp"

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

namespace CA {
class MetalLayer: public NS::Referencing<MetalLayer> {
public:
    class MTL::Device* device() const;
    class CA::MetalDrawable* nextDrawable() const;
};
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_CA_INLINE MTL::Device* CA::MetalLayer::device() const
{
    return Object::sendMessage<MTL::Device*>(this, _MTL_PRIVATE_SEL(device));
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_CA_INLINE CA::MetalDrawable* CA::MetalLayer::nextDrawable() const
{
    return Object::sendMessage<CA::MetalDrawable*>(this, _MTL_PRIVATE_SEL(nextDrawable));
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
