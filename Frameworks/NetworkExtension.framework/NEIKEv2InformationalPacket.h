/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2InformationalPacket : NEIKEv2Packet {
    NEIKEv2ConfigPayload * _config;
    NSArray * _deletes;
}

@property (retain) NEIKEv2ConfigPayload *config;
@property (retain) NSArray *deletes;
@property (readonly) bool isDeleteChild;
@property (readonly) bool isDeleteIKE;
@property (readonly) bool isMOBIKE;

+ (id)copyTypeDescription;
+ (id)createDeleteChild:(id)arg1;
+ (id)createDeleteIKE;
+ (id)createDeleteIKEResponse:(id)arg1;
+ (id)createDeleteResponse:(id)arg1 child:(id)arg2;
+ (id)createInformational;
+ (id)createInformationalPacketWithNATPayload:(id)arg1;
+ (id)createInformationalResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createMOBIKEPacketResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createNotifyPacketForType:(unsigned long long)arg1 data:(id)arg2;
+ (id)createUpdateAddressInitiator:(id)arg1;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (id)config;
- (id)deletes;
- (void)filloutPayloads;
- (void)gatherPayloads;
- (bool)isDeleteChild;
- (bool)isDeleteIKE;
- (bool)isMOBIKE;
- (void)setConfig:(id)arg1;
- (void)setDeletes:(id)arg1;
- (bool)validateDeleteChild:(id)arg1;
- (bool)validateDeleteIKE;
- (bool)validateInformational;
- (bool)validateMOBIKE:(id)arg1;
- (bool)validateUpdateAddresses:(id)arg1;

@end
