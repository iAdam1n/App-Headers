/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCrowdsourcingFeatherPlaceViewDelegate;
@class FBLocationMapView, CALayer, FBMemPage, FBItemView;

@interface FBCrowdsourcingFeatherPlaceView : UIView {

	FBLocationMapView* _mapView;
	CALayer* _topMapBorder;
	FBMemPage* _place;
	FBItemView* _itemView;
	id<FBCrowdsourcingFeatherPlaceViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingFeatherPlaceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapMap:(id)arg1 ;
-(void)didTapItemView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 place:(id)arg2 imageDownloader:(id)arg3 delegate:(id)arg4 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBCrowdsourcingFeatherPlaceViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCrowdsourcingFeatherPlaceViewDelegate>)delegate;
@end
