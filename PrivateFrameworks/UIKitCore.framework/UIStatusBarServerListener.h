/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarServerListener : NSObject {
    NSObject<OS_dispatch_mach> * _channel;
    NSMutableArray * _clientPorts;
    struct { 
        bool itemIsEnabled[44]; 
        BOOL timeString[64]; 
        BOOL shortTimeString[64]; 
        BOOL dateString[256]; 
        int gsmSignalStrengthRaw; 
        int secondaryGsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        int secondaryGsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL secondaryServiceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL secondaryServiceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        unsigned int secondaryServiceContentType; 
        unsigned int cellLowDataModeActive : 1; 
        unsigned int secondaryCellLowDataModeActive : 1; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int wifiLowDataModeActive : 1; 
        unsigned int dataNetworkType; 
        unsigned int secondaryDataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 2; 
        unsigned int voiceControlIconType : 2; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int radarAvailable : 1; 
        unsigned int announceNotificationsAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
        unsigned int wifiSearching : 1; 
        double backgroundActivityDisplayStartDate; 
        unsigned int shouldShowEmergencyOnlyStatus : 1; 
        unsigned int secondaryCellularConfigured : 1; 
        BOOL primaryServiceBadgeString[100]; 
        BOOL secondaryServiceBadgeString[100]; 
        BOOL quietModeImage[256]; 
        BOOL quietModeName[256]; 
    }  _composedStatusBarData;
    bool  _composedStatusBarDataValid;
    struct __CFDictionary { } * _doubleHeightStatusStrings;
    NSMutableDictionary * _glowAnimationEndTimes;
    struct __CFDictionary { } * _glowAnimationStates;
    struct { 
        bool overrideItemIsEnabled[44]; 
        unsigned int overrideTimeString : 1; 
        unsigned int overrideDateString : 1; 
        unsigned int overrideGsmSignalStrengthRaw : 1; 
        unsigned int overrideSecondaryGsmSignalStrengthRaw : 1; 
        unsigned int overrideGsmSignalStrengthBars : 1; 
        unsigned int overrideSecondaryGsmSignalStrengthBars : 1; 
        unsigned int overrideServiceString : 1; 
        unsigned int overrideSecondaryServiceString : 1; 
        unsigned int overrideServiceImages : 2; 
        unsigned int overrideOperatorDirectory : 1; 
        unsigned int overrideServiceContentType : 1; 
        unsigned int overrideSecondaryServiceContentType : 1; 
        unsigned int overrideWifiSignalStrengthRaw : 1; 
        unsigned int overrideWifiSignalStrengthBars : 1; 
        unsigned int overrideDataNetworkType : 1; 
        unsigned int overrideSecondaryDataNetworkType : 1; 
        unsigned int disallowsCellularDataNetworkTypes : 1; 
        unsigned int overrideBatteryCapacity : 1; 
        unsigned int overrideBatteryState : 1; 
        unsigned int overrideBatteryDetailString : 1; 
        unsigned int overrideBluetoothBatteryCapacity : 1; 
        unsigned int overrideThermalColor : 1; 
        unsigned int overrideSlowActivity : 1; 
        unsigned int overrideActivityDisplayId : 1; 
        unsigned int overrideBluetoothConnected : 1; 
        unsigned int overrideBreadcrumb : 1; 
        unsigned int overrideLock; 
        unsigned int overrideDisplayRawGSMSignal : 1; 
        unsigned int overrideDisplayRawWifiSignal : 1; 
        unsigned int overridePersonName : 1; 
        unsigned int overrideWifiLinkWarning : 1; 
        unsigned int overrideSecondaryCellularConfigured : 1; 
        unsigned int overridePrimaryServiceBadgeString : 1; 
        unsigned int overrideSecondaryServiceBadgeString : 1; 
        unsigned int overrideQuietModeImage : 1; 
        struct { 
            bool itemIsEnabled[44]; 
            BOOL timeString[64]; 
            BOOL shortTimeString[64]; 
            BOOL dateString[256]; 
            int gsmSignalStrengthRaw; 
            int secondaryGsmSignalStrengthRaw; 
            int gsmSignalStrengthBars; 
            int secondaryGsmSignalStrengthBars; 
            BOOL serviceString[100]; 
            BOOL secondaryServiceString[100]; 
            BOOL serviceCrossfadeString[100]; 
            BOOL secondaryServiceCrossfadeString[100]; 
            BOOL serviceImages[2][100]; 
            BOOL operatorDirectory[1024]; 
            unsigned int serviceContentType; 
            unsigned int secondaryServiceContentType; 
            unsigned int cellLowDataModeActive : 1; 
            unsigned int secondaryCellLowDataModeActive : 1; 
            int wifiSignalStrengthRaw; 
            int wifiSignalStrengthBars; 
            unsigned int wifiLowDataModeActive : 1; 
            unsigned int dataNetworkType; 
            unsigned int secondaryDataNetworkType; 
            int batteryCapacity; 
            unsigned int batteryState; 
            BOOL batteryDetailString[150]; 
            int bluetoothBatteryCapacity; 
            int thermalColor; 
            unsigned int thermalSunlightMode : 1; 
            unsigned int slowActivity : 1; 
            unsigned int syncActivity : 1; 
            BOOL activityDisplayId[256]; 
            unsigned int bluetoothConnected : 1; 
            unsigned int displayRawGSMSignal : 1; 
            unsigned int displayRawWifiSignal : 1; 
            unsigned int locationIconType : 2; 
            unsigned int voiceControlIconType : 2; 
            unsigned int quietModeInactive : 1; 
            unsigned int tetheringConnectionCount; 
            unsigned int batterySaverModeActive : 1; 
            unsigned int deviceIsRTL : 1; 
            unsigned int lock : 1; 
            BOOL breadcrumbTitle[256]; 
            BOOL breadcrumbSecondaryTitle[256]; 
            BOOL personName[100]; 
            unsigned int electronicTollCollectionAvailable : 1; 
            unsigned int radarAvailable : 1; 
            unsigned int announceNotificationsAvailable : 1; 
            unsigned int wifiLinkWarning : 1; 
            unsigned int wifiSearching : 1; 
            double backgroundActivityDisplayStartDate; 
            unsigned int shouldShowEmergencyOnlyStatus : 1; 
            unsigned int secondaryCellularConfigured : 1; 
            BOOL primaryServiceBadgeString[100]; 
            BOOL secondaryServiceBadgeString[100]; 
            BOOL quietModeImage[256]; 
            BOOL quietModeName[256]; 
        } values; 
    }  _overrides;
    NSMutableArray * _publishers;
    struct { 
        bool itemIsEnabled[44]; 
        BOOL timeString[64]; 
        BOOL shortTimeString[64]; 
        BOOL dateString[256]; 
        int gsmSignalStrengthRaw; 
        int secondaryGsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        int secondaryGsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL secondaryServiceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL secondaryServiceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        unsigned int secondaryServiceContentType; 
        unsigned int cellLowDataModeActive : 1; 
        unsigned int secondaryCellLowDataModeActive : 1; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int wifiLowDataModeActive : 1; 
        unsigned int dataNetworkType; 
        unsigned int secondaryDataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 2; 
        unsigned int voiceControlIconType : 2; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int radarAvailable : 1; 
        unsigned int announceNotificationsAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
        unsigned int wifiSearching : 1; 
        double backgroundActivityDisplayStartDate; 
        unsigned int shouldShowEmergencyOnlyStatus : 1; 
        unsigned int secondaryCellularConfigured : 1; 
        BOOL primaryServiceBadgeString[100]; 
        BOOL secondaryServiceBadgeString[100]; 
        BOOL quietModeImage[256]; 
        BOOL quietModeName[256]; 
    }  _statusBarData;
    NSObject<OS_dispatch_workloop> * _workloop;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addClient:(unsigned int)arg1;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStyleOverrides:(unsigned long long)arg1 forPublisher:(id)arg2;
- (void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(bool)arg2;
- (void)_broadcastStyleOverrides;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (bool)_glowAnimationStateForStyle:(long long)arg1;
- (bool)_permanentizeStatusBarOverrideData;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (void)_postGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
- (void)_postStatusBarData:(struct { bool x1[44]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; BOOL x54[100]; BOOL x55[100]; BOOL x56[256]; BOOL x57[256]; }*)arg1 actions:(int)arg2 animated:(bool)arg3;
- (void)_postStatusBarOverrideData:(struct { bool x1[44]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; struct { bool x_37_1_1[44]; BOOL x_37_1_2[64]; BOOL x_37_1_3[64]; BOOL x_37_1_4[256]; int x_37_1_5; int x_37_1_6; int x_37_1_7; int x_37_1_8; BOOL x_37_1_9[100]; BOOL x_37_1_10[100]; BOOL x_37_1_11[100]; BOOL x_37_1_12[100]; BOOL x_37_1_13[2][100]; BOOL x_37_1_14[1024]; unsigned int x_37_1_15; unsigned int x_37_1_16; unsigned int x_37_1_17 : 1; unsigned int x_37_1_18 : 1; int x_37_1_19; int x_37_1_20; unsigned int x_37_1_21 : 1; unsigned int x_37_1_22; unsigned int x_37_1_23; int x_37_1_24; unsigned int x_37_1_25; BOOL x_37_1_26[150]; int x_37_1_27; int x_37_1_28; unsigned int x_37_1_29 : 1; unsigned int x_37_1_30 : 1; unsigned int x_37_1_31 : 1; BOOL x_37_1_32[256]; unsigned int x_37_1_33 : 1; unsigned int x_37_1_34 : 1; unsigned int x_37_1_35 : 1; unsigned int x_37_1_36 : 2; unsigned int x_37_1_37 : 2; unsigned int x_37_1_38 : 1; unsigned int x_37_1_39; unsigned int x_37_1_40 : 1; unsigned int x_37_1_41 : 1; unsigned int x_37_1_42 : 1; BOOL x_37_1_43[256]; BOOL x_37_1_44[256]; BOOL x_37_1_45[100]; unsigned int x_37_1_46 : 1; } x37; }*)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeAnimationEndTimesForOverrides:(unsigned long long)arg1;
- (void)_removeClient:(struct __CFMachPort { }*)arg1;
- (void)_removePublisher:(struct __CFMachPort { }*)arg1;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(unsigned long long)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(unsigned long long)arg1;
- (struct { bool x1[44]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; BOOL x54[100]; BOOL x55[100]; BOOL x56[256]; BOOL x57[256]; }*)_statusBarData;
- (struct { bool x1[44]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 2; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; struct { bool x_37_1_1[44]; BOOL x_37_1_2[64]; BOOL x_37_1_3[64]; BOOL x_37_1_4[256]; int x_37_1_5; int x_37_1_6; int x_37_1_7; int x_37_1_8; BOOL x_37_1_9[100]; BOOL x_37_1_10[100]; BOOL x_37_1_11[100]; BOOL x_37_1_12[100]; BOOL x_37_1_13[2][100]; BOOL x_37_1_14[1024]; unsigned int x_37_1_15; unsigned int x_37_1_16; unsigned int x_37_1_17 : 1; unsigned int x_37_1_18 : 1; int x_37_1_19; int x_37_1_20; unsigned int x_37_1_21 : 1; unsigned int x_37_1_22; unsigned int x_37_1_23; int x_37_1_24; unsigned int x_37_1_25; BOOL x_37_1_26[150]; int x_37_1_27; int x_37_1_28; unsigned int x_37_1_29 : 1; unsigned int x_37_1_30 : 1; unsigned int x_37_1_31 : 1; BOOL x_37_1_32[256]; unsigned int x_37_1_33 : 1; unsigned int x_37_1_34 : 1; unsigned int x_37_1_35 : 1; unsigned int x_37_1_36 : 2; unsigned int x_37_1_37 : 2; unsigned int x_37_1_38 : 1; unsigned int x_37_1_39; unsigned int x_37_1_40 : 1; unsigned int x_37_1_41 : 1; unsigned int x_37_1_42 : 1; BOOL x_37_1_43[256]; BOOL x_37_1_44[256]; BOOL x_37_1_45[100]; unsigned int x_37_1_46 : 1; } x37; }*)_statusBarOverrideData;
- (unsigned long long)_styleOverrides;
- (void)async:(id /* block */)arg1;
- (id)init;

@end
