/* Generated by RuntimeBrowser.
 */

@protocol MNAudioProvider <NSObject>

@required

- (void)changeTransportType:(int)arg1;
- (void)changeVoiceGuidanceLevel:(unsigned long long)arg1 forTransportType:(int)arg2;
- (void)clearAllAnnouncements;
- (double)durationOf:(NSString *)arg1;
- (bool)isSpeaking;
- (void)speak:(void *)arg1 withVoiceGuidanceLevel:(void *)arg2 andCondition:(void *)arg3 usingShortPrompt:(void *)arg4 thenCallCompletion:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)stopSpeaking;
- (int)transportType;
- (bool)vibrateForShortPrompt:(unsigned long long)arg1;
- (bool)voiceGuidanceEnabled;
- (unsigned long long)voiceGuidanceLevel;

@end
