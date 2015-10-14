/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusDetailChildController.h>

@class PTHTweetbotStatusActionDrawerView, PTHButton;

@interface PTHTweetbotStatusDetailActionController : PTHTweetbotStatusDetailChildController {

	PTHTweetbotStatusActionDrawerView* _drawerView;
	PTHButton* _favoritesButton;
	PTHButton* _dateButton;
	PTHButton* _retweetsButton;
	PTHButton* _viaButton;
	unsigned long long _favoriteCount;
	unsigned long long _retweetCount;

}
-(void)_updateDate;
-(void)statusWasUpdated;
-(void)_showFavorites:(id)arg1 ;
-(void)_showRetweets:(id)arg1 ;
-(void)_showWebPage:(id)arg1 ;
-(void)_showClient:(id)arg1 ;
-(void)_showClientOptions:(id)arg1 ;
-(void)activityWasUpdated;
-(void)_updateFavoritesCount;
-(void)_updateRetweetsCount;
-(void)_updateVia;
-(void)_updateButton:(id)arg1 withMarkdownTitle:(id)arg2 ;
-(void)loadView;
-(void)_updateButtons;
@end

