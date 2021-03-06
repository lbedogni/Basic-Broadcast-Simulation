//
// Copyright (C) 2006 Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//


package basic.dbamac.ieee80211.mgmt;

//
// Used in 802.11 infrastructure mode: handles management frames for a station (STA).
// Relies on the MAC layer (Ieee80211Mac) for reception and transmission of frames.
//
// This variant is a very simplistic: the AP address and channel is preconfigured,
// there is no scanning, authentication or association. Only data frames are
// understood or sent at any time.
//
// This module never switches channels, that is, it will operate on the channel
// the physical layer is configured for (see channelNumber in Ieee80211Radio).
//
// @author Andras Varga
//
simple Ieee80211MgmtSTASimplified like Ieee80211Mgmt
{
    parameters:
        string accessPointAddress; // MAC address of associate AP
        int frameCapacity = default(100);
        @display("i=block/cogwheel");
    gates:
        input uppergateIn;
        output uppergateOut;
        input macIn @labels(Ieee80211Frame);
        output macOut @labels(Ieee80211Frame);
}
