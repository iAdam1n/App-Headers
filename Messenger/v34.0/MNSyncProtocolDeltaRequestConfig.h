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

@interface MNSyncProtocolDeltaRequestConfig : FBValueObject <NSCopying> {

	NSString* _syncToken;
	long long _sequenceId;
	NSString* _queueType;
	NSNumber* _apiVersion;
	NSDictionary* _queueParams;

}

@property (nonatomic,copy,readonly) NSString * syncToken;                    //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                         //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * queueType;                    //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * apiVersion;                   //@synthesize apiVersion=_apiVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queueParams;              //@synthesize queueParams=_queueParams - In the implementation block
-(long long)sequenceId;
-(NSDictionary *)queueParams;
-(NSNumber *)apiVersion;
-(id)initWithSyncToken:(id)arg1 sequenceId:(long long)arg2 queueType:(id)arg3 apiVersion:(id)arg4 queueParams:(id)arg5 ;
-(NSString *)syncToken;
-(NSString *)queueType;
@end

