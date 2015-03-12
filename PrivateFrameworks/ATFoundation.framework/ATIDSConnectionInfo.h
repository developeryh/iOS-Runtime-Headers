/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATIDSSocket, IDSDevice, MSVXPCTransaction;

@interface ATIDSConnectionInfo : NSObject {
    unsigned int _connectionState;
    IDSDevice *_device;
    unsigned int _failureCount;
    int _priority;
    ATIDSSocket *_socket;
    double _wakeupTimestamp;
    MSVXPCTransaction *_xpcTransaction;
}

@property unsigned int connectionState;
@property(retain) IDSDevice * device;
@property unsigned int failureCount;
@property int priority;
@property(retain) ATIDSSocket * socket;
@property double wakeupTimestamp;

- (void).cxx_destruct;
- (unsigned int)connectionState;
- (void)dealloc;
- (id)device;
- (unsigned int)failureCount;
- (id)init;
- (int)priority;
- (void)setConnectionState:(unsigned int)arg1;
- (void)setDevice:(id)arg1;
- (void)setFailureCount:(unsigned int)arg1;
- (void)setPriority:(int)arg1;
- (void)setSocket:(id)arg1;
- (void)setWakeupTimestamp:(double)arg1;
- (id)socket;
- (double)wakeupTimestamp;

@end