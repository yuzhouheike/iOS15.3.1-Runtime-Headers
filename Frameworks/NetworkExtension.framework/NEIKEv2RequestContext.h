/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2RequestContext : NSObject {
    unsigned int  _powerAssertionID;
    NSString * _powerAssertionName;
    bool  _preventSleepUntilFinished;
    bool  _requestInitiator;
    int  _requestType;
}

@property (nonatomic) unsigned int powerAssertionID;
@property (nonatomic, retain) NSString *powerAssertionName;
@property (nonatomic) bool preventSleepUntilFinished;
@property (nonatomic) bool requestInitiator;
@property (nonatomic) int requestType;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithRequestType:(int)arg1;
- (unsigned int)powerAssertionID;
- (id)powerAssertionName;
- (bool)preventSleepUntilFinished;
- (void)releasePowerAssertionIfNeeded;
- (bool)requestInitiator;
- (int)requestType;
- (void)sendCallbackSuccess:(bool)arg1 session:(id)arg2;
- (void)setPowerAssertionID:(unsigned int)arg1;
- (void)setPowerAssertionName:(id)arg1;
- (void)setPreventSleepUntilFinished:(bool)arg1;
- (void)setRequestInitiator:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (void)takePowerAssertionIfNeededWithSession:(id)arg1;

@end
