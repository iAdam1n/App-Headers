/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBShimmeringView, NSArray, UICollectionView;

@interface FBNearbyPlacesHScrollFilterBar : UIView {

	UIView* _backgroundView;
	UIView* _bottomBorder;
	FBShimmeringView* _inProgressContainerView;
	NSArray* _inProgressPills;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 solidBackground:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
-(void)setMode:(unsigned long long)arg1 ;
@end
