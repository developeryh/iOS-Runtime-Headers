/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NDBackgroundSessionProtocol>, NSError, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {
    unsigned long long _ident;
    NSError *_immediateError;
    <NDBackgroundSessionProtocol> *_remoteSession;
    bool_sentCancel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long ident;
@property(retain) NSError * immediateError;
@property(retain) <NDBackgroundSessionProtocol> * remoteSession;
@property(readonly) Class superclass;

- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_cancel;
- (void)_onqueue_connectionWaiting;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(id)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_didResume;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_disavow;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id)arg2;
- (id)_timingData;
- (void)dealloc;
- (unsigned long long)ident;
- (id)immediateError;
- (id)initWithBackgroundTask:(id)arg1;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (id)remoteSession;
- (void)setImmediateError:(id)arg1;
- (void)setRemoteSession:(id)arg1;
- (void)setTaskDescription:(id)arg1;

@end