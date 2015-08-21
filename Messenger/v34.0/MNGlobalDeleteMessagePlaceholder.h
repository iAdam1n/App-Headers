/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, FBMThreadKey, FBMStringWithRedactedDescription;

@interface MNGlobalDeleteMessagePlaceholder : FBValueObject <NSCopying> {

	NSString* _messageId;
	FBMThreadKey* _threadKey;
	NSString* _senderId;
	FBMStringWithRedactedDescription* _text;
	unsigned long long _timestamp;
	long long _actionId;
	unsigned long long _contentType;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                             //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                  //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBMStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long actionId;                                        //@synthesize actionId=_actionId - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                            //@synthesize contentType=_contentType - In the implementation block
-(long long)actionId;
-(NSString *)senderId;
-(id)initWithMessageId:(id)arg1 threadKey:(id)arg2 senderId:(id)arg3 text:(id)arg4 timestamp:(unsigned long long)arg5 actionId:(long long)arg6 contentType:(unsigned long long)arg7 ;
-(NSString *)messageId;
-(unsigned long long)timestamp;
-(FBMStringWithRedactedDescription *)text;
-(FBMThreadKey *)threadKey;
-(unsigned long long)contentType;
@end

