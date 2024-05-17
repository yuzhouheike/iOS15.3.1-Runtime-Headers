/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBCE1Input : NSObject <MLFeatureProvider> {
    MLMultiArray * _input;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput:(id)arg1;
- (id)input;
- (void)setInput:(id)arg1;

@end
