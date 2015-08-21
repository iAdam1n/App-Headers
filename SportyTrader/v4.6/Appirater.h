/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <SportyTrader/SKStoreProductViewControllerDelegate.h>

@protocol AppiraterDelegate;
@class UIAlertView, NSObject, NSString;

@interface Appirater : NSObject <UIAlertViewDelegate, SKStoreProductViewControllerDelegate> {

	UIAlertView* ratingAlert;
	BOOL _openInAppStore;
	NSObject*<AppiraterDelegate> _delegate;

}

@property (nonatomic,retain) UIAlertView * ratingAlert; 
@property (assign,nonatomic) BOOL openInAppStore;                                       //@synthesize openInAppStore=_openInAppStore - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<AppiraterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDaysUntilPrompt:(double)arg1 ;
+(void)setUsesUntilPrompt:(long long)arg1 ;
+(void)setTimeBeforeReminding:(double)arg1 ;
+(void)appLaunched:(BOOL)arg1 ;
+(void)appEnteredForeground:(BOOL)arg1 ;
+(void)setOpenInAppStore:(BOOL)arg1 ;
+(void)appWillResignActive;
+(id)topMostViewController:(id)arg1 ;
+(id)getRootViewController;
+(void)setModalOpen:(BOOL)arg1 ;
+(void)rateApp;
+(void)closeModal;
+(void)setSignificantEventsUntilPrompt:(long long)arg1 ;
+(void)setUsesAnimation:(BOOL)arg1 ;
+(void)setAlwaysUseMainBundle:(BOOL)arg1 ;
+(void)appLaunched;
+(void)userDidSignificantEvent:(BOOL)arg1 ;
+(void)showPrompt;
+(void)setDebug:(BOOL)arg1 ;
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(void)setStatusBarStyle:(long long)arg1 ;
+(id)bundle;
+(void)setAppId:(id)arg1 ;
-(void)setOpenInAppStore:(BOOL)arg1 ;
-(void)setRatingAlert:(UIAlertView *)arg1 ;
-(BOOL)userHasRatedCurrentVersion;
-(void)incrementUseCount;
-(BOOL)ratingConditionsHaveBeenMet;
-(BOOL)connectedToNetwork;
-(void)showRatingAlert;
-(void)incrementSignificantEventCount;
-(void)incrementAndRate:(BOOL)arg1 ;
-(UIAlertView *)ratingAlert;
-(void)hideRatingAlert;
-(void)incrementSignificantEventAndRate:(BOOL)arg1 ;
-(BOOL)userHasDeclinedToRate;
-(BOOL)openInAppStore;
-(void)setDelegate:(NSObject*<AppiraterDelegate>)arg1 ;
-(id)init;
-(NSObject*<AppiraterDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

