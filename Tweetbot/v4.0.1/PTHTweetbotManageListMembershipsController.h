/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotLoadingTableViewController.h>

@class PTHTweetbotUser, PTHTweetbotListsCursor, NSMutableArray, UIBarButtonItem;

@interface PTHTweetbotManageListMembershipsController : PTHTweetbotLoadingTableViewController {

	PTHTweetbotUser* _user;
	PTHTweetbotListsCursor* _listsCursor;
	NSMutableArray* _addedLists;
	NSMutableArray* _changedLists;
	BOOL _loadedMemberships;
	UIBarButtonItem* _saveBarButtonItem;

}
+(Class)cellClass;
-(id)initWithTweetbotUser:(id)arg1 ;
-(void)configure:(id)arg1 forItem:(id)arg2 ;
-(void)loadDataIfNeeded:(BOOL)arg1 ;
-(void)save;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end

