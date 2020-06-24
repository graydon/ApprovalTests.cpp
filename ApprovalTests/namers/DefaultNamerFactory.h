#pragma once

#include "ApprovalTests/core/ApprovalNamer.h"
#include "ApprovalTestNamer.h"

#include <memory>
#include <functional>
#include <utility>

namespace ApprovalTests
{

    using NamerCreator = std::function<std::shared_ptr<ApprovalNamer>()>;

    //! Implementation detail of Approvals::useAsDefaultNamer()
    class DefaultNamerFactory
    {
    private:
        static NamerCreator& defaultNamer();

    public:
        static NamerCreator getDefaultNamer();

        static void setDefaultNamer(NamerCreator namer);
    };
}
