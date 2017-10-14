//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/bmac/BMacFrame.msg.
//

#ifndef _INET_BMACFRAME_M_H_
#define _INET_BMACFRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif

// cplusplus {{
    #include "inet/linklayer/base/MACFrameBase_m.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/linklayer/bmac/BMacFrame.msg:28</tt> by nedtool.
 * <pre>
 * packet BMacFrame extends MACFrameBase
 * {
 * }
 * </pre>
 */
class INET_API BMacFrame : public ::inet::MACFrameBase
{
  protected:

  private:
    void copy(const BMacFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BMacFrame&);

  public:
    BMacFrame(const char *name=NULL, int kind=0);
    BMacFrame(const BMacFrame& other);
    virtual ~BMacFrame();
    BMacFrame& operator=(const BMacFrame& other);
    virtual BMacFrame *dup() const {return new BMacFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, BMacFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BMacFrame& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_BMACFRAME_M_H_
