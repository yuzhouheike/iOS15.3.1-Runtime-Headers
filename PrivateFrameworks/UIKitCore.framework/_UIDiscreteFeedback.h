/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable> {
    bool  _highPriority;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)discreteFeedbackForType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)type;

- (id)_debugDictionary;
- (unsigned long long)_effectiveEventType;
- (unsigned int)_effectiveSystemSoundID;
- (id)_playableProtocol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (bool)isPlaying;
- (void)setType:(long long)arg1;
- (long long)type;

@end
