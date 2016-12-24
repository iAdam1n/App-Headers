/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBFacecastChatMessageEntity : NSObject {

	NSString* _authorID;
	NSString* _text;
	unsigned long long _role;
	NSString* _messageId;
	double _timestamp;

}

@property (nonatomic,copy,readonly) NSString * authorID;               //@synthesize authorID=_authorID - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                //@synthesize role=_role - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)authorID;
-(id)initWithAuthorID:(id)arg1 text:(id)arg2 role:(unsigned long long)arg3 messageId:(id)arg4 timestamp:(double)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(NSString *)text;
-(unsigned long long)role;
-(NSString *)messageId;
@end
