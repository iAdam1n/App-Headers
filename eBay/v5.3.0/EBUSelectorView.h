/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class EBUSegmentedControl, UIView;

@interface EBUSelectorView : UIView {

	BOOL _performActionEvenIfSelectionUnchanged;
	EBUSegmentedControl* _segmentedControl;
	long long _selectionIndex;
	id _target;
	SEL _action;
	UIView* _hiliteView;
	UIView* _dividerView;

}

@property (nonatomic,retain) UIView * hiliteView;                                     //@synthesize hiliteView=_hiliteView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                    //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) EBUSegmentedControl * segmentedControl;                  //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) long long selectionIndex;                                //@synthesize selectionIndex=_selectionIndex - In the implementation block
@property (assign,nonatomic,__weak) id target;                                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL performActionEvenIfSelectionUnchanged;              //@synthesize performActionEvenIfSelectionUnchanged=_performActionEvenIfSelectionUnchanged - In the implementation block
-(void)setDividerView:(UIView *)arg1 ;
-(UIView *)dividerView;
-(void)setSelectionIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPerformActionEvenIfSelectionUnchanged:(BOOL)arg1 ;
-(long long)selectionIndex;
-(void)setSelectionIndex:(long long)arg1 ;
-(double)hiliteWidth;
-(void)updateHiliteView;
-(UIView *)hiliteView;
-(BOOL)performActionEvenIfSelectionUnchanged;
-(void)setHiliteView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setTitles:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)commonInit;
-(EBUSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(EBUSegmentedControl *)arg1 ;
-(void)segmentedControlAction:(id)arg1 ;
@end

