/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>

@class MNMessageSendingContext, NSString, NSError;

@interface MNMessageSendState : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNMessageSendingContext* _sending_sendingContext;
	NSString* _sent_messageId;
	unsigned long long _sent_methodType;
	NSString* _synced_messageId;
	unsigned long long _synced_methodType;
	NSError* _failed_error;
	unsigned long long _failed_errorType;

}
+(id)failedWithError:(id)arg1 errorType:(unsigned long long)arg2 ;
+(id)preparing;
+(id)queued;
+(id)sendingWithSendingContext:(id)arg1 ;
+(id)sentWithMessageId:(id)arg1 methodType:(unsigned long long)arg2 ;
+(id)syncedWithMessageId:(id)arg1 methodType:(unsigned long long)arg2 ;
+(id)published;
+(id)cancelled;
-(void)matchQueued:(/*^block*/id)arg1 preparing:(/*^block*/id)arg2 sending:(/*^block*/id)arg3 published:(/*^block*/id)arg4 sent:(/*^block*/id)arg5 synced:(/*^block*/id)arg6 failed:(/*^block*/id)arg7 cancelled:(/*^block*/id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

