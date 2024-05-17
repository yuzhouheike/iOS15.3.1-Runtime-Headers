/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardViewAppearFeedback : SFFeedback {
    SFCard * _card;
    NSString * _fbr;
    unsigned int  _level;
}

@property (nonatomic, retain) SFCard *card;
@property (nonatomic, copy) NSString *fbr;
@property (nonatomic) unsigned int level;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)card;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)level;
- (void)setCard:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setLevel:(unsigned int)arg1;

@end
