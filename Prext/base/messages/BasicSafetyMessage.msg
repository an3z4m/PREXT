
cplusplus {{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/SimpleAddress.h"
}}

//namespace veins;

class veins::BaseFrame1609_4;
class noncobject veins::Coord;
class veins::LAddress::L2Type extends void;

packet BasicSafetyMessage extends veins::BaseFrame1609_4 {
    // from TraCIDemo11pMessage
    string demoData;
    veins::LAddress::L2Type senderAddress = -1;
    int serial = 0;
    // from DemoSafetyMessage
    veins::Coord senderPos;
    veins::Coord senderSpeed;
}
