/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UITapGestureRecognizer, ASMRAIDCloseButton;

@interface ASMRAIDCloseRegion : UIView {

	id _target;
	SEL _action;
	UITapGestureRecognizer* _closeRegionTapGestRecog;
	ASMRAIDCloseButton* _closeBtn;

}

@property (assign,nonatomic) id target;                                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                                    //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * closeRegionTapGestRecog;              //@synthesize closeRegionTapGestRecog=_closeRegionTapGestRecog - In the implementation block
@property (nonatomic,retain) ASMRAIDCloseButton * closeBtn;                                 //@synthesize closeBtn=_closeBtn - In the implementation block
-(ASMRAIDCloseButton *)closeBtn;
-(id)initWithTarget:(id)arg1 andSelector:(SEL)arg2 inView:(id)arg3 ;
-(void)hideCloseBtn:(BOOL)arg1 ;
-(BOOL)isCloseBtnHidden;
-(UITapGestureRecognizer *)closeRegionTapGestRecog;
-(void)setCloseRegionTapGestRecog:(UITapGestureRecognizer *)arg1 ;
-(void)setCloseBtn:(ASMRAIDCloseButton *)arg1 ;
-(void)dealloc;
-(SEL)action;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end
