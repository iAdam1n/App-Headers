/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIAdReplyRequest.h>

@class NSString;

@interface ECAPIUserConversationReplyRequest : ECAPIAdReplyRequest {

	long long _direction;
	NSString* _conversationId;

}

@property (assign,nonatomic) long long direction;                    //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) NSString * conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
-(id)httpBody;
-(id)initWithAdID:(id)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(void)setConversationId:(NSString *)arg1 ;
-(Class)responseClass;
-(NSString *)conversationId;
@end

