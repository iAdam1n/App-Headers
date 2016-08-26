/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SellingCategoryPathBarProtocol;
@class NSMutableArray, UIScrollView, UIImageView, UIFont, NSString;

@interface BaseSellingCategoryPathBar : UIView <UIScrollViewDelegate> {

	BOOL _flashInProgress;
	NSMutableArray* _buttons;
	UIScrollView* _scrollView;
	UIImageView* _leftScrollCap;
	UIImageView* _rightScrollCap;
	double _maxScrollX;
	id<SellingCategoryPathBarProtocol> _delegate;
	long long _selectedLevel;
	UIFont* _buttonFont;

}

@property (nonatomic,retain) NSMutableArray * buttons;                                        //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * leftScrollCap;                                     //@synthesize leftScrollCap=_leftScrollCap - In the implementation block
@property (nonatomic,retain) UIImageView * rightScrollCap;                                    //@synthesize rightScrollCap=_rightScrollCap - In the implementation block
@property (assign,nonatomic) double maxScrollX;                                               //@synthesize maxScrollX=_maxScrollX - In the implementation block
@property (assign,nonatomic) long long selectedLevel;                                         //@synthesize selectedLevel=_selectedLevel - In the implementation block
@property (assign,nonatomic) BOOL flashInProgress;                                            //@synthesize flashInProgress=_flashInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<SellingCategoryPathBarProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * buttonFont;                                             //@synthesize buttonFont=_buttonFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)selectLevel:(long long)arg1 scroll:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateLabelsWithFlash:(BOOL)arg1 buttonText:(id)arg2 categoryNamePath:(id)arg3 leafCategory:(BOOL)arg4 ;
-(void)setSelectedLevel:(long long)arg1 ;
-(void)setFlashInProgress:(BOOL)arg1 ;
-(UIImageView *)leftScrollCap;
-(void)setLeftScrollCap:(UIImageView *)arg1 ;
-(UIImageView *)rightScrollCap;
-(void)setRightScrollCap:(UIImageView *)arg1 ;
-(void)fadeOut:(id)arg1 ;
-(BOOL)flashInProgress;
-(void)setAllButtonsTitleGray;
-(double)maxScrollX;
-(long long)selectedLevel;
-(void)setAllButtonsTitleBlue;
-(id)buttonWithText:(id)arg1 ;
-(void)animateCapViewsForOffset:(CGPoint)arg1 ;
-(void)flashLabels;
-(void)buttonTouched:(id)arg1 ;
-(void)setMaxScrollX:(double)arg1 ;
-(void)fadeIn:(id)arg1 ;
-(void)updateLabelsWithFlash:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SellingCategoryPathBarProtocol>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id<SellingCategoryPathBarProtocol>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(UIFont *)buttonFont;
-(void)setButtonFont:(UIFont *)arg1 ;
@end
