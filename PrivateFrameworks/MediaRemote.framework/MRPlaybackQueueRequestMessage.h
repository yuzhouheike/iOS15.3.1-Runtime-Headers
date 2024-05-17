/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) MRPlaybackQueueRequest *request;

- (id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2;
- (id)playerPath;
- (id)request;
- (unsigned long long)type;

@end
