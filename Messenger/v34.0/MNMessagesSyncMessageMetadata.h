/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString, NSMutableArray;

@interface MNMessagesSyncMessageMetadata : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	NSString* __messageId;
	long long __offlineThreadingId;
	long long __actorFbId;
	long long __timestamp;
	BOOL __shouldBuzzDevice;
	NSString* __adminText;
	NSMutableArray* __tags;
	BOOL __threadKey_isset;
	BOOL __messageId_isset;
	BOOL __offlineThreadingId_isset;
	BOOL __actorFbId_isset;
	BOOL __timestamp_isset;
	BOOL __shouldBuzzDevice_isset;
	BOOL __adminText_isset;
	BOOL __tags_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (setter=setMessageId:,getter=messageId,nonatomic,retain) NSString * messageId; 
@property (assign,setter=setOfflineThreadingId:,getter=offlineThreadingId,nonatomic) long long offlineThreadingId; 
@property (assign,setter=setActorFbId:,getter=actorFbId,nonatomic) long long actorFbId; 
@property (assign,setter=setTimestamp:,getter=timestamp,nonatomic) long long timestamp; 
@property (assign,setter=setShouldBuzzDevice:,getter=shouldBuzzDevice,nonatomic) BOOL shouldBuzzDevice; 
@property (setter=setAdminText:,getter=adminText,nonatomic,retain) NSString * adminText; 
@property (setter=setTags:,getter=tags,nonatomic,retain) NSMutableArray * tags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(long long)offlineThreadingId;
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)setOfflineThreadingId:(long long)arg1 ;
-(BOOL)offlineThreadingIdIsSet;
-(void)unsetOfflineThreadingId;
-(void)setActorFbId:(long long)arg1 ;
-(BOOL)threadKeyIsSet;
-(void)unsetThreadKey;
-(long long)actorFbId;
-(BOOL)actorFbIdIsSet;
-(void)unsetActorFbId;
-(BOOL)messageIdIsSet;
-(void)unsetMessageId;
-(BOOL)timestampIsSet;
-(void)unsetTimestamp;
-(void)setShouldBuzzDevice:(BOOL)arg1 ;
-(void)setAdminText:(NSString *)arg1 ;
-(id)initWithThreadKey:(id)arg1 messageId:(id)arg2 offlineThreadingId:(long long)arg3 actorFbId:(long long)arg4 timestamp:(long long)arg5 shouldBuzzDevice:(BOOL)arg6 adminText:(id)arg7 tags:(id)arg8 ;
-(BOOL)shouldBuzzDevice;
-(BOOL)shouldBuzzDeviceIsSet;
-(void)unsetShouldBuzzDevice;
-(NSString *)adminText;
-(BOOL)adminTextIsSet;
-(void)unsetAdminText;
-(BOOL)tagsIsSet;
-(void)unsetTags;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(void)validate;
-(NSMutableArray *)tags;
-(void)setTags:(NSMutableArray *)arg1 ;
-(void)write:(id)arg1 ;
-(MNMessagesSyncThreadKey *)threadKey;
@end

