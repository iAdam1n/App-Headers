/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBStarRatingsQuiesenceTriggerDelegateProtocol.h>
#import <Messenger/FBStarRatingsESRViewControllerDelegate.h>
#import <Messenger/FBStarRatingsViewControllerDelegateProtocol.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBAppService.h>

@protocol FBStarRatingsServiceDelegate, FBStarRatingsTriggering;
@class FBUserSession, FBQueuePerformer, NSArray, FBStarRatingsShowDialogNetworkerRequest, FBStarRatingsViewController, FBStarRatingsESRViewController, FBStarRatingsCompletionNetworkerRequest, UIWindow, NSMutableArray, UIAlertView, FBStarRatingsUserData, NSString, NSSet;

@interface FBStarRatingsService : NSObject <FBNetworkerRequestDelegate, FBStarRatingsQuiesenceTriggerDelegateProtocol, FBStarRatingsESRViewControllerDelegate, FBStarRatingsViewControllerDelegateProtocol, UIAlertViewDelegate, FBAppService> {

	FBUserSession* _session;
	FBQueuePerformer* _queuePerformer;
	NSArray* _smartSignificantEvents;
	NSArray* _navigationSignificantEvents;
	id<FBStarRatingsServiceDelegate> _delegate;
	FBStarRatingsShowDialogNetworkerRequest* _showDialogRequest;
	FBStarRatingsViewController* _controller;
	FBStarRatingsESRViewController* _esrController;
	FBStarRatingsCompletionNetworkerRequest* _completionRequest;
	id<FBStarRatingsTriggering> _trigger;
	UIWindow* _isrWindow;
	UIWindow* _fbWindow;
	NSMutableArray* _remainingTriggers;
	UIAlertView* _esrAlertView;
	FBStarRatingsUserData* _esrUserData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appServiceID; 
@property (nonatomic,copy,readonly) NSSet * appServiceDependencyIDs; 
@property (nonatomic,readonly) unsigned long long serviceStartupLevel; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(unsigned long long)serviceStartupLevel;
-(void)signalAppServiceToHandleInitialSessionIdle;
-(NSString *)appServiceID;
-(NSSet *)appServiceDependencyIDs;
-(void)startAppServiceWithDependencies:(id)arg1 ;
-(void)stopAppServiceWithDependencies:(id)arg1 ;
-(void)displayTrigger:(id)arg1 didTriggerWithUserData:(id)arg2 ;
-(void)okPressedOnESRView;
-(void)cancelPressedOnESRView;
-(BOOL)displayTriggerCanDisplay:(id)arg1 ;
-(id)initWithSession:(id)arg1 smartSignificantEvents:(id)arg2 navigationSignificantEvents:(id)arg3 delegate:(id)arg4 ;
-(void)_rateNow:(id)arg1 ;
-(void)_sendFeedbackNow:(id)arg1 ;
-(void)_rateNextEvent:(id)arg1 ;
-(void)_rateNavigation:(id)arg1 ;
-(void)_restartISR:(id)arg1 ;
-(void)_showESR:(id)arg1 ;
-(void)_forceClearISRState:(id)arg1 ;
-(void)_resetWindows;
-(void)_didFinishEnteringForeground:(id)arg1 ;
-(id)_loadUserData;
-(void)_saveUserData:(id)arg1 ;
-(void)_checkShouldShowDialogWithUserData:(id)arg1 ;
-(void)_sendCompletionRequestWithUserData:(id)arg1 ;
-(BOOL)_isProcessingRequest;
-(void)_beginFlowWithUserData:(id)arg1 ;
-(void)setupRandomTriggers:(id)arg1 delay:(double)arg2 ;
-(void)setupSmartTriggers:(id)arg1 ;
-(void)setupNavigationTriggers:(id)arg1 delay:(double)arg2 ;
-(void)startNextTrigger:(id)arg1 ;
-(void)_showDialogRequest:(id)arg1 didSucceededWithResponse:(id)arg2 ;
-(void)_showISRDialogWithUserData:(id)arg1 ;
-(void)setupSmartTriggersForTesting:(id)arg1 ;
-(void)_showDialogRequestDidFail:(id)arg1 error:(id)arg2 ;
-(void)_completionRequestDidSucceed:(id)arg1 ;
-(void)_completionRequestDidFail;
-(void)navigationModeEventDidOccur;
-(id)latestUserData;
-(void)logAnalyticsEventIfNotLoggedPreviously:(id)arg1 extra:(id)arg2 ;
-(void)_esrSaveStateWithSendToAppStore:(BOOL)arg1 ;
-(void)_handleButtonPressOnESRViewWithSendToAppStore:(BOOL)arg1 ;
-(id)starRatingsViewControllerReviewURL:(id)arg1 ;
-(void)displayTrigger:(id)arg1 didChangeUserData:(id)arg2 ;
-(void)starRatingsViewController:(id)arg1 didDismissWithUserData:(id)arg2 ;
-(void)starRatingsViewController:(id)arg1 hideViewController:(id)arg2 ;
-(id)starRatingsViewControllerAppDisplayName:(id)arg1 ;
-(void)logAnalyticsEventIfNotLoggedPreviously:(id)arg1 ;
-(id)initWithSession:(id)arg1 significantEvents:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

