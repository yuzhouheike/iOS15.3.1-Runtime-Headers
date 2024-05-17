/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapAttribution : NSObject {
    UIImage * _providerImage;
    NSString * _providerName;
    NSString * _providerString;
    NSAttributedString * _string;
    NSURL * _url;
}

@property (nonatomic, readonly) UIImage *providerImage;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSString *providerString;
@property (nonatomic, readonly) NSAttributedString *string;
@property (nonatomic, readonly) NSURL *url;

+ (id)attributionUrlFromRegionalAttributions:(id)arg1;

- (void).cxx_destruct;
- (id)attributedStringWithImage:(id)arg1;
- (id)disclosureArrow;
- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 underlineText:(bool)arg3 applyLinkAttribution:(bool)arg4 scale:(double)arg5;
- (id)providerImage;
- (id)providerName;
- (id)providerString;
- (id)string;
- (id)url;

@end
