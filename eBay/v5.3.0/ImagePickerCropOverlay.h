/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class SPUserResizableView, UIView;

@interface ImagePickerCropOverlay : UIView {

	BOOL _isHidden;
	SPUserResizableView* _cropGridView;
	UIView* _cropAreaView;

}

@property (nonatomic,retain) SPUserResizableView * cropGridView;              //@synthesize cropGridView=_cropGridView - In the implementation block
@property (nonatomic,retain) UIView * cropAreaView;                           //@synthesize cropAreaView=_cropAreaView - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                   //@synthesize isHidden=_isHidden - In the implementation block
-(void)setupView;
-(void)setAnchorImage:(id)arg1 ;
-(CGRect)cropAreaFrameForScale:(double)arg1 ;
-(void)hideOverlay;
-(void)setMinCropWidth:(double)arg1 ;
-(void)setMinCropHeight:(double)arg1 ;
-(UIView *)cropAreaView;
-(SPUserResizableView *)cropGridView;
-(void)setCropAreaView:(UIView *)arg1 ;
-(void)setCropGridView:(SPUserResizableView *)arg1 ;
-(void)resetBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)showOverlay;
@end
