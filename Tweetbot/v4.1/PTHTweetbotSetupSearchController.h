/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotSetupChildController.h>

@class NSArray, ACAccountStore;

@interface PTHTweetbotSetupSearchController : PTHTweetbotSetupChildController {

	BOOL _delaysSearch;
	NSArray* _acAccounts;
	ACAccountStore* _store;

}

@property (nonatomic,readonly) NSArray * acAccounts;                //@synthesize acAccounts=_acAccounts - In the implementation block
@property (nonatomic,readonly) ACAccountStore * store;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL delaysSearch;                     //@synthesize delaysSearch=_delaysSearch - In the implementation block
-(void)setDelaysSearch:(BOOL)arg1 ;
-(NSArray *)acAccounts;
-(BOOL)delaysSearch;
-(id)colorGroupName;
-(ACAccountStore *)store;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

