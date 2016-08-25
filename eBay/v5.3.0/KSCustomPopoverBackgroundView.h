/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class UIImage, UIImageView;

@interface KSCustomPopoverBackgroundView : UIPopoverBackgroundView {

	double _arrowOffset;
	unsigned long long _arrowDirection;
	UIImage* _topArrowImage;
	UIImage* _leftArrowImage;
	UIImage* _rightArrowImage;
	UIImage* _bottomArrowImage;
	UIImageView* _arrowImageView;
	UIImageView* _popoverBackgroundImageView;

}

@property (assign,nonatomic) double arrowOffset;                                    //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirection;                     //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,retain) UIImage * topArrowImage;                               //@synthesize topArrowImage=_topArrowImage - In the implementation block
@property (nonatomic,retain) UIImage * leftArrowImage;                              //@synthesize leftArrowImage=_leftArrowImage - In the implementation block
@property (nonatomic,retain) UIImage * rightArrowImage;                             //@synthesize rightArrowImage=_rightArrowImage - In the implementation block
@property (nonatomic,retain) UIImage * bottomArrowImage;                            //@synthesize bottomArrowImage=_bottomArrowImage - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                          //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * popoverBackgroundImageView;              //@synthesize popoverBackgroundImageView=_popoverBackgroundImageView - In the implementation block
+(long long)popoverContentTag;
+(id)popoverContentBgColor;
+(id)popoverContentGuidanceBgColor;
+(BOOL)wantsDefaultContentAppearance;
+(double)arrowHeight;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
-(void)setTopArrowImage:(UIImage *)arg1 ;
-(void)setLeftArrowImage:(UIImage *)arg1 ;
-(void)setBottomArrowImage:(UIImage *)arg1 ;
-(void)setRightArrowImage:(UIImage *)arg1 ;
-(void)setPopoverBackgroundImageView:(UIImageView *)arg1 ;
-(UIImageView *)popoverBackgroundImageView;
-(UIImage *)topArrowImage;
-(UIImage *)bottomArrowImage;
-(UIImage *)leftArrowImage;
-(UIImage *)rightArrowImage;
-(void)removePopoverInteriorShadowForView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
@end

