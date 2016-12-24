/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:19 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CARROT/CARROT-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, CARViewController, DDMenuController, CARWelcomeViewController, NSDate, NSString;

@interface CARAppDelegate : UIResponder <UIApplicationDelegate> {

	BOOL _stateChangeNeeded;
	UIWindow* _window;
	CARViewController* _mainViewController;
	DDMenuController* _menuViewController;
	CARWelcomeViewController* _welcomeViewController;
	NSDate* _lastCompletionTime;
	NSDate* _timeHappy;
	NSDate* _timeAngry;

}

@property (nonatomic,retain) UIWindow * window;                                             //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) CARViewController * mainViewController;                        //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) DDMenuController * menuViewController;                         //@synthesize menuViewController=_menuViewController - In the implementation block
@property (nonatomic,retain) CARWelcomeViewController * welcomeViewController;              //@synthesize welcomeViewController=_welcomeViewController - In the implementation block
@property (nonatomic,retain) NSDate * lastCompletionTime;                                   //@synthesize lastCompletionTime=_lastCompletionTime - In the implementation block
@property (nonatomic,retain) NSDate * timeHappy;                                            //@synthesize timeHappy=_timeHappy - In the implementation block
@property (nonatomic,retain) NSDate * timeAngry;                                            //@synthesize timeAngry=_timeAngry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWelcomeViewController:(CARWelcomeViewController *)arg1 ;
-(CARWelcomeViewController *)welcomeViewController;
-(BOOL)checkForStateChange;
-(void)presentMainController;
-(void)setLastCompletionTime:(NSDate *)arg1 ;
-(NSDate *)lastCompletionTime;
-(void)setTimeHappy:(NSDate *)arg1 ;
-(NSDate *)timeHappy;
-(void)setTimeAngry:(NSDate *)arg1 ;
-(NSDate *)timeAngry;
-(double)timeHappyThusFar;
-(double)timeAngryThusFar;
-(id)todoArchivePath;
-(double)timeDifferenceSinceLastCompletion;
-(id)stringSinceLastCompletion:(int)arg1 ;
-(void)checkForHappinessAchievements;
-(void)checkForAngrinessAchievements;
-(void)showRootView;
-(void)enablePan;
-(void)disablePan;
-(UIWindow *)window;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(CARViewController *)mainViewController;
-(void)setMainViewController:(CARViewController *)arg1 ;
-(void)showMenu;
-(void)setMenuViewController:(DDMenuController *)arg1 ;
-(DDMenuController *)menuViewController;
@end
