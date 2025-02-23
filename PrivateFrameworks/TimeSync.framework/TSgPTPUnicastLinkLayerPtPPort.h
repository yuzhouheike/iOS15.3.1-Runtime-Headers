/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort

+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfoForService:(id)arg1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andMACAddress:(char *)arg2;

- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithInterfaceName:(id)arg1 andMACAddress:(char *)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(id)arg1;
- (int)portType;

@end
