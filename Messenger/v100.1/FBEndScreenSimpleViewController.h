/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBQuicksilverEndViewController.h>

@protocol FBQuicksilverEndViewControllerDelegate;
@class FBQuicksilverEndGameInfo, FBUserSession, UILabel, CAShapeLayer, UIImageView, NSString;

@interface FBEndScreenSimpleViewController : UIViewController <FBQuicksilverEndViewController> {

	FBQuicksilverEndGameInfo* _endGameInfo;
	FBUserSession* _session;
	UILabel* _scoreValue;
	UILabel* _scoreTitle;
	CAShapeLayer* _scoreCircleLayer;
	UIImageView* _replayImageView;
	CAShapeLayer* _replayCircleLayer;
	UILabel* _replayTitle;
	UIImageView* _shareImageView;
	CAShapeLayer* _shareCircleLayer;
	UILabel* _shareTitle;
	id<FBQuicksilverEndViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBQuicksilverEndViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dismissGameShareWithCompletion:(/*^block*/id)arg1 ;
-(void)_didTapReplayButton;
-(void)dismissScoreShareWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissEndViewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithEndGameInfo:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<FBQuicksilverEndViewControllerDelegate>)arg1 ;
-(id<FBQuicksilverEndViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_setScore:(id)arg1 ;
@end
