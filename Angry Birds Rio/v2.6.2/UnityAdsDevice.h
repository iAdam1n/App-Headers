/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UnityAdsDevice : NSObject
+(BOOL)isJailbroken;
+(int)getIOSMajorVersion;
+(id)md5MACAddressString;
+(id)md5AdvertisingIdentifierString;
+(BOOL)canUseTracking;
+(id)analyticsMachineName;
+(id)currentConnectionType;
+(id)getNetworkType;
+(id)getDeviceModelAsStringComponents;
+(id)_md5StringFromString:(id)arg1 ;
+(id)_substringOfString:(id)arg1 toIndex:(long long)arg2 ;
+(void)updateConnectionType;
+(id)md5DeviceId;
+(BOOL)isSimulator;
+(id)advertisingIdentifier;
+(id)machineName;
+(id)macAddress;
+(id)softwareVersion;
+(BOOL)isEncrypted;
@end

