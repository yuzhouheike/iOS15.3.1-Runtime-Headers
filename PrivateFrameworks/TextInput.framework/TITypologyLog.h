/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyLog : NSObject <NSCopying> {
    NSString * _buildVersion;
    NSString * _clientIdentifier;
    NSDictionary * _config;
    NSDate * _date;
    <TITypologyLogDelegate> * _delegate;
    TIKeyboardState * _lastKeyboardState;
    NSMutableSet * _loggedRecordClasses;
    unsigned long long  _partIndex;
    TIRollingLog * _records;
    NSString * _systemVersion;
    TIRollingLog * _traceLog;
    NSUUID * _uuid;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSDictionary *config;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) <TITypologyLogDelegate> *delegate;
@property (nonatomic, retain) TIKeyboardState *lastKeyboardState;
@property (nonatomic, retain) NSMutableSet *loggedRecordClasses;
@property (nonatomic, readonly) unsigned long long maxNumRecords;
@property (nonatomic, readonly) unsigned long long numRecords;
@property (nonatomic, readonly) unsigned long long partIndex;
@property (nonatomic, readonly) TIRollingLog *records;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) TIRollingLog *traceLog;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (void)_logRecord:(id)arg1 trace:(id)arg2;
- (id)buildVersion;
- (id)clientIdentifier;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)delegate;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(id /* block */)arg1;
- (void)enumerateRecordsWithBlock:(id /* block */)arg1;
- (void)enumerateRecordsWithBlockIncludingStop:(id /* block */)arg1;
- (id)filename;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithTypologyLog:(id)arg1;
- (id)initWithUUID:(id)arg1 partIndex:(unsigned long long)arg2 date:(id)arg3 systemVersion:(id)arg4 buildVersion:(id)arg5 clientIdentifier:(id)arg6 config:(id)arg7;
- (id)lastKeyboardState;
- (void)logRecord:(id)arg1;
- (void)logRecord:(id)arg1 trace:(id)arg2;
- (void)logToHumanReadableTrace:(id)arg1;
- (id)loggedRecordClasses;
- (bool)loggedRecordOfClass:(Class)arg1;
- (unsigned long long)maxNumRecords;
- (unsigned long long)numRecords;
- (unsigned long long)partIndex;
- (id)propertyList;
- (id)recordMatchingUUID:(id)arg1;
- (id)recordSummary;
- (id)recordUUIDsIncludedInRange:(id)arg1 endUUID:(id)arg2;
- (id)records;
- (id)recordsMatchingUUIDRange:(id)arg1 endUUID:(id)arg2;
- (void)setClientIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastKeyboardState:(id)arg1;
- (void)setLoggedRecordClasses:(id)arg1;
- (id)systemVersion;
- (id)textSummary;
- (id)timestamp;
- (id)traceLog;
- (id)uuid;
- (unsigned long long)version;

@end
