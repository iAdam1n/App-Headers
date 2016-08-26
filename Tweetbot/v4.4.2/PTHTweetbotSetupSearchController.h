/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
