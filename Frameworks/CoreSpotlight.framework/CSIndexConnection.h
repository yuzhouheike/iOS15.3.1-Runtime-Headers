/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSIndexConnection : CSXPCConnection {
    bool  _previouslyInitialized;
}

@property (nonatomic, readonly) bool previouslyInitialized;

+ (id)sharedConnection;

- (void)handleError:(id)arg1;
- (bool)previouslyInitialized;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;

@end
