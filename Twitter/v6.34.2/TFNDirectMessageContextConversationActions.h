/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNDirectMessageContextConversationActions <NSObject>
@property (nonatomic,readonly) id<TFNDirectMessageConversation> conversation; 
@required
-(void)deleteMessage:(id)arg1;
-(BOOL)validateConversationName:(id)arg1;
-(id)validConversationNameWithString:(id)arg1;
-(void)markEntryAsSpam:(id)arg1;
-(void)unmarkEntryAsSpam:(id)arg1;
-(void)addUsers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)rename:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateReadOnlyState:(BOOL)arg1;
-(void)refresh;
-(id<TFNDirectMessageConversation>)conversation;
-(void)markAsRead;
-(void)enableNotifications;
-(void)disableNotifications;
-(void)sendMessage:(id)arg1 completion:(/*^block*/id)arg2;

@end
