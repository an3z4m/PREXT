//
// Generated file, do not edit! Created by nedtool 5.6 from veins/modules/Prext/base/messages/MixZoneAd.msg.
//

#ifndef __MIXZONEAD_M_H
#define __MIXZONEAD_M_H

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION != OMNETPP_VERSION)
#error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef VEINS_API
#if defined(VEINS_EXPORT)
#define VEINS_API OPP_DLLEXPORT
#elif defined(VEINS_IMPORT)
#define VEINS_API OPP_DLLIMPORT
#else
#define VEINS_API
#endif
#endif

// cplusplus {{
#include <veins/modules/messages/DemoSafetyMessage_m.h>
#include <veins/base/utils/Coord.h>
#include <vector>
using namespace std;
struct Convex {
    vector<Coord> points;
};
// }}

/**
 * Class generated from <tt>veins/modules/Prext/base/messages/MixZoneAd.msg:36</tt> by nedtool.
 * <pre>
 * message MixZoneAd extends DemoSafetyMessage
 * {
 *     int zoneType = 1;
 *     int circularRange = 0;
 *     Convex zonePolygon[];
 * }
 * </pre>
 */
class VEINS_API MixZoneAd : public veins::DemoSafetyMessage {
protected:
    int zoneType;
    int circularRange;
    Convex* zonePolygon; // array ptr
    unsigned int zonePolygon_arraysize;

private:
    void copy(const MixZoneAd& other);

protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MixZoneAd&);

public:
    MixZoneAd(const char* name = nullptr, short kind = 0);
    MixZoneAd(const MixZoneAd& other);
    virtual ~MixZoneAd();
    MixZoneAd& operator=(const MixZoneAd& other);
    virtual MixZoneAd* dup() const override
    {
        return new MixZoneAd(*this);
    }
    virtual void parsimPack(omnetpp::cCommBuffer* b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer* b) override;

    // field getter/setter methods
    virtual int getZoneType() const;
    virtual void setZoneType(int zoneType);
    virtual int getCircularRange() const;
    virtual void setCircularRange(int circularRange);
    virtual void setZonePolygonArraySize(unsigned int size);
    virtual unsigned int getZonePolygonArraySize() const;
    virtual Convex& getZonePolygon(unsigned int k);
    virtual const Convex& getZonePolygon(unsigned int k) const
    {
        return const_cast<MixZoneAd*>(this)->getZonePolygon(k);
    }
    virtual void setZonePolygon(unsigned int k, const Convex& zonePolygon);
};

inline void doParsimPacking(omnetpp::cCommBuffer* b, const MixZoneAd& obj)
{
    obj.parsimPack(b);
}
inline void doParsimUnpacking(omnetpp::cCommBuffer* b, MixZoneAd& obj)
{
    obj.parsimUnpack(b);
}

#endif // ifndef __MIXZONEAD_M_H
