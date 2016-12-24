/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBHotspotHelperNoWifiAvailableViewDelegate;
@class FBNetworkImageView, UILabel, UIButton;

@interface FBHotspotHelperNoWifiAvailableView : UIView {

	FBNetworkImageView* _noWifiImageView;
	UILabel* _noWifiNearbyLabel;
	UIButton* _reloadButton;
	id<FBHotspotHelperNoWifiAvailableViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBHotspotHelperNoWifiAvailableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapReloadButton;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBHotspotHelperNoWifiAvailableViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBHotspotHelperNoWifiAvailableViewDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
