/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@protocol SASNativeVideoPlaybackViewDelegate;
@class SASNativeVideoPlayerLayerView, UIColor;

@interface SASNativeVideoPlaybackView : UIView {

	BOOL _willHaveBackground;
	BOOL _shouldResizeWithOrientation;
	SASNativeVideoPlayerLayerView* _playerLayerView;
	id<SASNativeVideoPlaybackViewDelegate> _delegate;
	long long _position;
	double _aspectRatio;
	UIColor* _adBackgroundColor;

}

@property (nonatomic,retain) SASNativeVideoPlayerLayerView * playerLayerView;                     //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,nonatomic,__weak) id<SASNativeVideoPlaybackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL willHaveBackground;                                             //@synthesize willHaveBackground=_willHaveBackground - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeWithOrientation;                                    //@synthesize shouldResizeWithOrientation=_shouldResizeWithOrientation - In the implementation block
@property (assign,nonatomic) long long position;                                                  //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double aspectRatio;                                                  //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) UIColor * adBackgroundColor;                                         //@synthesize adBackgroundColor=_adBackgroundColor - In the implementation block
-(void)setPlayerLayerView:(SASNativeVideoPlayerLayerView *)arg1 ;
-(void)configurePlayerLayerView;
-(void)adjustVideoLayerFrameForPortraitOrientationWithAspectRatio;
-(void)orientationChangedToLandscape:(BOOL)arg1 ;
-(BOOL)willHaveBackground;
-(void)setWillHaveBackground:(BOOL)arg1 ;
-(BOOL)shouldResizeWithOrientation;
-(void)setShouldResizeWithOrientation:(BOOL)arg1 ;
-(UIColor *)adBackgroundColor;
-(void)setAdBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(SASNativeVideoPlayerLayerView *)playerLayerView;
-(void)resizePlaybackViewAfterFrameChange:(BOOL)arg1 ;
-(void)configurePlayerLayerViewForPosition:(long long)arg1 andSize:(CGSize)arg2 backgroundColor:(id)arg3 willHaveBackgroundImage:(BOOL)arg4 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SASNativeVideoPlaybackViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SASNativeVideoPlaybackViewDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(void)setAspectRatio:(double)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(double)aspectRatio;
@end

