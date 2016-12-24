/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBPaymentsHorizontalSeparatorView, FBNetworkImageView, FBUserSession;

@interface FBPaymentsPurchaseInfoTableViewCell : UITableViewCell {

	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	FBPaymentsHorizontalSeparatorView* _topSeparatorView;
	FBPaymentsHorizontalSeparatorView* _bottomSeparatorView;
	FBNetworkImageView* _networkImageView;
	FBUserSession* _session;
	unsigned long long _separatorMask;

}

@property (assign,nonatomic) unsigned long long separatorMask;              //@synthesize separatorMask=_separatorMask - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 extension:(id)arg2 ;
-(void)setSeparatorMask:(unsigned long long)arg1 ;
-(unsigned long long)separatorMask;
-(void)_configureNetworkImageViewWithUIImage:(id)arg1 ;
-(void)_configureNetworkImageViewWithImageURL:(id)arg1 ;
-(void)_configureNetworkImageViewWithFBPaymentsImage:(id)arg1 ;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 loadingIndicatorFactory:(id)arg3 ;
-(void)configureWithExtension:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setLoadingStatus:(BOOL)arg1 ;
@end
