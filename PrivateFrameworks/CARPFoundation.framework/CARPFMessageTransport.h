/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CARPFoundation.framework/CARPFoundation
 */

@interface CARPFMessageTransport : CARPFObject {
    <CARPFMessageTransportDelegate> * _delegate;
}

@property <CARPFMessageTransportDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
