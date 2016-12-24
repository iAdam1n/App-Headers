/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
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
