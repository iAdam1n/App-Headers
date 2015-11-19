/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSMutableArray, ECAPIUserConversation;

@interface ECAPIUserConversationDetailsResponse : ECAPIResponseBase {

	NSMutableArray* _messages;
	ECAPIUserConversation* _conversation;

}

@property (nonatomic,retain) NSMutableArray * messages;                         //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) ECAPIUserConversation * conversation;              //@synthesize conversation=_conversation - In the implementation block
-(id)conversationWithNode:(id)arg1 ;
-(id)messageWithNode:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)setConversation:(ECAPIUserConversation *)arg1 ;
-(ECAPIUserConversation *)conversation;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
@end

