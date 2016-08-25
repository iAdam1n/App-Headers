/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString, UIImage, UILabel, UIImageView, UIView;

@interface EBUStatusBannerView : UIView {

	NSAttributedString* _text;
	UIImage* _flagImage;
	UILabel* _label;
	UIImageView* _flagImageView;
	UIView* _leftPadView;
	UIView* _rightPadView;
	UIView* _containerView;

}

@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * flagImageView;              //@synthesize flagImageView=_flagImageView - In the implementation block
@property (nonatomic,retain) UIView * leftPadView;                     //@synthesize leftPadView=_leftPadView - In the implementation block
@property (nonatomic,retain) UIView * rightPadView;                    //@synthesize rightPadView=_rightPadView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * flagImage;                      //@synthesize flagImage=_flagImage - In the implementation block
-(void)setFlagImage:(UIImage *)arg1 ;
-(UIImage *)flagImage;
-(UIImageView *)flagImageView;
-(void)setFlagImageView:(UIImageView *)arg1 ;
-(UIView *)leftPadView;
-(void)setLeftPadView:(UIView *)arg1 ;
-(UIView *)rightPadView;
-(void)setRightPadView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

