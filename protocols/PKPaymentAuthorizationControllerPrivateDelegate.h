/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationControllerPrivateDelegate <NSObject>

@optional

- (void)paymentAuthorizationController:(void *)arg1 didAuthorizeContextWithHandler:(void *)arg2; // needs 2 arg types, found 7: PKPaymentAuthorizationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationController:(void *)arg1 didAuthorizeDisbursementVoucher:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKDisbursementVoucher *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationController:(void *)arg1 didAuthorizePeerPaymentQuote:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKAuthorizedPeerPaymentQuote *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAuthorizationResult *, void*
- (void)paymentAuthorizationController:(void *)arg1 didAuthorizePurchase:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKServiceProviderPurchase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationController:(void *)arg1 didRequestMerchantSession:(void *)arg2; // needs 2 arg types, found 8: PKPaymentAuthorizationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentMerchantSession *, NSError *, void*
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 willFinishWithError:(NSError *)arg2;

@end
