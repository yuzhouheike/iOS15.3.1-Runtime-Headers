/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
 */

@interface HTPrefs : NSObject {
    struct __CFString { } * __htDomain;
    struct __CFString { } * __htTaskingDomain;
    NSDictionary * __installedHTProfileDict;
    bool  __isInternalNoOverride;
    NSObject<OS_dispatch_queue> * __prefsQueue;
    NSString * __profilePath;
    double  _appActivationLoggingCPUUtilizationThresholdMSec;
    bool  _appActivationLoggingEnabled;
    unsigned int  _appActivationLoggingMaxActivationLimit;
    bool  _customerModeEnabled;
    bool  _eplEnabled;
    bool  _eplEnabledProfile;
    double  _eplTimeoutTimestampSec;
    int  _fenceHangDailyLogLimit;
    bool  _fenceTrackingEnabled;
    bool  _forceQuitDetectionEnabled;
    unsigned int  _forceQuitDetectionThresholdMSec;
    bool  _hangtracerDaemonEnabled;
    bool  _hasInternalSettings;
    bool  _htTailspinEnabled;
    bool  _hudEnabled;
    unsigned int  _hudThresholdMSec;
    bool  _isInternal;
    bool  _keepTailspinsLegacy;
    bool  _memoryLoggingEnabled;
    unsigned int  _memoryLoggingIntervalSec;
    bool  _pdseAllowEnableTailspin;
    bool  _pdseCATailspinKillSwitch;
    int  _pdseCATailspinPeriodDays;
    int  _pdseHTPeriodDays;
    bool  _pdseHTRateOnlyKillSwitch;
    int  _pdseHTRateOnlyPeriodDays;
    bool  _pdseHTThirdPartyKillSwitch;
    int  _pdseHTThirdPartyPeriodDays;
    bool  _pdseHangTracerKillSwitch;
    bool  _pdseSentryKillSwitch;
    int  _pdseSentryPeriodDays;
    struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; } * _prefInitList;
    unsigned long long  _reportPeriodMATU;
    int  _runLoopHangDailyLogLimit;
    int  _runLoopHangPerPeriodLogLimit;
    int  _runLoopLongHangDailyLogLimit;
    int  _runLoopMicroHangDailyLogLimit;
    unsigned long long  _runloopHangDurationThresholdMSec;
    double  _runloopHangPercentHeavyLogs;
    int  _runloopHangThirdPartyDailyLogLimit;
    unsigned long long  _runloopHangThirdPartyDurationThresholdMSec;
    unsigned long long  _runloopHangTimeoutDurationMSec;
    unsigned long long  _runloopLongHangDurationThresholdMSec;
    double  _samplingPercentForMicroHangs;
    unsigned long long  _savedTailspinMaxMB;
    bool  _shouldAllowSentryEnablement;
    bool  _shouldCollectOSSignposts;
    bool  _shouldCollectOSSignpostsDeferred;
    bool  _shouldCompressSavedTailspins;
    bool  _shouldIncludeDiskInfo;
    bool  _shouldIncludeDisplayData;
    bool  _shouldIncludeNetworkState;
    bool  _shouldPostHTPrefsChangedNotification;
    bool  _shouldSaveTailspins;
    bool  _shouldUploadToDiagPipe;
    int  _signpostMonitoringDailyLogLimit;
    bool  _signpostMonitoringEnabled;
    int  _signpostMonitoringPerPeriodLogLimit;
    int  _slowAppActivationDailyLogLimit;
    int  _slowAppActivationPerAppMaxLogLimit;
    bool  _slowAppActivationTailspinEnabled;
    unsigned long long  _slowAppActivationThresholdMSec;
    NSString * _tailspinSaveFormat;
    bool  _thirdPartyRunLoopHangLogsEnabled;
}

@property struct __CFString { }*_htDomain;
@property struct __CFString { }*_htTaskingDomain;
@property (retain) NSDictionary *_installedHTProfileDict;
@property bool _isInternalNoOverride;
@property (retain) NSObject<OS_dispatch_queue> *_prefsQueue;
@property (retain) NSString *_profilePath;
@property (readonly) double appActivationLoggingCPUUtilizationThresholdMSec;
@property (readonly) bool appActivationLoggingEnabled;
@property (readonly) unsigned int appActivationLoggingMaxActivationLimit;
@property (readonly) bool customerModeEnabled;
@property (readonly) bool eplEnabled;
@property (readonly) bool eplEnabledProfile;
@property (readonly) double eplTimeoutTimestampSec;
@property (readonly) int fenceHangDailyLogLimit;
@property (readonly) bool fenceTrackingEnabled;
@property (readonly) bool forceQuitDetectionEnabled;
@property (readonly) unsigned int forceQuitDetectionThresholdMSec;
@property (readonly) bool hangtracerDaemonEnabled;
@property (readonly) bool hasInternalSettings;
@property (readonly) bool htTailspinEnabled;
@property (readonly) bool hudEnabled;
@property (readonly) unsigned int hudThresholdMSec;
@property (readonly) bool isInternal;
@property bool keepTailspinsLegacy;
@property (readonly) bool memoryLoggingEnabled;
@property unsigned int memoryLoggingIntervalSec;
@property (readonly) bool pdseAllowEnableTailspin;
@property (readonly) bool pdseCATailspinKillSwitch;
@property (readonly) int pdseCATailspinPeriodDays;
@property (readonly) int pdseHTPeriodDays;
@property (readonly) bool pdseHTRateOnlyKillSwitch;
@property (readonly) int pdseHTRateOnlyPeriodDays;
@property (readonly) bool pdseHTThirdPartyKillSwitch;
@property (readonly) int pdseHTThirdPartyPeriodDays;
@property (readonly) bool pdseHangTracerKillSwitch;
@property (readonly) bool pdseSentryKillSwitch;
@property (readonly) int pdseSentryPeriodDays;
@property (readonly) struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*prefInitList;
@property (readonly) unsigned long long reportPeriodMATU;
@property (readonly) int runLoopHangDailyLogLimit;
@property (readonly) int runLoopHangPerPeriodLogLimit;
@property (readonly) int runLoopLongHangDailyLogLimit;
@property (readonly) int runLoopMicroHangDailyLogLimit;
@property (readonly) unsigned long long runloopHangDurationThresholdMSec;
@property (readonly) double runloopHangPercentHeavyLogs;
@property (readonly) int runloopHangThirdPartyDailyLogLimit;
@property (readonly) unsigned long long runloopHangThirdPartyDurationThresholdMSec;
@property (readonly) unsigned long long runloopHangTimeoutDurationMSec;
@property (readonly) unsigned long long runloopLongHangDurationThresholdMSec;
@property (readonly) double samplingPercentForMicroHangs;
@property (readonly) unsigned long long savedTailspinMaxMB;
@property bool shouldAllowSentryEnablement;
@property (readonly) bool shouldCollectOSSignposts;
@property (readonly) bool shouldCollectOSSignpostsDeferred;
@property (readonly) bool shouldCompressSavedTailspins;
@property (readonly) bool shouldIncludeDiskInfo;
@property (readonly) bool shouldIncludeDisplayData;
@property (readonly) bool shouldIncludeNetworkState;
@property bool shouldPostHTPrefsChangedNotification;
@property (readonly) bool shouldSaveTailspins;
@property (readonly) bool shouldUploadToDiagPipe;
@property (readonly) int signpostMonitoringDailyLogLimit;
@property (readonly) bool signpostMonitoringEnabled;
@property (readonly) int signpostMonitoringPerPeriodLogLimit;
@property (readonly) int slowAppActivationDailyLogLimit;
@property (readonly) int slowAppActivationPerAppMaxLogLimit;
@property (readonly) bool slowAppActivationTailspinEnabled;
@property (readonly) unsigned long long slowAppActivationThresholdMSec;
@property (retain) NSString *tailspinSaveFormat;
@property (readonly) bool thirdPartyRunLoopHangLogsEnabled;

+ (id)sharedPrefs;

- (void).cxx_destruct;
- (void)__createInternalSettings;
- (struct __CFString { }*)_htDomain;
- (struct __CFString { }*)_htTaskingDomain;
- (id)_installedHTProfileDict;
- (bool)_isInternalNoOverride;
- (id)_prefsQueue;
- (id)_profilePath;
- (void)_removeAllPrefs;
- (double)appActivationLoggingCPUUtilizationThresholdMSec;
- (bool)appActivationLoggingEnabled;
- (unsigned int)appActivationLoggingMaxActivationLimit;
- (bool)boolProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (bool)customerModeEnabled;
- (void)dealloc;
- (double)doubleProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)earlyInitNecessaryPrefs;
- (bool)eplEnabled;
- (bool)eplEnabledProfile;
- (double)eplTimeoutTimestampSec;
- (int)fenceHangDailyLogLimit;
- (bool)fenceTrackingEnabled;
- (bool)forceQuitDetectionEnabled;
- (unsigned int)forceQuitDetectionThresholdMSec;
- (bool)hangtracerDaemonEnabled;
- (bool)hasInternalSettings;
- (bool)htTailspinEnabled;
- (bool)hudEnabled;
- (unsigned int)hudThresholdMSec;
- (void)initBoolProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initDoubleProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initIntProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initNSStringProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initPropertyAppActivationLogging:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initPropertyHaveInternalSettings:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initPropertyIsInternal:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initPropertyMemoryLoggingIntervalSec:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initPropertyReportPeriod:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initPropertyShouldSaveAndCompressTailspins:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initUnsignedIntProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (void)initUnsignedLongProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (int)intProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (bool)isInternal;
- (bool)keepTailspinsLegacy;
- (bool)memoryLoggingEnabled;
- (unsigned int)memoryLoggingIntervalSec;
- (bool)pdseAllowEnableTailspin;
- (bool)pdseCATailspinKillSwitch;
- (int)pdseCATailspinPeriodDays;
- (int)pdseHTPeriodDays;
- (bool)pdseHTRateOnlyKillSwitch;
- (int)pdseHTRateOnlyPeriodDays;
- (bool)pdseHTThirdPartyKillSwitch;
- (int)pdseHTThirdPartyPeriodDays;
- (bool)pdseHangTracerKillSwitch;
- (bool)pdseSentryKillSwitch;
- (int)pdseSentryPeriodDays;
- (struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)prefInitList;
- (id)prefNamed:(const struct __CFString { }*)arg1 domain:(const struct __CFString { }*)arg2 profile:(id)arg3 matchingSelector:(SEL)arg4;
- (void)refreshHTPrefs;
- (unsigned long long)reportPeriodMATU;
- (int)runLoopHangDailyLogLimit;
- (int)runLoopHangPerPeriodLogLimit;
- (int)runLoopLongHangDailyLogLimit;
- (int)runLoopMicroHangDailyLogLimit;
- (unsigned long long)runloopHangDurationThresholdMSec;
- (double)runloopHangPercentHeavyLogs;
- (int)runloopHangThirdPartyDailyLogLimit;
- (unsigned long long)runloopHangThirdPartyDurationThresholdMSec;
- (unsigned long long)runloopHangTimeoutDurationMSec;
- (unsigned long long)runloopLongHangDurationThresholdMSec;
- (double)samplingPercentForMicroHangs;
- (unsigned long long)savedTailspinMaxMB;
- (void)setKeepTailspinsLegacy:(bool)arg1;
- (void)setMemoryLoggingIntervalSec:(unsigned int)arg1;
- (void)setShouldAllowSentryEnablement:(bool)arg1;
- (void)setShouldPostHTPrefsChangedNotification:(bool)arg1;
- (void)setTailspinSaveFormat:(id)arg1;
- (void)set_htDomain:(struct __CFString { }*)arg1;
- (void)set_htTaskingDomain:(struct __CFString { }*)arg1;
- (void)set_installedHTProfileDict:(id)arg1;
- (void)set_isInternalNoOverride:(bool)arg1;
- (void)set_prefsQueue:(id)arg1;
- (void)set_profilePath:(id)arg1;
- (void)setupPrefsWithQueue:(id)arg1;
- (void)setupPrefsWithQueue:(id)arg1 profilePath:(id)arg2 taskingDomainName:(struct __CFString { }*)arg3 hangtracerDomain:(struct __CFString { }*)arg4 setupInternalPrefs:(bool)arg5;
- (bool)shouldAllowSentryEnablement;
- (bool)shouldCollectOSSignposts;
- (bool)shouldCollectOSSignpostsDeferred;
- (bool)shouldCompressSavedTailspins;
- (bool)shouldIncludeDiskInfo;
- (bool)shouldIncludeDisplayData;
- (bool)shouldIncludeNetworkState;
- (bool)shouldPostHTPrefsChangedNotification;
- (bool)shouldSaveTailspins;
- (bool)shouldUploadToDiagPipe;
- (int)signpostMonitoringDailyLogLimit;
- (bool)signpostMonitoringEnabled;
- (int)signpostMonitoringPerPeriodLogLimit;
- (int)slowAppActivationDailyLogLimit;
- (int)slowAppActivationPerAppMaxLogLimit;
- (bool)slowAppActivationTailspinEnabled;
- (unsigned long long)slowAppActivationThresholdMSec;
- (id)stringProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (id)tailspinSaveFormat;
- (bool)thirdPartyRunLoopHangLogsEnabled;
- (unsigned int)unsignedIntProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;
- (unsigned long long)unsignedLongProperty:(struct HTPrefInit { struct __CFString {} *x1; void *x2; union HTPrefDefaultVal { bool x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; unsigned long long x_3_1_4; double x_3_1_5; struct __CFString {} *x_3_1_6; } x3; union HTPrefDefaultVal { bool x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; unsigned long long x_4_1_4; double x_4_1_5; struct __CFString {} *x_4_1_6; } x4; unsigned long long x5; SEL x6; }*)arg1;

@end
