/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef TWO_WALLETS_H
#define TWO_WALLETS_H

#include "api/api_base.h"
#include "api/two/two_paths.h"
#include "helpers/helpers.h"
#include <string>

namespace Ark {
namespace Client {
namespace API {
namespace TWO {

class Wallets : public ApiBase
{
    public:
        std::string get(const char *const identifier, int limit = 5, int page = 1);
        std::string all(int limit = 5, int page = 1);
        std::string top(int limit = 5, int page = 1);
        std::string transactions(const char *const identifier, int limit = 5, int page = 1);
        std::string transactionsReceived(const char *const identifier, int limit = 5, int page = 1);
        std::string transactionsSent(const char *const identifier, int limit = 5, int page = 1);
        std::string votes(const char *const identifier, int limit = 5, int page = 1);
        std::string search(std::pair<const char*, const char*> bodyParameters, int limit = 5, int page = 1);
};

};
};
};
};

#endif
