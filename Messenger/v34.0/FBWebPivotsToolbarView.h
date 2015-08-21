/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBBrowserNavigationTitleViewDelegate.h>

@protocol FBWebPivotsToolbarViewDelegate;
@class FBUserSession, UIView, UIButton, FBBrowserNavigationTitleView;

@interface FBWebPivotsToolbarView : UIView <FBBrowserNavigationTitleViewDelegate> {

	FBUserSession* _session;
	id<FBWebPivotsToolbarViewDelegate> _delegate;
	unsigned long long _state;
	UIView* _backgroundView;
	UIView* _shadowView;
	UIButton* _backButton;
	UIButton* _forwardButton;
	FBBrowserNavigationTitleView* _navigationTitleView;
	UIButton* _shareButton;
	UIButton* _closeButton;
	FBWebPivotsToolbarViewMetrics* _metrics;

}

@property (nonatomic,retain) FBUserSession * session;                                         //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebPivotsToolbarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) FBWebPivotsToolbarViewMetrics* metrics;                          //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                             //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                           //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;                                        //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) FBBrowserNavigationTitleView * navigationTitleView;              //@synthesize navigationTitleView=_navigationTitleView - In the implementation block
@property (nonatomic,retain) UIButton * shareButton;                                          //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                          //@synthesize closeButton=_closeButton - In the implementation block
+(void)setEnabled:(BOOL)arg1 forButton:(id)arg2 ;
+(double)toolbarHeight;
-(void)setShareButton:(UIButton *)arg1 ;
-(void)navigationTitleViewSubtitleClicked:(id)arg1 ;
-(UIButton *)forwardButton;
-(FBBrowserNavigationTitleView *)navigationTitleView;
-(void)_backButtonAction:(id)arg1 ;
-(void)_forwardButtonAction:(id)arg1 ;
-(void)animateToFullPosition;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)setForwardButton:(UIButton *)arg1 ;
-(void)setNavigationTitleView:(FBBrowserNavigationTitleView *)arg1 ;
-(void)setDelegate:(id<FBWebPivotsToolbarViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<FBWebPivotsToolbarViewDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(FBWebPivotsToolbarViewMetrics*)metrics;
-(void)setCloseButton:(UIButton *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(UIButton *)closeButton;
-(void)_closeButtonAction:(id)arg1 ;
-(UIButton *)backButton;
-(UIButton *)shareButton;
-(void)_shareButtonAction:(id)arg1 ;
-(void)setMetrics:(FBWebPivotsToolbarViewMetrics*)arg1 ;
@end

