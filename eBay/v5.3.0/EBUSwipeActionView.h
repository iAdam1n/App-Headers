/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class EBUSwipeActionDrawer, NSLayoutConstraint, NSArray;

@interface EBUSwipeActionView : UIView {

	unsigned long long _position;
	EBUSwipeActionDrawer* _view;
	unsigned long long _direction;
	unsigned long long _appearance;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) EBUSwipeActionDrawer * view;                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                       //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) unsigned long long appearance;                      //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) NSArray * items; 
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                 //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;              //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;               //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) unsigned long long position;                        //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) double totalWidth; 
-(void)setStaticButtonWidth:(double)arg1 ;
-(void)setUseDynamicButtonWidths:(BOOL)arg1 ;
-(void)updatePositionConstraints;
-(void)setWidth:(double)arg1 animated:(BOOL)arg2 ;
-(void)setWidth:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setHeight:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setupActionItems:(id)arg1 direction:(unsigned long long)arg2 appearance:(unsigned long long)arg3 ;
-(double)totalWidth;
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(EBUSwipeActionDrawer *)view;
-(void)setView:(EBUSwipeActionDrawer *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(unsigned long long)appearance;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(void)setWidth:(double)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAppearance:(unsigned long long)arg1 ;
-(void)setupConstraints;
@end
