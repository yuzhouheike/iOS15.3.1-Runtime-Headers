/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFSharedConfidenceScoreMutation : NSObject <AFSharedConfidenceScoreMutating> {
    AFSharedConfidenceScore * _baseModel;
    unsigned long long  _confidenceScore;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSharedUserId : 1; 
        unsigned int hasConfidenceScore : 1; 
    }  _mutationFlags;
    NSString * _sharedUserId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setConfidenceScore:(unsigned long long)arg1;
- (void)setSharedUserId:(id)arg1;

@end
