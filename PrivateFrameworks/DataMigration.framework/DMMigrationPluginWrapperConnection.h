/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection * _connection;
    bool  _didReceivePid;
}

@property (nonatomic, readonly) bool didReceivePid;

+ (id)connection;

- (void).cxx_destruct;
- (bool)didReceivePid;
- (void)handleMessage:(id)arg1;
- (id)init;
- (void)invalidate;
- (int)pid;
- (void)resume;
- (void)runPluginAtPath:(id)arg1 withParameters:(id)arg2 completion:(id /* block */)arg3;

@end
