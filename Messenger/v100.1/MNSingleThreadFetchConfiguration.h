/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSyncedThreadQuery;

@interface MNSingleThreadFetchConfiguration : FBValueObject <NSCopying> {

	BOOL _isQueryingOnlyForMessages;
	MNSyncedThreadQuery* _syncedThreadQuery;
	unsigned long long _numberOfMessagesToQuery;
	unsigned long long _baselineTimestamp;

}

@property (nonatomic,copy,readonly) MNSyncedThreadQuery * syncedThreadQuery;              //@synthesize syncedThreadQuery=_syncedThreadQuery - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMessagesToQuery;                //@synthesize numberOfMessagesToQuery=_numberOfMessagesToQuery - In the implementation block
@property (nonatomic,readonly) unsigned long long baselineTimestamp;                      //@synthesize baselineTimestamp=_baselineTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL isQueryingOnlyForMessages;                            //@synthesize isQueryingOnlyForMessages=_isQueryingOnlyForMessages - In the implementation block
-(MNSyncedThreadQuery *)syncedThreadQuery;
-(BOOL)isQueryingOnlyForMessages;
-(unsigned long long)numberOfMessagesToQuery;
-(unsigned long long)baselineTimestamp;
-(id)initWithSyncedThreadQuery:(id)arg1 numberOfMessagesToQuery:(unsigned long long)arg2 baselineTimestamp:(unsigned long long)arg3 isQueryingOnlyForMessages:(BOOL)arg4 ;
@end
