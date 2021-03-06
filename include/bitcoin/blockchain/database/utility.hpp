/*
 * Copyright (c) 2011-2013 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_BLOCKCHAIN_UTILITY_HPP
#define LIBBITCOIN_BLOCKCHAIN_UTILITY_HPP

#include <cstdint>
#include <string>
#include <bitcoin/bitcoin.hpp>
#include <bitcoin/blockchain/define.hpp>
#include <bitcoin/blockchain/database/types.hpp>
#include <bitcoin/blockchain/database/mmfile.hpp>

namespace libbitcoin {
    namespace chain {

template <typename HashType>
uint64_t remainder(const HashType& value, const uint64_t divisor);

BCB_API void touch_file(const std::string& filename);

BCB_API void reserve_space(mmfile& file, size_t required_size);

    } // namespace chain
} // namespace libbitcoin

#include <bitcoin/blockchain/impl/utility.ipp>

#endif

