/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface MNSyncProtocolQueueRequestConfig : FBValueObject <NSCopying> {

	long long _sequenceId;
	NSString* _queueType;
	NSNumber* _apiVersion;
	NSDictionary* _queueParams;
	NSString* _entityFBID;

}

@property (nonatomic,readonly) long long sequenceId;                         //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * queueType;                    //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * apiVersion;                   //@synthesize apiVersion=_apiVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queueParams;              //@synthesize queueParams=_queueParams - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityFBID;                   //@synthesize entityFBID=_entityFBID - In the implementation block
-(long long)sequenceId;
-(NSDictionary *)queueParams;
-(NSNumber *)apiVersion;
-(id)initWithSequenceId:(long long)arg1 queueType:(id)arg2 apiVersion:(id)arg3 queueParams:(id)arg4 entityFBID:(id)arg5 ;
-(NSString *)entityFBID;
-(NSString *)queueType;
@end

