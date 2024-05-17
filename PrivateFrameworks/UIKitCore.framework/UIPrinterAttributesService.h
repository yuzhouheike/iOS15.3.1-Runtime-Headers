/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterAttributesService : NSObject {
    id /* block */  _completionHandler;
    PKPrinter * _printer;
    int  _printerWarningPollTime;
}

+ (id)instance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pollForPrinterWarningStatus;
- (void)startPollForPrinterWarningStatus:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopPrinterWarningPolling;

@end
