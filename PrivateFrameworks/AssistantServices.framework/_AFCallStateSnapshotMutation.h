/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating> {
    AFCallStateSnapshot * _baseModel;
    unsigned long long  _callState;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasCallState : 1; 
        unsigned int hasOnSpeaker : 1; 
    }  _mutationFlags;
    bool  _onSpeaker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setCallState:(unsigned long long)arg1;
- (void)setOnSpeaker:(bool)arg1;

@end
