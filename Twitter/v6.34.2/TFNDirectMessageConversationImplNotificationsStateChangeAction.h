/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TFNDirectMessageConversationImpl;

@interface TFNDirectMessageConversationImplNotificationsStateChangeAction : NSOperation {

	BOOL _notificationsState;
	TFNDirectMessageConversationImpl* _conversation;

}

@property (nonatomic,retain) TFNDirectMessageConversationImpl * conversation;              //@synthesize conversation=_conversation - In the implementation block
+(id)notificationsStateChangeRequestsByConversationID;
-(id)initWithConversation:(id)arg1 notificationsState:(BOOL)arg2 ;
-(void)_updateNotificationsForConversation:(id)arg1 ;
-(void)main;
-(void)setConversation:(TFNDirectMessageConversationImpl *)arg1 ;
-(TFNDirectMessageConversationImpl *)conversation;
@end
