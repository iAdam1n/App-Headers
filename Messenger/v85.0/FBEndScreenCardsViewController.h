/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQuicksilverCardsContainerViewController.h>
#import <Messenger/FBQuicksilverGameSummaryViewControllerDelegate.h>
#import <Messenger/FBQuicksilverMatchOverviewViewControllerDelegate.h>
#import <Messenger/FBModalContainerViewControllerDelegate.h>
#import <Messenger/FBQuicksilverEndViewController.h>

@protocol FBQuicksilverShareOptionsConfiguration, FBQuicksilverReplayGameDelegate;
@class FBQuicksilverGameInfo, FBQuicksilverEndGameInfo, FBUserSession, FBQuicksilverShareImageViewController, NSString;

@interface FBEndScreenCardsViewController : FBQuicksilverCardsContainerViewController <FBQuicksilverGameSummaryViewControllerDelegate, FBQuicksilverMatchOverviewViewControllerDelegate, FBModalContainerViewControllerDelegate, FBQuicksilverEndViewController> {

	FBQuicksilverGameInfo* _gameInfo;
	FBQuicksilverEndGameInfo* _endGameInfo;
	FBUserSession* _session;
	FBQuicksilverShareImageViewController* _shareImageViewController;
	id<FBQuicksilverShareOptionsConfiguration> _shareOptionsConfiguration;
	id<FBQuicksilverReplayGameDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBQuicksilverReplayGameDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dismissModalContainerViewController:(id)arg1 ;
-(id)initWithGameInfo:(id)arg1 endGameInfo:(id)arg2 session:(id)arg3 shareOptionsConfiguration:(id)arg4 ;
-(void)dismissSharePopover;
-(void)gameSummaryViewControllerDidTapToReplayGame:(id)arg1 ;
-(void)gameSummaryViewController:(id)arg1 didTapToShareImage:(id)arg2 ;
-(void)gameSummaryViewController:(id)arg1 restartGameWithSessionInfo:(id)arg2 ;
-(void)quicksilverMatchOverviewViewControllerDidTapPlaySoloButton:(id)arg1 withViewerInfo:(id)arg2 ;
-(void)quicksilverMatchOverviewViewControllerDidTapPlayButton:(id)arg1 withThreadMatchViewModel:(id)arg2 ;
-(void)quicksilverMatchOverviewViewController:(id)arg1 startGameWithSessionInfo:(id)arg2 ;
-(void)setDelegate:(id<FBQuicksilverReplayGameDelegate>)arg1 ;
-(id<FBQuicksilverReplayGameDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
