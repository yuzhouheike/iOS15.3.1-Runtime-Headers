/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding> {
    NSDictionary * _audioFileSettings;
}

@property (nonatomic, readonly) NSDictionary *audioFileSettings;
@property (nonatomic) long long gender;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long quality;

+ (id)currentLanguageCode;
+ (void)initialize;
+ (id)speechVoices;
+ (bool)supportsSecureCoding;
+ (id)voiceWithIdentifier:(id)arg1;
+ (id)voiceWithLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)audioFileSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
