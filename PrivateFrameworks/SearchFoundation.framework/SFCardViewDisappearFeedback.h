/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardViewDisappearFeedback : SFFeedback {
    SFCard * _card;
    unsigned long long  _cardDisappearEvent;
}

@property (nonatomic, readonly) SFCard *card;
@property (nonatomic) unsigned long long cardDisappearEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)card;
- (unsigned long long)cardDisappearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCard:(id)arg1 event:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;
- (void)setCardDisappearEvent:(unsigned long long)arg1;

@end
