/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNGenericFoldedAdminMessageViewDelegate.h>
#import <Messenger/MNGenericUnfoldedAdminMessageViewDelegate.h>

@protocol MNGenericFoldableAdminMessageViewDelegate;
@class UIView, MNGenericUnfoldedAdminMessageView, MNGenericFoldedAdminMessageView, MNGenericFoldableAdminMessageViewModel, UICollectionView, NSString;

@interface MNGenericFoldableAdminMessageView : UIView <MNGenericFoldedAdminMessageViewDelegate, MNGenericUnfoldedAdminMessageViewDelegate> {

	UIView* _viewportView;
	MNGenericUnfoldedAdminMessageView* _unfoldedView;
	MNGenericFoldedAdminMessageView* _foldedView;
	double _unfoldedViewHeight;
	double _foldedViewHeight;
	MNGenericFoldableAdminMessageViewModel* _viewModel;
	long long _viewState;
	id<MNGenericFoldableAdminMessageViewDelegate> _delegate;

}

@property (nonatomic,copy) MNGenericFoldableAdminMessageViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long viewState;                                                      //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) UICollectionView * contentCollectionView; 
@property (assign,nonatomic,__weak) id<MNGenericFoldableAdminMessageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 viewState:(long long)arg3 ;
-(void)setViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_animateViewStateChange;
-(id)initWithFrame:(CGRect)arg1 profileImageDownloader:(id)arg2 imageDownloader:(id)arg3 ;
-(UICollectionView *)contentCollectionView;
-(void)_updateSubviewAlpha;
-(void)_updateSubviewHeights;
-(void)_setInitialFramesForAnimation;
-(void)_setFinalFramesForAnimation;
-(double)_anchorPointHeightDelta;
-(void)genericFoldedAdminMessageViewDidTapUnfoldButton:(id)arg1 ;
-(void)genericUnfoldedAdminMessageViewTapFoldButton:(id)arg1 ;
-(void)genericUnfoldedAdminMessageViewTapCTAButton:(id)arg1 ;
-(id)genericUnfoldedAdminMessageView:(id)arg1 collectionViewCellForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNGenericFoldableAdminMessageViewDelegate>)arg1 ;
-(id<MNGenericFoldableAdminMessageViewDelegate>)delegate;
-(long long)viewState;
-(MNGenericFoldableAdminMessageViewModel *)viewModel;
-(void)setViewModel:(MNGenericFoldableAdminMessageViewModel *)arg1 ;
@end
