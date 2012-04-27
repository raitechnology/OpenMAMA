/* $Id$
 *
 * OpenMAMA: The open middleware agnostic messaging API
 * Copyright (C) 2011 NYSE Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef MamdaAuctionFieldsH
#define MamdaAuctionFieldsH

#include <mamda/MamdaConfig.h>
#include <mama/mamacpp.h>


namespace Wombat
{

    class MamaFieldDescriptor;
    class MamaDictionary;


    class MAMDAExpDLL MamdaAuctionFields
    {
    public:
        static const MamaFieldDescriptor*  UNCROSS_PRICE;
        static const MamaFieldDescriptor*  UNCROSS_VOLUME;
        static const MamaFieldDescriptor*  UNCROSS_PRICE_IND;
        static const MamaFieldDescriptor*  AUCTION_TIME;


        // calling setDictionary will also set the Common Fields
        static void setDictionary (const MamaDictionary&  dictionary);

        /**
        * Reset the dictionary for fundamental update fields
        */
        static void      reset     ();
        static uint16_t  getMaxFid ();
        static bool      isSet     ();
    };

}

#endif // MamdaAuctionFieldsH



