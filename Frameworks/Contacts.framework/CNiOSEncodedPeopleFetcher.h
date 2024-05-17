/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {
    void * _addressBook;
    id /* block */  _addressBookCompletionHandler;
    CNContactFetchRequest * _contactFetchRequest;
    <CNEncodedFetchCursor> * _cursor;
    id /* block */  _cursorCompletionHandler;
    CNContactsEnvironment * _environment;
    <CNContactsLogger> * _logger;
    CNManagedConfiguration * _managedConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)fetchEncodedPeopleWithError:(id*)arg1 cancelationToken:(id)arg2 batchHandler:(id /* block */)arg3;
- (void)fetchNextBatchWithReply:(id /* block */)arg1;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 addressBookCompletionHandler:(id /* block */)arg4 cursorCompletionHandler:(id /* block */)arg5 environment:(id)arg6;

@end
