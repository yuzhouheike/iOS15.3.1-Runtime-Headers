/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIContactStoreSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;
- (bool)performSaveForMutableContact:(id)arg1 group:(id)arg2 container:(id)arg3 saveConfiguration:(id)arg4 issuedRequestIdentifiers:(id)arg5;

@end
