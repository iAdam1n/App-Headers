/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, ECSegmentedView;

@interface ECSlidingActionButtonsView : UIView {

	NSArray* _barButtonItems;
	ECSegmentedView* _wrapperView;

}

@property (nonatomic,retain) ECSegmentedView * wrapperView;              //@synthesize wrapperView=_wrapperView - In the implementation block
@property (nonatomic,retain) NSArray * barButtonItems;                   //@synthesize barButtonItems=_barButtonItems - In the implementation block
-(ECSegmentedView *)wrapperView;
-(void)setWrapperView:(ECSegmentedView *)arg1 ;
-(void)updateWithPinnedView:(id)arg1 ;
-(void)createSubviews;
-(NSArray *)barButtonItems;
-(void)setBarButtonItems:(NSArray *)arg1 ;
@end
