/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef ONE_SIGNATURES_H
#define ONE_SIGNATURES_H

#include "api/api_base.h"
#include "api/one/one_paths.h"
#include <string>

namespace Ark {
namespace Client {
namespace API {
namespace ONE {

class Signatures : public ApiBase
{
    public:
        std::string fee();
};

};
};
};
};

#endif
