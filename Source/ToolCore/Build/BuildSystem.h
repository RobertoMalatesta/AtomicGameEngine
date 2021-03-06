// Copyright (c) 2014-2015, THUNDERBEAST GAMES LLC All rights reserved
// Please see LICENSE.md in repository root for license information
// https://github.com/AtomicGameEngine/AtomicGameEngine

#pragma once

#include <Atomic/Core/Object.h>
#include "BuildBase.h"

#include "../Platform/Platform.h"

using namespace Atomic;

namespace ToolCore
{

class BuildSystem : public Object
{
    OBJECT(BuildSystem);

public:
    /// Construct.
    BuildSystem(Context* context);
    /// Destruct.
    virtual ~BuildSystem();

    void SetBuildPath(const String& path) { buildPath_ = path; }

    void QueueBuild(BuildBase* buildBase);

    bool StartNextBuild();

    void BuildComplete(PlatformID platform, const String& buildFolder, bool success = true, bool fail3D = false);

private:

    String buildPath_;

    List<SharedPtr<BuildBase>> queuedBuilds_;
    SharedPtr<BuildBase> currentBuild_;

};


}
