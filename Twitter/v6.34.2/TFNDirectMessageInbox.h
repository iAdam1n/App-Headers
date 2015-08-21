/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSArray;


@protocol TFNDirectMessageInbox <TFNDirectMessageObject,TFNDirectMessagePaginated>
@property (nonatomic,readonly) NSArray * allConversations; 
@property (nonatomic,readonly) unsigned long long countOfUnseenConversations; 
@property (nonatomic,readonly) unsigned long long countOfUnreadConversations; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,retain) id<NSCoding> session; 
@required
-(NSArray *)allConversations;
-(unsigned long long)countOfUnreadConversations;
-(unsigned long long)countOfUnseenConversations;
-(BOOL)isEmpty;
-(BOOL)isLoaded;
-(id<NSCoding>)session;
-(void)setSession:(id)arg1;

@end

