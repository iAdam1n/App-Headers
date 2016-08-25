/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UIImage, UIImageView, NSMutableArray;

@interface CustomImageNavBar : UINavigationBar {

	BOOL _isInPopover;
	UIImage* _barImage;
	UIImageView* _barImageView;
	NSMutableArray* _observedObjects;
	CGPoint _contentOffset;
	UIEdgeInsets _imageInsets;

}

@property (nonatomic,retain) NSMutableArray * observedObjects;              //@synthesize observedObjects=_observedObjects - In the implementation block
@property (nonatomic,retain) UIImage * barImage;                            //@synthesize barImage=_barImage - In the implementation block
@property (nonatomic,retain) UIImageView * barImageView;                    //@synthesize barImageView=_barImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                      //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                         //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) BOOL isInPopover;                              //@synthesize isInPopover=_isInPopover - In the implementation block
+(void)applyTitleStyleToLabel:(id)arg1 ;
+(void)applyDoubleTitleStyleToTitle:(id)arg1 Subtitle:(id)arg2 ;
-(void)setBarImage:(UIImage *)arg1 ;
-(UIImageView *)barImageView;
-(void)restyleNavItem:(id)arg1 ;
-(void)setObservedObjects:(NSMutableArray *)arg1 ;
-(void)_restyleNavItem:(id)arg1 ;
-(void)addSelfAsObserverOf:(id)arg1 keyPath:(id)arg2 ;
-(void)clearObserved;
-(UIImage *)barImage;
-(void)setBarImageView:(UIImageView *)arg1 ;
-(NSMutableArray *)observedObjects;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setItems:(id)arg1 ;
-(long long)_backgroundBackdropStyle;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)commonInit;
-(void)setIsInPopover:(BOOL)arg1 ;
-(BOOL)isInPopover;
@end

