/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursorController.h>

@class PTHTweetbotUser;

@interface PTHTweetbotFollowingController : PTHTweetbotCursorController {

	PTHTweetbotUser* _tweetbotUser;
	BOOL _userSelectMode;

}

@property (assign) BOOL userSelectMode;              //@synthesize userSelectMode=_userSelectMode - In the implementation block
-(id)initWithTweetbotUser:(id)arg1 ;
-(id)searchTitle;
-(id)nothingFoundTitle;
-(BOOL)userSelectMode;
-(void)setUserSelectMode:(BOOL)arg1 ;
-(id)modalCancelButtonTitle;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClass;
@end

