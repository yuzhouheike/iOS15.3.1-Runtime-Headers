/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isVoiceProcessingAGCEnabled, nonatomic) bool voiceProcessingAGCEnabled;
@property (getter=isVoiceProcessingBypassed, nonatomic) bool voiceProcessingBypassed;
@property (getter=isVoiceProcessingInputMuted, nonatomic) bool voiceProcessingInputMuted;
@property (nonatomic) float volume;

- (bool)isVoiceProcessingAGCEnabled;
- (bool)isVoiceProcessingBypassed;
- (bool)isVoiceProcessingInputMuted;
- (float)rate;
- (bool)setManualRenderingInputPCMFormat:(id)arg1 inputBlock:(id /* block */)arg2;
- (void)setRate:(float)arg1;
- (void)setVoiceProcessingAGCEnabled:(bool)arg1;
- (void)setVoiceProcessingBypassed:(bool)arg1;
- (void)setVoiceProcessingInputMuted:(bool)arg1;

@end
