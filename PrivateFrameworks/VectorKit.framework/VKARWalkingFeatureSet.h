/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKARWalkingFeatureSet : NSObject {
    struct _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSArray *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _features;
    long long  _state;
    unsigned long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) NSArray *features;
@property long long state;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)features;
- (id)initWithFeatures:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (unsigned long long)uniqueIdentifier;

@end
