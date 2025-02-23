/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {
    PAAccessLogger * _accessLogger;
    NSString * _accessService;
    PAApplication * _accessor;
    NSObject<OS_tcc_identity> * _assumedIdentity;
    CNAuditToken * _cnAuditToken;
    unsigned long long  _greenTeaDiagnosticEventCounter;
    unsigned long long  _greenTeaDiagnosticLogFaultForEventCount;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    bool  _isAccessEventsDiagnosticsEnabled;
    bool  _isGreenTeaDiagnosticsEnabled;
    NSObject<OS_os_log> * _os_log;
    NSString * _processDescription;
}

@property (nonatomic, retain) PAAccessLogger *accessLogger;
@property (nonatomic, readonly) NSString *accessService;
@property (nonatomic, retain) PAApplication *accessor;
@property (nonatomic, readonly) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, readonly) CNAuditToken *cnAuditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long greenTeaDiagnosticEventCounter;
@property (nonatomic) unsigned long long greenTeaDiagnosticLogFaultForEventCount;
@property (nonatomic, readonly) struct ct_green_tea_logger_s { }*greenTeaLogger;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAccessEventsDiagnosticsEnabled;
@property (nonatomic, readonly) bool isGreenTeaDiagnosticsEnabled;
@property (nonatomic, readonly) NSObject<OS_os_log> *os_log;
@property (nonatomic, retain) NSString *processDescription;
@property (readonly) Class superclass;

+ (id)sharedInstanceForAddressBook;

- (void).cxx_destruct;
- (id)accessLogger;
- (id)accessService;
- (id)accessor;
- (id)accessorForAuditTokenValidatingAssumedIdentity;
- (id)accessorImpl;
- (id)assumedIdentity;
- (id)cnAuditToken;
- (void)dealloc;
- (void)deletingContactsData;
- (void)displayingOOPContactPicker;
- (unsigned long long)greenTeaDiagnosticEventCounter;
- (unsigned long long)greenTeaDiagnosticLogFaultForEventCount;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2 logCategory:(const char *)arg3;
- (bool)isAccessEventsDiagnosticsEnabled;
- (bool)isGreenTeaDiagnosticsEnabled;
- (void)logContactPickerAccessEvent;
- (void)logContactsDataAccessEvent;
- (void)logGreenTeaEvent:(id)arg1;
- (void)modifyingContactsData;
- (id)os_log;
- (id)processDescription;
- (id)processDescriptionImpl;
- (void)readAndTransmittingContactsData;
- (void)readingContactsData;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)setAccessLogger:(id)arg1;
- (void)setAccessor:(id)arg1;
- (void)setGreenTeaDiagnosticEventCounter:(unsigned long long)arg1;
- (void)setGreenTeaDiagnosticLogFaultForEventCount:(unsigned long long)arg1;
- (void)setProcessDescription:(id)arg1;
- (void)willLogContactPickerAccessEvent;
- (void)willLogContactsDataAccessEvent;
- (void)willNotLogContactPickerAccessEventAsLoggingDisabled;
- (void)willNotLogContactPickerAccessEventAsLoggingInProcess;
- (void)willNotLogContactsDataAccessEventAsLoggingDisabled;

@end
