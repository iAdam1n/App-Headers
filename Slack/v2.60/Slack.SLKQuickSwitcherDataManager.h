/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/SLKFetchedDataControllerDelegate.h>

@class NSArray;

@interface Slack.SLKQuickSwitcherDataManager : NSObject <SLKFetchedDataControllerDelegate> {

	 isFiltered;
	 previousFilterText;
	 dataController;
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
	 dmsPredicate;
	 groupsWithMentionsPredicate;
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
-(void)insertRowsAtIndexPaths:(id)arg1 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 ;
-(void)configureDataController;
-(id)firstRowItemGhostText:(id)arg1 ;
-(NSArray *)mentionsAndUnreadsRowData;
-(void)setMentionsAndUnreadsRowData:(NSArray *)arg1 ;
-(NSArray *)filteredRowData;
-(void)setFilteredRowData:(NSArray *)arg1 ;
-(NSArray *)filteredNotMemberRowData;
-(void)setFilteredNotMemberRowData:(NSArray *)arg1 ;
-(NSArray *)filteredTeamData;
-(void)setFilteredTeamData:(NSArray *)arg1 ;
-(void)resetDataController;
-(void)channelArchived;
-(id)allChannels;
-(id)allUsers;
-(id)allDMs;
-(void)filterQuickSwitcherRows:(id)arg1 ;
-(id)firstRowItem;
-(long long)filteredRowCount;
-(long long)loadedRowCount;
-(id)allGroups;
-(void)resetCache;
-(void)dealloc;
-(id)init;
-(void)beginUpdates;
-(void)endUpdates;
-(BOOL)isFiltered;
-(void)setIsFiltered:(BOOL)arg1 ;
-(void)clearData;
-(void)deleteRowsAtIndexPaths:(id)arg1 ;
@end

