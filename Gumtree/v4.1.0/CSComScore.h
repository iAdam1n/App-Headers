/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface CSComScore : NSObject
+(void)setAppContext;
+(void)setCustomerC2:(id)arg1 ;
+(void)setPublisherSecret:(id)arg1 ;
+(BOOL)isJailbroken;
+(id)customerC2;
+(id)publisherSecret;
+(id)measurementLabelOrder;
+(int)offlineTransmissionMode;
+(id)core;
+(id)label:(id)arg1 ;
+(void)onEnterForeground;
+(void)onExitForeground;
+(void)disableAutoUpdate;
+(void)setErrorHandlingEnabled:(BOOL)arg1 ;
+(BOOL)isErrorHandlingEnabled;
+(void)setOfflineURL:(id)arg1 ;
+(long long)previousGenesis;
+(id)autoStartLabel:(id)arg1 ;
+(void)onUxActive;
+(void)onUxInactive;
+(void)onUserInteraction;
+(void)enableAutoUpdate:(int)arg1 foregroundOnly:(BOOL)arg2 ;
+(BOOL)isAutoUpdateEnabled;
+(id)visitorID;
+(void)setVisitorID:(id)arg1 ;
+(id)autoStartLabels;
+(void)setAutoStartLabels:(id)arg1 ;
+(id)devModel;
+(BOOL)isKeepAliveEnabled;
+(long long)cacheFlushingInterval;
+(void)setCacheFlushingInterval:(long long)arg1 ;
+(BOOL)autoStartEnabled;
+(void)setAutoStartEnabled:(BOOL)arg1 ;
+(int)liveTransmissionMode;
+(void)setMeasurementLabelOrder:(id)arg1 ;
+(int)runsCount;
+(long long)coldStartId;
+(int)coldStartCount;
+(long long)installId;
+(long long)firstInstallId;
+(long long)genesis;
+(id)pixelURL;
+(void)waitForTasks;
+(id)setPixelURL:(id)arg1 ;
+(id)census;
+(void)startWithLabels:(id)arg1 ;
+(void)viewWithLabels:(id)arg1 ;
+(void)hiddenWithLabels:(id)arg1 ;
+(void)aggregateWithLabels:(id)arg1 ;
+(void)setAutoStartLabel:(id)arg1 value:(id)arg2 ;
+(void)setKeepAliveEnabled:(BOOL)arg1 ;
+(void)setCacheMaxSize:(int)arg1 ;
+(int)cacheMaxSize;
+(void)setCacheMaxBatchSize:(int)arg1 ;
+(int)cacheMaxBatchSize;
+(void)setCacheMaxFlushesInARow:(int)arg1 ;
+(int)cacheMaxFlushesInARow;
+(void)setCacheMinutesToRetry:(int)arg1 ;
+(int)cacheMinutesToRetry;
+(void)setCacheExpiryInDays:(int)arg1 ;
+(int)cacheExpiryInDays;
+(void)allowLiveTransmission:(int)arg1 ;
+(void)allowOfflineTransmission:(int)arg1 ;
+(id)crossPublisherId;
+(void)setDebug:(BOOL)arg1 ;
+(void)setLabel:(id)arg1 value:(id)arg2 ;
+(BOOL)enabled;
+(void)view;
+(void)setEnabled:(BOOL)arg1 ;
+(void)initialize;
+(void)setSecure:(BOOL)arg1 ;
+(BOOL)isSecure;
+(void)start;
+(void)update;
+(id)version;
+(void)flushCache;
+(void)setLabels:(id)arg1 ;
+(id)previousVersion;
+(void)hidden;
+(id)labels;
+(id)currentVersion;
+(void)setAppName:(id)arg1 ;
+(id)appName;
@end

