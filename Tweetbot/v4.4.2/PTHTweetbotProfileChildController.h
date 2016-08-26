/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@protocol PTHTweetbotUserProfileControllerProtocol;
@class PTHTweetbotUser, UIViewController, NSLayoutConstraint;

@interface PTHTweetbotProfileChildController : PTHViewController {

	BOOL _loaded;
	PTHTweetbotUser* _user;
	UIViewController*<PTHTweetbotUserProfileControllerProtocol> _mainProfileController;
	NSLayoutConstraint* _unloadedConstraint;

}

@property (nonatomic,readonly) PTHTweetbotUser * user;                                                                              //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PTHTweetbotUserProfileControllerProtocol> mainProfileController;              //@synthesize mainProfileController=_mainProfileController - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                                                           //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * unloadedConstraint;                                                        //@synthesize unloadedConstraint=_unloadedConstraint - In the implementation block
-(id)initWithTweetbotUser:(id)arg1 ;
-(void)setMainProfileController:(UIViewController*<PTHTweetbotUserProfileControllerProtocol>)arg1 ;
-(void)setUnloadedConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)unloadedConstraint;
-(void)userWasUpdated;
-(UIViewController*<PTHTweetbotUserProfileControllerProtocol>)mainProfileController;
-(PTHTweetbotUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)isLoaded;
-(void)setLoaded:(BOOL)arg1 ;
@end
