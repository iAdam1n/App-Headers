/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, FBMStringWithRedactedDescription;

@interface FBMThreadSnippet : FBValueObject <NSCopying, NSCoding> {

	BOOL _isUserText;
	NSString* _messageId;
	unsigned long long _timestamp;
	NSString* _senderId;
	FBMStringWithRedactedDescription* _text;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                  //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBMStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isUserText;                                           //@synthesize isUserText=_isUserText - In the implementation block
-(id)initWithMessageId:(id)arg1 timestamp:(unsigned long long)arg2 senderId:(id)arg3 text:(id)arg4 isUserText:(BOOL)arg5 ;
-(NSString *)senderId;
-(BOOL)isUserText;
-(NSString *)messageId;
-(unsigned long long)timestamp;
-(FBMStringWithRedactedDescription *)text;
@end

