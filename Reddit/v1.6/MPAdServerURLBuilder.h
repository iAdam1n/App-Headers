/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPAdServerURLBuilder : NSObject
+(id)URLWithAdUnitID:(id)arg1 keywords:(id)arg2 location:(id)arg3 testing:(BOOL)arg4 ;
+(id)URLWithAdUnitID:(id)arg1 keywords:(id)arg2 location:(id)arg3 versionParameterName:(id)arg4 version:(id)arg5 testing:(BOOL)arg6 desiredAssets:(id)arg7 ;
+(id)URLWithAdUnitID:(id)arg1 keywords:(id)arg2 location:(id)arg3 versionParameterName:(id)arg4 version:(id)arg5 testing:(BOOL)arg6 desiredAssets:(id)arg7 adSequence:(long long)arg8 ;
+(BOOL)advertisingTrackingEnabled;
+(id)queryParameterForKeywords:(id)arg1 ;
+(id)queryParameterForOrientation;
+(id)queryParameterForScaleFactor;
+(id)queryParameterForTimeZone;
+(id)queryParameterForLocation:(id)arg1 ;
+(id)queryParameterForMRAID;
+(id)queryParameterForDNT;
+(id)queryParameterForConnectionType;
+(id)queryParameterForApplicationVersion;
+(id)queryParameterForCarrierName;
+(id)queryParameterForISOCountryCode;
+(id)queryParameterForMobileNetworkCode;
+(id)queryParameterForMobileCountryCode;
+(id)queryParameterForDeviceName;
+(id)queryParameterForDesiredAdAssets:(id)arg1 ;
+(id)queryParameterForAdSequence:(long long)arg1 ;
+(id)queryParameterForPhysicalScreenSize;
+(id)queryParameterForBundleIdentifier;
@end
