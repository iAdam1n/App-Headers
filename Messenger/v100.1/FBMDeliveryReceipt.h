/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey, NSSet;

@interface FBMDeliveryReceipt : FBValueObject <NSCopying> {

	NSString* _senderId;
	FBMSyncedThreadKey* _threadKey;
	long long _timestamp;
	NSSet* _messageIds;
	unsigned long long _source;

}

@property (nonatomic,copy,readonly) NSString * senderId;                         //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * messageIds;                          //@synthesize messageIds=_messageIds - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                        //@synthesize source=_source - In the implementation block
-(NSString *)senderId;
-(NSSet *)messageIds;
-(id)initWithSenderId:(id)arg1 threadKey:(id)arg2 timestamp:(long long)arg3 messageIds:(id)arg4 source:(unsigned long long)arg5 ;
-(long long)timestamp;
-(unsigned long long)source;
-(FBMSyncedThreadKey *)threadKey;
@end
