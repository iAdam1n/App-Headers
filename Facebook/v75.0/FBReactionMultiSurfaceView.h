/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBTabbedScrollViewDelegate.h>

@protocol FBReactionMultiSurfaceViewDelegate;
@class FBTabbedScrollView, FBReactionSurfaceContentView, UIView, NSArray;

@interface FBReactionMultiSurfaceView : UIView <FBTabbedScrollViewDelegate> {

	FBTabbedScrollView* _tabbedScrollView;
	FBReactionSurfaceContentView* _singleView;
	UIView* _headerView;
	NSArray* _reactionSurfaceRenderConfigs;
	id<FBReactionMultiSurfaceViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * headerView;                                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * reactionSurfaceRenderConfigs;                                //@synthesize reactionSurfaceRenderConfigs=_reactionSurfaceRenderConfigs - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionMultiSurfaceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithHeaderView:(id)arg1 ;
-(long long)badgeCountForSurface:(id)arg1 ;
-(void)setBadgeCount:(long long)arg1 forSurface:(id)arg2 ;
-(void)setReactionSurfaceRenderConfigs:(NSArray *)arg1 ;
-(long long)_indexForSurface:(id)arg1 ;
-(id)_surfaceForIndex:(unsigned long long)arg1 ;
-(void)tabbedScrollView:(id)arg1 didSwitchToIndex:(long long)arg2 ;
-(NSArray *)reactionSurfaceRenderConfigs;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBReactionMultiSurfaceViewDelegate>)arg1 ;
-(id<FBReactionMultiSurfaceViewDelegate>)delegate;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end
