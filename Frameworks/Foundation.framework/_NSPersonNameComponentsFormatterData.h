/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {
    bool  _forceFamilyNameFirst;
    bool  _forceGivenNameFirst;
    bool  _ignoresFallbacks;
    NSLocale * _locale;
    NPNameParser * _nameParser;
    bool  _phonetic;
    long long  _style;
}

@property bool forceFamilyNameFirst;
@property bool forceGivenNameFirst;
@property bool ignoresFallbacks;
@property (copy) NSLocale *locale;
@property bool phonetic;
@property long long style;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceFamilyNameFirst;
- (bool)forceGivenNameFirst;
- (bool)ignoresFallbacks;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (bool)phonetic;
- (void)setForceFamilyNameFirst:(bool)arg1;
- (void)setForceGivenNameFirst:(bool)arg1;
- (void)setIgnoresFallbacks:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setPhonetic:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
