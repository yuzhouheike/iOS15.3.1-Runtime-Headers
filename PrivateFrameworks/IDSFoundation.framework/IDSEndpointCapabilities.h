/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding> {
    BOOL  _doesNotSupportGFTCalls;
    BOOL  _ecVersion;
    BOOL  _isC2KEquipment;
    BOOL  _isGreenTea;
    BOOL  _nicknamesVersion;
    BOOL  _optionallyReceiveTypingIndicator;
    BOOL  _prefersSDRVideo;
    BOOL  _showPeerErrors;
    BOOL  _supportsAcknowledgementsV1;
    BOOL  _supportsActivitySharing;
    BOOL  _supportsAnimojiV2;
    BOOL  _supportsAudioMessagingV2;
    BOOL  _supportsAutoloopVideoV1;
    BOOL  _supportsBecaonSharingV2;
    BOOL  _supportsBeneficiaryInvites;
    BOOL  _supportsBubbleEditingV1;
    BOOL  _supportsCertifiedDeliveryV1;
    BOOL  _supportsChatAppsV1;
    BOOL  _supportsCo;
    BOOL  _supportsDeliveredQuietlyAndNotifyRecipient;
    BOOL  _supportsFMDV2;
    BOOL  _supportsFMFenceV1;
    BOOL  _supportsFullScreenMomentsV1;
    BOOL  _supportsFullScreenMomentsV2;
    BOOL  _supportsFullScreenMomentsV3;
    BOOL  _supportsGondola;
    BOOL  _supportsHDRVideo;
    BOOL  _supportsHEIFEncoding;
    BOOL  _supportsHarmony;
    BOOL  _supportsHomeKitResident;
    BOOL  _supportsImpactEffectsV1;
    BOOL  _supportsIncomingFindMyV1;
    BOOL  _supportsInlineAttachments;
    BOOL  _supportsInvisibleInkV1;
    BOOL  _supportsKeepReceipts;
    BOOL  _supportsKeySharing;
    BOOL  _supportsLocationSharing;
    BOOL  _supportsManateeForAppleCash;
    BOOL  _supportsMapsRoutingPathLeg;
    BOOL  _supportsMediaV2;
    BOOL  _supportsModernGFT;
    BOOL  _supportsOriginalTimestampOrderingV1;
    BOOL  _supportsPhotosExtensionV1;
    BOOL  _supportsPhotosExtensionV2;
    BOOL  _supportsProtobufPayloadDataV2;
    BOOL  _supportsRegionForAppleCash;
    BOOL  _supportsScreenTimeV2;
    BOOL  _supportsSecureLocationsV1;
    BOOL  _supportsStickersV1;
    BOOL  _supportsSyndicationActionsV1;
    BOOL  _supportsUWB;
    BOOL  _supportsUpdateAttachmentsV1;
}

+ (id)allowedCapabilities;
+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapabilitiesMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpointCapabilites:(id)arg1;
- (long long)valueForCapability:(id)arg1;

@end
