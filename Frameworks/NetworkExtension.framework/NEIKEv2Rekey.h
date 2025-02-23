/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2Rekey : NSObject <NSObject> {
    PCSimpleTimer * _childLifetime;
    int  _childLifetimeMinutes;
    NSTimer * _childLifetimeNStimer;
    id /* block */  _childRekeyHandler;
    PCSimpleTimer * _ikeLifetime;
    int  _ikeLifetimeMinutes;
    NSTimer * _ikeLifetimeNSTimer;
    id /* block */  _ikeRekeyHandler;
}

@property (retain) PCSimpleTimer *childLifetime;
@property int childLifetimeMinutes;
@property (retain) NSTimer *childLifetimeNStimer;
@property (copy) id /* block */ childRekeyHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PCSimpleTimer *ikeLifetime;
@property int ikeLifetimeMinutes;
@property (retain) NSTimer *ikeLifetimeNSTimer;
@property (copy) id /* block */ ikeRekeyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childLifetime;
- (int)childLifetimeMinutes;
- (id)childLifetimeNStimer;
- (id /* block */)childRekeyHandler;
- (void)clearTimers;
- (void)dealloc;
- (id)ikeLifetime;
- (int)ikeLifetimeMinutes;
- (id)ikeLifetimeNSTimer;
- (id /* block */)ikeRekeyHandler;
- (void)invokeChildRekeyHandler;
- (void)invokeIKERekeyHandler;
- (void)setChildLifetime:(id)arg1;
- (void)setChildLifetimeMinutes:(int)arg1;
- (void)setChildLifetimeNStimer:(id)arg1;
- (void)setChildRekeyHandler:(id /* block */)arg1;
- (void)setIkeLifetime:(id)arg1;
- (void)setIkeLifetimeMinutes:(int)arg1;
- (void)setIkeLifetimeNSTimer:(id)arg1;
- (void)setIkeRekeyHandler:(id /* block */)arg1;
- (void)startChildTimer:(int)arg1 timeoutHandler:(id /* block */)arg2;
- (void)startIKETimer:(int)arg1 timeoutHandler:(id /* block */)arg2;

@end
