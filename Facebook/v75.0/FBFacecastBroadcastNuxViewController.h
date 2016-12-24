/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastBroadcastNuxModelDelegate.h>
#import <Facebook/FBFacecastBroadcastNuxViewDelegate.h>
#import <Facebook/FBScenePathHolding.h>
#import <Facebook/FBVideoPlaybackEventListener.h>

@protocol FBFacecastBroadcastNuxViewControllerDelegate;
@class FBUserSession, FBScenePath, FBFacecastBroadcastNuxModel, FBVideoViewManager, FBStreamingEventViewController, FBCrowdNoiseViewController, FBFacecastBroadcastNuxCrowdNoiseStrategy, FBFacecastBroadcastFunnelLogger, FBFacecastBroadcastNuxView, NSString;

@interface FBFacecastBroadcastNuxViewController : UIViewController <FBFacecastBroadcastNuxModelDelegate, FBFacecastBroadcastNuxViewDelegate, FBScenePathHolding, FBVideoPlaybackEventListener> {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBFacecastBroadcastNuxModel* _model;
	FBVideoViewManager* _nuxVideoViewManager;
	FBStreamingEventViewController* _eventsViewController;
	FBCrowdNoiseViewController* _crowdNoiseViewController;
	FBFacecastBroadcastNuxCrowdNoiseStrategy* _crowdNoiseStrategy;
	FBFacecastBroadcastFunnelLogger* _funnelLogger;
	unsigned long long _numPauses;
	unsigned long long _numBackgrounds;
	BOOL _nuxStarted;
	id<FBFacecastBroadcastNuxViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBFacecastBroadcastNuxView * view; 
@property (assign,nonatomic,__weak) id<FBFacecastBroadcastNuxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidStallPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)videoPlaybackController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)endNux;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 funnelLogger:(id)arg3 ;
-(void)facecastBroadcastNuxModelDidSucceedLoading:(id)arg1 ;
-(void)facecastBroadcastNuxModelDidFailLoading:(id)arg1 ;
-(void)facecastBroadcastNuxModel:(id)arg1 shouldDismissEvent:(id)arg2 ;
-(void)facecastBroadcastNuxModel:(id)arg1 shouldTriggerEvent:(id)arg2 ;
-(void)_appDidEnterForeground:(id)arg1 ;
-(void)_appWillTerminate:(id)arg1 ;
-(void)_logNuxAborted;
-(void)_logNuxSkipped;
-(void)_logNuxFinished;
-(void)_logNuxPlaybackFailedWithError:(id)arg1 ;
-(void)facecastBroadcastNuxViewDidTapSkipButton:(id)arg1 ;
-(void)setDelegate:(id<FBFacecastBroadcastNuxViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFacecastBroadcastNuxViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_appDidEnterBackground:(id)arg1 ;
@end
