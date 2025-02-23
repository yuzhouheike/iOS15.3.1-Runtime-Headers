/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWURLSessionWebSocketTask : NWURLSessionTask {
    long long  _closeCode;
    NSData * _closeReason;
    long long  _maximumMessageSize;
}

@property (nonatomic, readonly) long long closeCode;
@property (nonatomic, readonly, copy) NSData *closeReason;
@property (nonatomic) long long maximumMessageSize;

- (void).cxx_destruct;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (long long)closeCode;
- (id)closeReason;
- (bool)isKindOfClass:(Class)arg1;
- (long long)maximumMessageSize;
- (void)receiveMessageWithCompletionHandler:(id /* block */)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendPingWithPongReceiveHandler:(id /* block */)arg1;
- (void)setMaximumMessageSize:(long long)arg1;

@end
