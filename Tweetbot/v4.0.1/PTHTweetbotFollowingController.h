/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
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

