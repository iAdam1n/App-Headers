/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, NSString;

@interface T1SULViewController : TFNItemsDataViewController <TFNTwitterAuthenticated> {

	BOOL _onboarding;
	TFNTwitterAccount* _account;
	NSString* _scribePage;
	NSString* _scribeSection;
	/*^block*/id _nextViewBlock;

}

@property (nonatomic,copy) NSString * scribePage;                              //@synthesize scribePage=_scribePage - In the implementation block
@property (nonatomic,copy) NSString * scribeSection;                           //@synthesize scribeSection=_scribeSection - In the implementation block
@property (nonatomic,copy) id nextViewBlock;                                   //@synthesize nextViewBlock=_nextViewBlock - In the implementation block
@property (assign,getter=isOnboarding,nonatomic) BOOL onboarding;              //@synthesize onboarding=_onboarding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                      //@synthesize account=_account - In the implementation block
-(id)scribe;
-(NSString *)scribePage;
-(NSString *)scribeSection;
-(void)setScribePage:(NSString *)arg1 ;
-(void)setScribeSection:(NSString *)arg1 ;
-(id)nextViewBlock;
-(void)_pushNextView;
-(void)categoriesDidUpdate:(id)arg1 ;
-(void)loadCategories;
-(void)setNextViewBlock:(id)arg1 ;
-(BOOL)isOnboarding;
-(void)setOnboarding:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLoad;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

