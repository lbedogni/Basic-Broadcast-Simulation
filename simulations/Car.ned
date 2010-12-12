//
// Copyright (C) 2008 Christoph Sommer <christoph.sommer@informatik.uni-erlangen.de>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

package basic.simulations;

import inet.base.NotificationBoard;
import inet.networklayer.common.InterfaceTable;
import inet.mobility.traci.TraCIMobility;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.udp.UDP;
import basic.flooding.Flooding;
import inet.nodes.inet.NetworkLayer;
import inet.linklayer.mf80211.Nic80211;

module Car
{
    parameters:

        @display("bgb=424,381");
    gates:
        input radioIn;

    submodules:
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=60,193;i=block/control");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=60,34;i=block/table");
        }
        mobility: TraCIMobility {
            parameters:
                @display("p=60,269;i=block/cogwheel");
        }
        routingTable: RoutingTable {
            parameters:
                IPForward = true;
                routerId = "";
                routingFile = "";
                @display("p=60,113;i=block/table");
        }
        udp: UDP {
            parameters:
                @display("p=339,113;i=block/transport");
        }
        flooding: Flooding {

            @display("p=339,33;i=abstract/people2");
        }
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=259,193;i=block/fork;q=queue");
            gates:
                ifIn[1];
                ifOut[1];
        }
        wlan: Nic80211 {
            parameters:
                @display("p=259,327;q=queue;i=block/ifcard");
        }
    connections allowunconnected:
//        udp.appOut++ --> flooding.lowerIN;
//        udp.appIn++ <-- flooding.lowerOUT;

        udp.appOut++ --> flooding.udp$i;
        udp.appIn++ <-- flooding.udp$o;


        udp.ipOut --> networkLayer.udpIn;
        udp.ipIn <-- networkLayer.udpOut;

        wlan.uppergateOut --> networkLayer.ifIn[0];
        wlan.uppergateIn <-- networkLayer.ifOut[0];

        radioIn --> wlan.radioIn;

}

