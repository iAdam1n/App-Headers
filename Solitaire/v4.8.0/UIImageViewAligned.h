/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImageView;

@interface UIImageViewAligned : UIImageView {

	BOOL _enableScaleUp;
	BOOL _enableScaleDown;
	int _alignment;
	UIImageView* _realImageView;

}

@property (assign,nonatomic) int alignment;                              //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) BOOL alignLeft; 
@property (assign,nonatomic) BOOL alignRight; 
@property (assign,nonatomic) BOOL alignTop; 
@property (assign,nonatomic) BOOL alignBottom; 
@property (assign,nonatomic) BOOL enableScaleUp;                         //@synthesize enableScaleUp=_enableScaleUp - In the implementation block
@property (assign,nonatomic) BOOL enableScaleDown;                       //@synthesize enableScaleDown=_enableScaleDown - In the implementation block
@property (nonatomic,readonly) UIImageView * realImageView;              //@synthesize realImageView=_realImageView - In the implementation block
-(CGSize)realContentSize;
-(UIImageView *)realImageView;
-(BOOL)alignLeft;
-(void)setAlignLeft:(BOOL)arg1 ;
-(BOOL)alignRight;
-(void)setAlignRight:(BOOL)arg1 ;
-(BOOL)alignTop;
-(void)setAlignTop:(BOOL)arg1 ;
-(BOOL)alignBottom;
-(void)setAlignBottom:(BOOL)arg1 ;
-(BOOL)enableScaleUp;
-(void)setEnableScaleUp:(BOOL)arg1 ;
-(BOOL)enableScaleDown;
-(void)setEnableScaleDown:(BOOL)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(int)alignment;
-(void)commonInit;
@end

