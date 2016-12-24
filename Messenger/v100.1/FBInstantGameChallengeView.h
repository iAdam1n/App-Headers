/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBInstantGameChallengeHeaderViewDelegate.h>

@protocol FBInstantGameChallengeViewDelegate;
@class FBInstantGameUIMetrics, FBInstantGameChallengeHeaderView, UIView, FBCustomActivityIndicatorView;

@interface FBInstantGameChallengeView : UIView <FBInstantGameChallengeHeaderViewDelegate> {

	FBInstantGameUIMetrics* _metrics;
	FBInstantGameChallengeHeaderView* _headerView;
	UIView* _contentView;
	FBCustomActivityIndicatorView* _loadingIndicator;
	BOOL _showLoadingIndicator;
	id<FBInstantGameChallengeViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicator;                                           //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
-(void)setShowLoadingIndicator:(BOOL)arg1 ;
-(void)tableHeaderViewDidTapCloseButton:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithContentView:(id)arg1 ;
-(void)setDelegate:(id<FBInstantGameChallengeViewDelegate>)arg1 ;
-(id<FBInstantGameChallengeViewDelegate>)delegate;
-(BOOL)showLoadingIndicator;
@end
