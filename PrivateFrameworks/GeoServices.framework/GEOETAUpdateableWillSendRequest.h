/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAUpdateableWillSendRequest : GEOXPCRequest <GEOXPCRequest>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void)encodeToXPCDictionary:(id)arg1;
- (bool)expectsReply;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;

@end
