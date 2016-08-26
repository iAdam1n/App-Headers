/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBQuicksilverCardsContainerViewController.h>
#import <Facebook/FBQuicksilverGameSummaryDelegate.h>
#import <Facebook/FBQuicksilverEndViewController.h>

@protocol FBQuicksilverReplayGameDelegate;
@class FBQuicksilverGameInfo, FBQuicksilverEndGameInfo, FBUserSession, NSString;

@interface FBEndScreenCardsViewController : FBQuicksilverCardsContainerViewController <FBQuicksilverGameSummaryDelegate, FBQuicksilverEndViewController> {

	FBQuicksilverGameInfo* _gameInfo;
	FBQuicksilverEndGameInfo* _endGameInfo;
	FBUserSession* _session;
	id<FBQuicksilverReplayGameDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBQuicksilverReplayGameDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithGameInfo:(id)arg1 endGameInfo:(id)arg2 session:(id)arg3 ;
-(void)gameSummaryViewDidTapToReplayGame:(id)arg1 ;
-(void)setDelegate:(id<FBQuicksilverReplayGameDelegate>)arg1 ;
-(id<FBQuicksilverReplayGameDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
