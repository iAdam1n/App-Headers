/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@protocol FBMapSnapshotSpecifier;
@class UIImageView, FBShimmeringView, FBRouteCalloutView, FBMapSnapshotRequest;

@interface FBMapSnapshotComponentButton : UIButton {

	UIImageView* _coverImageView;
	UIImageView* _mapPinImageView;
	FBShimmeringView* _shimmeringView;
	FBRouteCalloutView* _startCallout;
	FBRouteCalloutView* _endCallout;
	CGSize _snapshottedSize;
	FBMapSnapshotRequest* _currentRequest;
	id<FBMapSnapshotSpecifier> _specifier;

}

@property (nonatomic,retain) id<FBMapSnapshotSpecifier> specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)_cancelRequestAndReset;
-(void)_resetBackgroundColor;
-(void)didCompleteRequest:(id)arg1 withImage:(CGImageRef)arg2 userInfo:(id)arg3 ;
-(void)revealCalloutInTheCenterWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)revealCalloutsWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(id<FBMapSnapshotSpecifier>)specifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSpecifier:(id<FBMapSnapshotSpecifier>)arg1 ;
@end
