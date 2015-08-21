/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursorController.h>

@class PTHTweetbotSuggestedCategory;

@interface PTHTweetbotSuggestedCategoryController : PTHTweetbotCursorController {

	PTHTweetbotSuggestedCategory* _suggestedCategory;
	BOOL _userSelectMode;

}

@property (assign) BOOL userSelectMode;              //@synthesize userSelectMode=_userSelectMode - In the implementation block
-(id)searchTitle;
-(BOOL)userSelectMode;
-(void)setUserSelectMode:(BOOL)arg1 ;
-(id)initWithSuggestedCategory:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClass;
-(void)viewDidLoad;
@end

