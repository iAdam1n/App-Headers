/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class PTHTweetbotAccount, PTHStaticSectionCell, NSString;

@interface PTHTweetbotServiceLoginSettingsController : PTHViewController <UITextFieldDelegate> {

	PTHTweetbotAccount* _account;
	Class _serviceClass;
	PTHStaticSectionCell* _usernameCell;
	PTHStaticSectionCell* _passwordCell;
	BOOL _isLoggedIn;

}

@property (nonatomic,readonly) BOOL isLoggedIn;                     //@synthesize isLoggedIn=_isLoggedIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 serviceClass:(Class)arg2 ;
-(BOOL)isLoggedIn;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateUI;
-(void)login;
@end

