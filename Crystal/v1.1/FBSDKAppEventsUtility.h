/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:35 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBSDKAppEventsUtility : NSObject
+(id)persistenceFilePath:(id)arg1 ;
+(id)anonymousID;
+(id)retrievePersistedAnonymousID;
+(void)persistAnonymousID:(id)arg1 ;
+(BOOL)regexValidateIdentifier:(id)arg1 ;
+(void)clearLibraryFiles;
+(void)ensureOnMainThread;
+(id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(BOOL)arg2 shouldAccessAdvertisingID:(BOOL)arg3 ;
+(BOOL)validateIdentifier:(id)arg1 ;
+(void)logAndNotify:(id)arg1 ;
+(long long)unixTimeNow;
+(id)tokenStringToUseFor:(id)arg1 ;
+(id)flushReasonToString:(unsigned long long)arg1 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(BOOL)arg2 ;
+(unsigned long long)advertisingTrackingStatus;
+(id)advertiserID;
+(id)attributionID;
-(id)init;
@end

