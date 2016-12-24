/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardCell.h>
#import <Facebook/FBPageCardProtocol.h>

@protocol FBMemPageInfoCardCellDelegate;
@class FBMemPageInfoCardViewModel, FBPageStackingView, FBLocationMapView, FBWrappingCell_DEPRECATED, FBPageActionableLinkView, UITapGestureRecognizer, FBPageStackingViewHorizontalRule, UIView, NSString;

@interface FBMemPageInfoCardCell : FBMemPageCardCell <FBPageCardProtocol> {

	FBMemPageInfoCardViewModel* _viewModel;
	FBPageStackingView* _stackingView;
	FBLocationMapView* _mapView;
	FBWrappingCell_DEPRECATED* _mapCell;
	FBPageActionableLinkView* _moreInfoView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	FBPageStackingViewHorizontalRule* _horizontalRuleForMapView;
	FBPageStackingViewHorizontalRule* _horizontalRuleForContextItemView;
	UIView* _contextItemView;
	id<FBMemPageInfoCardCellDelegate> _delegate;

}

@property (nonatomic,retain) UIView * contextItemView;                                       //@synthesize contextItemView=_contextItemView - In the implementation block
@property (assign,nonatomic,__weak) id<FBMemPageInfoCardCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCardStyle:(unsigned long long)arg1 topMargin:(double)arg2 bottomMargin:(double)arg3 cardOption:(long long)arg4 backgroundColor:(id)arg5 showBorder:(BOOL)arg6 ;
-(void)setContextItemView:(UIView *)arg1 ;
-(void)_handleMapCellTap:(id)arg1 ;
-(void)_updateMoreInfoCell;
-(void)_updateMapCell;
-(void)_handleMoreInfoCellTap:(id)arg1 ;
-(UIView *)contextItemView;
-(void)setDelegate:(id<FBMemPageInfoCardCellDelegate>)arg1 ;
-(id<FBMemPageInfoCardCellDelegate>)delegate;
-(void)_reload;
-(void)configureWithViewModel:(id)arg1 ;
@end
