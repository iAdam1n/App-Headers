/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface MNSyncProtocolDeltaRequestConfig : FBValueObject <NSCopying> {

	NSString* _syncToken;
	long long _sequenceId;
	NSString* _queueType;
	NSNumber* _apiVersion;
	NSDictionary* _queueParams;
	NSString* _entityFBID;

}

@property (nonatomic,copy,readonly) NSString * syncToken;                    //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                         //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * queueType;                    //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * apiVersion;                   //@synthesize apiVersion=_apiVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queueParams;              //@synthesize queueParams=_queueParams - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityFBID;                   //@synthesize entityFBID=_entityFBID - In the implementation block
-(NSDictionary *)queueParams;
-(long long)sequenceId;
-(id)initWithSyncToken:(id)arg1 sequenceId:(long long)arg2 queueType:(id)arg3 apiVersion:(id)arg4 queueParams:(id)arg5 entityFBID:(id)arg6 ;
-(NSString *)entityFBID;
-(NSString *)queueType;
-(NSString *)syncToken;
-(NSNumber *)apiVersion;
@end
