/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class PTHTweetbotSetupChildController, PTHTweetbotSetupSearchController;

@interface PTHTweetbotSetupController : PTHViewController {

	PTHTweetbotSetupChildController* _childController;
	PTHTweetbotSetupSearchController* _searchController;
	BOOL _delaysSearch;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                    //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL delaysSearch;              //@synthesize delaysSearch=_delaysSearch - In the implementation block
+(void)initialize;
-(void)setDelaysSearch:(BOOL)arg1 ;
-(void)nextStep;
-(BOOL)delaysSearch;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end
