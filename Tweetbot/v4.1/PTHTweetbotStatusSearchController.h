/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
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

