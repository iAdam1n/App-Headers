/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusCursorController.h>

@class PTHTweetbotSavedSearch;

@interface PTHTweetbotStatusSearchController : PTHTweetbotStatusCursorController {

	PTHTweetbotSavedSearch* _savedSearch;

}

@property (nonatomic,readonly) PTHTweetbotSavedSearch * savedSearch;              //@synthesize savedSearch=_savedSearch - In the implementation block
-(PTHTweetbotSavedSearch *)savedSearch;
-(id)initWithAccount:(id)arg1 query:(id)arg2 resultType:(id)arg3 ;
-(id)initWithSavedSearch:(id)arg1 ;
-(id)searchTitle;
-(id)modalCancelButtonTitle;
-(void)save:(id)arg1 ;
@end
