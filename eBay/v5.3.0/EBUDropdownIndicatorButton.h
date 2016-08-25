/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EBUActionButton.h>

@protocol EBUDropdownIndicatorButtonDelegate;
@class UIImageView, NSObject;

@interface EBUDropdownIndicatorButton : EBUActionButton {

	BOOL _animateChevronOnTap;
	BOOL _isDropdownShowing;
	BOOL _centerTitle;
	BOOL _showDropdownIndicator;
	UIImageView* _chevronImageView;
	NSObject*<EBUDropdownIndicatorButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<EBUDropdownIndicatorButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showDropdownIndicator;                                                 //@synthesize showDropdownIndicator=_showDropdownIndicator - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;                                             //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (assign,nonatomic) BOOL animateChevronOnTap;                                                   //@synthesize animateChevronOnTap=_animateChevronOnTap - In the implementation block
@property (assign,nonatomic) BOOL isDropdownShowing;                                                     //@synthesize isDropdownShowing=_isDropdownShowing - In the implementation block
@property (assign,nonatomic) BOOL centerTitle;                                                           //@synthesize centerTitle=_centerTitle - In the implementation block
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(void)handleTouchUpInside;
-(void)setIsDropdownShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showDropdownIndicator:(BOOL)arg1 withDelegate:(id)arg2 ;
-(void)setIsDropdownShowing:(BOOL)arg1 ;
-(BOOL)animateChevronOnTap;
-(void)setAnimateChevronOnTap:(BOOL)arg1 ;
-(BOOL)isDropdownShowing;
-(BOOL)centerTitle;
-(void)setCenterTitle:(BOOL)arg1 ;
-(BOOL)showDropdownIndicator;
-(void)setShowDropdownIndicator:(BOOL)arg1 ;
-(UIImageView *)chevronImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<EBUDropdownIndicatorButtonDelegate>)arg1 ;
-(NSObject*<EBUDropdownIndicatorButtonDelegate>)delegate;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
@end

