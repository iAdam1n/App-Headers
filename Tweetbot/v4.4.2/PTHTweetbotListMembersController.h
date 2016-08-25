/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursorController.h>

@class PTHTweetbotList, UIBarButtonItem;

@interface PTHTweetbotListMembersController : PTHTweetbotCursorController {

	PTHTweetbotList* _list;
	UIBarButtonItem* _editDoneBarButtonItem;
	UIBarButtonItem* _leftBarButtonItem;

}
-(id)searchTitle;
-(id)nothingFoundTitle;
-(void)toggleMode;
-(void)addMember:(id)arg1 ;
-(id)modalCancelButtonTitle;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(Class)cellClass;
-(id)initWithList:(id)arg1 ;
@end

