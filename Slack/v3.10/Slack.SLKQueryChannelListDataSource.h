/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/SLKChannelListDataSource.h>

@class NSArray, SLKDependencies;

@interface Slack.SLKQueryChannelListDataSource : NSObject <SLKChannelListDataSource> {

	 sections;
	 allChannels;
	 channelListItemsBySectionType;
	 slackStore;
	 channelsQuery;
	 directMessagesQuery;
	 privateGroupsQuery;
	 channelQueryFinished;
	 directMessageQueryFinished;
	 privateGroupQueryFinished;
	 isLoading;
	 delegate;
	 dependencies;

}

@property (copy,nonatomic) NSArray * sections; 
@property (copy,nonatomic) NSArray * allChannels; 
@property (assign,__weak,nonatomic) id<SLKDataSourceDelegate> delegate; 
@property (assign,__weak,nonatomic) SLKDependencies * dependencies; 
-(void)featureFlagValueChanged:(id)arg1 ;
-(long long)numberOfRowsForSection:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 dependencies:(id)arg2 ;
-(void)resetDataSource;
-(id)init;
-(void)setDelegate:(id<SLKDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SLKDataSourceDelegate>)delegate;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(SLKDependencies *)dependencies;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)setAllChannels:(NSArray *)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(NSArray *)allChannels;
@end
