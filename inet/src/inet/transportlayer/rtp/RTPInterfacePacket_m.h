//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/rtp/RTPInterfacePacket.msg.
//

#ifndef _INET__RTP_RTPINTERFACEPACKET_M_H_
#define _INET__RTP_RTPINTERFACEPACKET_M_H_

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
#include "inet/common/INETDefs.h"
#include "inet/networklayer/contract/ipv4/IPv4Address.h"
#include "inet/transportlayer/rtp/RTPSenderControlMessage_m.h"
#include "inet/transportlayer/rtp/RTPSenderStatusMessage_m.h"
// }}


namespace inet {
namespace rtp {

/**
 * Enum generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:40</tt> by nedtool.
 * <pre>
 * //
 * // An enumeration to distinguish the different functions of the
 * // RTPInterfacePacket.
 * //
 * enum RTP_IFP_TYPE
 * {
 * 
 *     RTP_IFP_ENTER_SESSION = 1;
 *     RTP_IFP_SESSION_ENTERED = 2;
 *     RTP_IFP_CREATE_SENDER_MODULE = 3;
 *     RTP_IFP_SENDER_MODULE_CREATED = 4;
 *     RTP_IFP_DELETE_SENDER_MODULE = 5;
 *     RTP_IFP_SENDER_MODULE_DELETED = 6;
 *     RTP_IFP_SENDER_CONTROL = 7;
 *     RTP_IFP_SENDER_STATUS = 8;
 *     RTP_IFP_LEAVE_SESSION = 9;
 *     RTP_IFP_SESSION_LEFT = 10;
 * }
 * 
 * //
 * // The next classes are used for communication between an ~RTPApplication
 * // and an RTPLayer module. Its offers functionality for starting and stopping of an
 * // rtp session, transmission of files and feedback about the success of the
 * // operations.
 * </pre>
 */
enum RTP_IFP_TYPE {
    RTP_IFP_ENTER_SESSION = 1,
    RTP_IFP_SESSION_ENTERED = 2,
    RTP_IFP_CREATE_SENDER_MODULE = 3,
    RTP_IFP_SENDER_MODULE_CREATED = 4,
    RTP_IFP_DELETE_SENDER_MODULE = 5,
    RTP_IFP_SENDER_MODULE_DELETED = 6,
    RTP_IFP_SENDER_CONTROL = 7,
    RTP_IFP_SENDER_STATUS = 8,
    RTP_IFP_LEAVE_SESSION = 9,
    RTP_IFP_SESSION_LEFT = 10
};

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:60</tt> by nedtool.
 * <pre>
 * message RTPControlMsg
 * {
 * }
 * </pre>
 */
class INET_API RTPControlMsg : public ::cMessage
{
  protected:

  private:
    void copy(const RTPControlMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPControlMsg&);

  public:
    RTPControlMsg(const char *name=NULL, int kind=0);
    RTPControlMsg(const RTPControlMsg& other);
    virtual ~RTPControlMsg();
    RTPControlMsg& operator=(const RTPControlMsg& other);
    virtual RTPControlMsg *dup() const {return new RTPControlMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPControlMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPControlMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:65</tt> by nedtool.
 * <pre>
 * // base class
 * class RTPControlInfo
 * {
 *     short type @enum(RTP_IFP_TYPE);
 * }
 * </pre>
 */
class INET_API RTPControlInfo : public ::cObject
{
  protected:
    short type_var;

  private:
    void copy(const RTPControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPControlInfo&);

  public:
    RTPControlInfo();
    RTPControlInfo(const RTPControlInfo& other);
    virtual ~RTPControlInfo();
    RTPControlInfo& operator=(const RTPControlInfo& other);
    virtual RTPControlInfo *dup() const {return new RTPControlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getType() const;
    virtual void setType(short type);
};

inline void doPacking(cCommBuffer *b, RTPControlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPControlInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:71</tt> by nedtool.
 * <pre>
 * // base class
 * class RTPSessionControlInfo extends RTPControlInfo
 * {
 *     uint32 ssrc;
 * }
 * </pre>
 */
class INET_API RTPSessionControlInfo : public ::inet::rtp::RTPControlInfo
{
  protected:
    uint32 ssrc_var;

  private:
    void copy(const RTPSessionControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPSessionControlInfo&);

  public:
    RTPSessionControlInfo();
    RTPSessionControlInfo(const RTPSessionControlInfo& other);
    virtual ~RTPSessionControlInfo();
    RTPSessionControlInfo& operator=(const RTPSessionControlInfo& other);
    virtual RTPSessionControlInfo *dup() const {return new RTPSessionControlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint32 getSsrc() const;
    virtual void setSsrc(uint32 ssrc);
};

inline void doPacking(cCommBuffer *b, RTPSessionControlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPSessionControlInfo& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:78</tt> by nedtool.
 * <pre>
 * // App to ~RTP
 * class RTPCIEnterSession extends RTPControlInfo
 * {
 *     type = RTP_IFP_ENTER_SESSION;
 *     string commonName;
 *     string profileName;
 *     int bandwidth;
 *     IPv4Address destinationAddress;
 *     int port;
 * }
 * </pre>
 */
class INET_API RTPCIEnterSession : public ::inet::rtp::RTPControlInfo
{
  protected:
    opp_string commonName_var;
    opp_string profileName_var;
    int bandwidth_var;
    IPv4Address destinationAddress_var;
    int port_var;

  private:
    void copy(const RTPCIEnterSession& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCIEnterSession&);

  public:
    RTPCIEnterSession();
    RTPCIEnterSession(const RTPCIEnterSession& other);
    virtual ~RTPCIEnterSession();
    RTPCIEnterSession& operator=(const RTPCIEnterSession& other);
    virtual RTPCIEnterSession *dup() const {return new RTPCIEnterSession(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getCommonName() const;
    virtual void setCommonName(const char * commonName);
    virtual const char * getProfileName() const;
    virtual void setProfileName(const char * profileName);
    virtual int getBandwidth() const;
    virtual void setBandwidth(int bandwidth);
    virtual IPv4Address& getDestinationAddress();
    virtual const IPv4Address& getDestinationAddress() const {return const_cast<RTPCIEnterSession*>(this)->getDestinationAddress();}
    virtual void setDestinationAddress(const IPv4Address& destinationAddress);
    virtual int getPort() const;
    virtual void setPort(int port);
};

inline void doPacking(cCommBuffer *b, RTPCIEnterSession& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCIEnterSession& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:89</tt> by nedtool.
 * <pre>
 * // ~RTP to App
 * class RTPCISessionEntered extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_SESSION_ENTERED;
 * }
 * </pre>
 */
class INET_API RTPCISessionEntered : public ::inet::rtp::RTPSessionControlInfo
{
  protected:

  private:
    void copy(const RTPCISessionEntered& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCISessionEntered&);

  public:
    RTPCISessionEntered();
    RTPCISessionEntered(const RTPCISessionEntered& other);
    virtual ~RTPCISessionEntered();
    RTPCISessionEntered& operator=(const RTPCISessionEntered& other);
    virtual RTPCISessionEntered *dup() const {return new RTPCISessionEntered(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPCISessionEntered& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCISessionEntered& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:95</tt> by nedtool.
 * <pre>
 * // App to ~RTP
 * class RTPCISenderControl extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_SENDER_CONTROL;
 *     // from ~RTPSenderControlMessage:
 *     short command @enum(RTPSenderControlMessageCommands);
 *     float commandParameter1;
 *     float commandParameter2;
 * }
 * </pre>
 */
class INET_API RTPCISenderControl : public ::inet::rtp::RTPSessionControlInfo
{
  protected:
    short command_var;
    float commandParameter1_var;
    float commandParameter2_var;

  private:
    void copy(const RTPCISenderControl& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCISenderControl&);

  public:
    RTPCISenderControl();
    RTPCISenderControl(const RTPCISenderControl& other);
    virtual ~RTPCISenderControl();
    RTPCISenderControl& operator=(const RTPCISenderControl& other);
    virtual RTPCISenderControl *dup() const {return new RTPCISenderControl(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getCommand() const;
    virtual void setCommand(short command);
    virtual float getCommandParameter1() const;
    virtual void setCommandParameter1(float commandParameter1);
    virtual float getCommandParameter2() const;
    virtual void setCommandParameter2(float commandParameter2);
};

inline void doPacking(cCommBuffer *b, RTPCISenderControl& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCISenderControl& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:105</tt> by nedtool.
 * <pre>
 * // ~RTP to App
 * class RTPCISenderStatus extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_SENDER_STATUS;
 *     // from ~RTPSenderStatusMessage:
 *     short status @enum(RTPSenderStatus);
 *     uint32 timeStamp;
 * }
 * </pre>
 */
class INET_API RTPCISenderStatus : public ::inet::rtp::RTPSessionControlInfo
{
  protected:
    short status_var;
    uint32 timeStamp_var;

  private:
    void copy(const RTPCISenderStatus& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCISenderStatus&);

  public:
    RTPCISenderStatus();
    RTPCISenderStatus(const RTPCISenderStatus& other);
    virtual ~RTPCISenderStatus();
    RTPCISenderStatus& operator=(const RTPCISenderStatus& other);
    virtual RTPCISenderStatus *dup() const {return new RTPCISenderStatus(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getStatus() const;
    virtual void setStatus(short status);
    virtual uint32 getTimeStamp() const;
    virtual void setTimeStamp(uint32 timeStamp);
};

inline void doPacking(cCommBuffer *b, RTPCISenderStatus& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCISenderStatus& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:114</tt> by nedtool.
 * <pre>
 * // App to ~RTP
 * class RTPCILeaveSession extends RTPControlInfo
 * {
 *     type = RTP_IFP_LEAVE_SESSION;
 *     // TODO do I need any sesson identifier?
 * }
 * </pre>
 */
class INET_API RTPCILeaveSession : public ::inet::rtp::RTPControlInfo
{
  protected:

  private:
    void copy(const RTPCILeaveSession& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCILeaveSession&);

  public:
    RTPCILeaveSession();
    RTPCILeaveSession(const RTPCILeaveSession& other);
    virtual ~RTPCILeaveSession();
    RTPCILeaveSession& operator=(const RTPCILeaveSession& other);
    virtual RTPCILeaveSession *dup() const {return new RTPCILeaveSession(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPCILeaveSession& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCILeaveSession& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:121</tt> by nedtool.
 * <pre>
 * // ~RTP to App
 * class RTPCISessionLeft extends RTPControlInfo
 * {
 *     type = RTP_IFP_SESSION_LEFT;
 *     // TODO do I need any sesson identifier?
 * }
 * </pre>
 */
class INET_API RTPCISessionLeft : public ::inet::rtp::RTPControlInfo
{
  protected:

  private:
    void copy(const RTPCISessionLeft& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCISessionLeft&);

  public:
    RTPCISessionLeft();
    RTPCISessionLeft(const RTPCISessionLeft& other);
    virtual ~RTPCISessionLeft();
    RTPCISessionLeft& operator=(const RTPCISessionLeft& other);
    virtual RTPCISessionLeft *dup() const {return new RTPCISessionLeft(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPCISessionLeft& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCISessionLeft& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:128</tt> by nedtool.
 * <pre>
 * // App to ~RTP
 * class RTPCICreateSenderModule extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_CREATE_SENDER_MODULE;
 *     int payloadType;
 *     string fileName;
 * }
 * </pre>
 */
class INET_API RTPCICreateSenderModule : public ::inet::rtp::RTPSessionControlInfo
{
  protected:
    int payloadType_var;
    opp_string fileName_var;

  private:
    void copy(const RTPCICreateSenderModule& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCICreateSenderModule&);

  public:
    RTPCICreateSenderModule();
    RTPCICreateSenderModule(const RTPCICreateSenderModule& other);
    virtual ~RTPCICreateSenderModule();
    RTPCICreateSenderModule& operator=(const RTPCICreateSenderModule& other);
    virtual RTPCICreateSenderModule *dup() const {return new RTPCICreateSenderModule(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPayloadType() const;
    virtual void setPayloadType(int payloadType);
    virtual const char * getFileName() const;
    virtual void setFileName(const char * fileName);
};

inline void doPacking(cCommBuffer *b, RTPCICreateSenderModule& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCICreateSenderModule& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:136</tt> by nedtool.
 * <pre>
 * // ~RTP to App
 * class RTPCISenderModuleCreated extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_SENDER_MODULE_CREATED;
 * }
 * </pre>
 */
class INET_API RTPCISenderModuleCreated : public ::inet::rtp::RTPSessionControlInfo
{
  protected:

  private:
    void copy(const RTPCISenderModuleCreated& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCISenderModuleCreated&);

  public:
    RTPCISenderModuleCreated();
    RTPCISenderModuleCreated(const RTPCISenderModuleCreated& other);
    virtual ~RTPCISenderModuleCreated();
    RTPCISenderModuleCreated& operator=(const RTPCISenderModuleCreated& other);
    virtual RTPCISenderModuleCreated *dup() const {return new RTPCISenderModuleCreated(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPCISenderModuleCreated& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCISenderModuleCreated& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:142</tt> by nedtool.
 * <pre>
 * // App to ~RTP
 * class RTPCIDeleteSenderModule extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_DELETE_SENDER_MODULE;
 * }
 * </pre>
 */
class INET_API RTPCIDeleteSenderModule : public ::inet::rtp::RTPSessionControlInfo
{
  protected:

  private:
    void copy(const RTPCIDeleteSenderModule& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCIDeleteSenderModule&);

  public:
    RTPCIDeleteSenderModule();
    RTPCIDeleteSenderModule(const RTPCIDeleteSenderModule& other);
    virtual ~RTPCIDeleteSenderModule();
    RTPCIDeleteSenderModule& operator=(const RTPCIDeleteSenderModule& other);
    virtual RTPCIDeleteSenderModule *dup() const {return new RTPCIDeleteSenderModule(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPCIDeleteSenderModule& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCIDeleteSenderModule& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPInterfacePacket.msg:148</tt> by nedtool.
 * <pre>
 * // ~RTP to App
 * class RTPCISenderModuleDeleted extends RTPSessionControlInfo
 * {
 *     type = RTP_IFP_SENDER_MODULE_DELETED;
 * }
 * </pre>
 */
class INET_API RTPCISenderModuleDeleted : public ::inet::rtp::RTPSessionControlInfo
{
  protected:

  private:
    void copy(const RTPCISenderModuleDeleted& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPCISenderModuleDeleted&);

  public:
    RTPCISenderModuleDeleted();
    RTPCISenderModuleDeleted(const RTPCISenderModuleDeleted& other);
    virtual ~RTPCISenderModuleDeleted();
    RTPCISenderModuleDeleted& operator=(const RTPCISenderModuleDeleted& other);
    virtual RTPCISenderModuleDeleted *dup() const {return new RTPCISenderModuleDeleted(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, RTPCISenderModuleDeleted& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPCISenderModuleDeleted& obj) {obj.parsimUnpack(b);}

} // namespace rtp
} // namespace inet

#endif // ifndef _INET__RTP_RTPINTERFACEPACKET_M_H_

