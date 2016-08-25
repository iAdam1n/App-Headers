/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@protocol ECGOverlayViewDelegate;
@class ECThemedLabel, UIImageView;

@interface ECGOverlayView : UIView {

	BOOL _isAskedToDismiss;
	id<ECGOverlayViewDelegate> _delegate;
	ECThemedLabel* _messageLabel;
	UIImageView* _iconImageView;
	UIImageView* _backgroundImageView;
	double _margin;
	double _spacing;
	double _outDuration;
	double _inDuration;

}

@property (assign) BOOL isAskedToDismiss;                                             //@synthesize isAskedToDismiss=_isAskedToDismiss - In the implementation block
@property (assign,nonatomic,__weak) id<ECGOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ECThemedLabel * messageLabel;                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                             //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                       //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) double margin;                                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) double spacing;                                          //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double outDuration;                                      //@synthesize outDuration=_outDuration - In the implementation block
@property (assign,nonatomic) double inDuration;                                       //@synthesize inDuration=_inDuration - In the implementation block
-(void)autoDismissAfterTimeInterval:(double)arg1 ;
-(double)outDuration;
-(CGSize)getMessageLabelSize;
-(void)setInDuration:(double)arg1 ;
-(void)setOutDuration:(double)arg1 ;
-(double)getIconImageHeight;
-(void)showAfterTimeInterval:(double)arg1 ;
-(void)setIsAskedToDismiss:(BOOL)arg1 ;
-(double)inDuration;
-(void)animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withDelay:(double)arg3 andDuration:(double)arg4 ;
-(void)handleAutoDismissTimer:(id)arg1 ;
-(BOOL)isAskedToDismiss;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ECGOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ECGOverlayViewDelegate>)delegate;
-(UIImageView *)backgroundImageView;
-(ECThemedLabel *)messageLabel;
-(void)setMessage:(id)arg1 ;
-(void)dismiss;
-(void)setMargin:(double)arg1 ;
-(double)margin;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(void)setAttributedMessage:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setMessageLabel:(ECThemedLabel *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

