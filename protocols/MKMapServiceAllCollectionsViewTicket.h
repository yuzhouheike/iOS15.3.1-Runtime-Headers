/* Generated by RuntimeBrowser.
 */

@protocol MKMapServiceAllCollectionsViewTicket <NSObject>

@required

- (void)cancel;
- (void)submitWithCallbackQueue:(void *)arg1 handler:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAllCollectionsViewResult *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAllCollectionsViewResult *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
