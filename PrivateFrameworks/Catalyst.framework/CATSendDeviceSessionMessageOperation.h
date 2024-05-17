/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATSendDeviceSessionMessageOperation : CATOperation {
    <CATSharingDeviceSession> * mDeviceSession;
    <CATDictionaryCodable> * mMessage;
}

- (void).cxx_destruct;
- (id)initWithDeviceSession:(id)arg1 message:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)sendMessage;

@end
