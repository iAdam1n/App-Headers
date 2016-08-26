/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MNInboxComposerContainerView, UIView, MNInboxComposerLayout;

@interface MNInboxView : UIView {

	MNInboxComposerContainerView* _composerContainerView;
	UIView* _topBarView;
	UIView* _contentView;
	UIView* _bottomBarView;
	double _topBarHeight;
	double _bottomBarHeight;
	MNInboxComposerLayout* _composerLayout;

}

@property (assign,nonatomic) double topBarHeight;                                                 //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (assign,nonatomic) double bottomBarHeight;                                              //@synthesize bottomBarHeight=_bottomBarHeight - In the implementation block
@property (nonatomic,copy) MNInboxComposerLayout * composerLayout;                                //@synthesize composerLayout=_composerLayout - In the implementation block
@property (nonatomic,readonly) MNInboxComposerContainerView * composerContainerView;              //@synthesize composerContainerView=_composerContainerView - In the implementation block
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)_updateSubviewOrder;
-(void)setComposerView:(id)arg1 ;
-(void)setTopBarHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateLayoutAnimated:(BOOL)arg1 ;
-(void)setBottomBarHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setComposerLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTopBarView:(id)arg1 ;
-(void)setBottomBarView:(id)arg1 ;
-(void)setBottomBarHeight:(double)arg1 ;
-(void)setComposerLayout:(MNInboxComposerLayout *)arg1 ;
-(MNInboxComposerLayout *)composerLayout;
-(MNInboxComposerContainerView *)composerContainerView;
-(void)layoutSubviews;
-(void)setContentView:(id)arg1 ;
-(double)bottomBarHeight;
-(double)topBarHeight;
-(void)setTopBarHeight:(double)arg1 ;
@end
