/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAPEvalSetModeRequest : GEOXPCRequest <GEOXPCRequest> {
    bool  _desiredEnableState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool desiredEnableState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (bool)desiredEnableState;
- (void)encodeToXPCDictionary:(id)arg1;
- (bool)expectsReply;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setDesiredEnableState:(bool)arg1;

@end
