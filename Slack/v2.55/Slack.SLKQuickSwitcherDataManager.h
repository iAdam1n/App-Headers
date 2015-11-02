/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface Slack.SLKQuickSwitcherDataManager : NSObject {

	 isFiltered;
	 previousFilterText;
	 allChannels;
	 allGroups;
	 allUsers;
	 mentionsAndUnreadsRowData;
	 filteredRowData;
	 filteredNotMemberRowData;
	 filteredTeamData;
	 channelMemberPredicate;
	 userPredicate;
	 channelNotMemberPredicate;
	 channelComponentPredicate;
	 userLastnamePredicate;
	 groupComponentPredicate;
	 channelNotMemeberComponentPredicate;
	 botPredicate;
	 allChannelMemberPredicate;
	 allUserPredicate;
	 allGroupPredicate;
	 allChannelNotMemberPredicate;
	 allBotPredicate;
	 channelsWithMentionsPredciate;
	 groupsWithMentionsPredicate;
	 directMessagesPredicate;
	 botMessagesPredicate;
	 unreadChannelsPredicate;
	 unreadGroupsPredicate;
	 teamPredicate;
	 teamComponentPredicate;

}

@property (assign,nonatomic) BOOL isFiltered; 
@property (copy,nonatomic) NSArray * mentionsAndUnreadsRowData; 
@property (copy,nonatomic) NSArray * filteredRowData; 
@property (copy,nonatomic) NSArray * filteredNotMemberRowData; 
@property (copy,nonatomic) NSArray * filteredTeamData; 
+(id)SLKQuickSwitcherDataUpdated;
-(id)firstRowItemGhostText:(id)arg1 ;
-(NSArray *)mentionsAndUnreadsRowData;
-(void)setMentionsAndUnreadsRowData:(NSArray *)arg1 ;
-(NSArray *)filteredRowData;
-(void)setFilteredRowData:(NSArray *)arg1 ;
-(NSArray *)filteredNotMemberRowData;
-(void)setFilteredNotMemberRowData:(NSArray *)arg1 ;
-(NSArray *)filteredTeamData;
-(void)setFilteredTeamData:(NSArray *)arg1 ;
-(void)channelArchived;
-(void)loadInitialData:(/*^block*/id)arg1 ;
-(void)filterQuickSwitcherRows:(id)arg1 ;
-(id)firstRowItem;
-(long long)filteredRowCount;
-(long long)loadedRowCount;
-(void)resetCache;
-(void)dealloc;
-(id)init;
-(BOOL)isFiltered;
-(void)setIsFiltered:(BOOL)arg1 ;
-(void)clearData;
@end
