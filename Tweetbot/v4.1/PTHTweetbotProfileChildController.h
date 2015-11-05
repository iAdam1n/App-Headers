/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)setLoaded:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)isLoaded;
@end

