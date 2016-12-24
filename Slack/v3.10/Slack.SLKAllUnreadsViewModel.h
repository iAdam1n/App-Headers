/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface Slack.SLKAllUnreadsViewModel : NSObject {

	 delegate;
	 dependencies;
	 dataManager;
	 orderedChannels;
	 messagesByChannelIdentifier;
	 channelsMarkedAsRead;
	 newChannelIndices;
	 newIndexPaths;
	 isLoading;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack30SLKAllUnreadsViewModelDelegate_> delegate; 
@property (readonly,nonatomic) long long numberOfChannels; 
@property (assign,nonatomic) BOOL isLoading; 
@property (readonly,nonatomic) NSDate * lastUpdateTimestamp; 
@property (readonly,nonatomic) NSString * lastUpdateTimestampString; 
@property (readonly,nonatomic) BOOL hasMoreToLoad; 
-(BOOL)channelIsRead:(id)arg1 ;
-(void)toggleChannelReadState:(id)arg1 ;
-(long long)numberOfMessagesForChannelAtIndex:(long long)arg1 hideReadMessages:(BOOL)arg2 ;
-(id)messageAtIndexPath:(id)arg1 hideReadMessages:(BOOL)arg2 ;
-(id)channelAtIndex:(long long)arg1 ;
-(BOOL)hasMoreToLoad;
-(void)fetchMoreMessages;
-(NSDate *)lastUpdateTimestamp;
-(NSString *)lastUpdateTimestampString;
-(long long)messagesCount:(long long)arg1 hideReadMessages:(BOOL)arg2 ;
-(id)messagesForChannel:(id)arg1 hideReadMessages:(BOOL)arg2 ;
-(BOOL)isChannelMarkedAsRead:(id)arg1 ;
-(BOOL)isChannelAtIndexMarkedAsRead:(long long)arg1 ;
-(void)markChannelAsRead:(id)arg1 ;
-(void)markChannelAsUnread:(id)arg1 ;
-(long long)numberOfChannels;
-(id)init;
-(void)setDelegate:(id<_TtP5Slack30SLKAllUnreadsViewModelDelegate_>)arg1 ;
-(id<_TtP5Slack30SLKAllUnreadsViewModelDelegate_>)delegate;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(id)initWithDependencies:(id)arg1 ;
@end
