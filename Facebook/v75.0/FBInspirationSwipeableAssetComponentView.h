/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface FBInspirationSwipeableAssetComponentView : UIView {

	long long _state;
	BOOL _rotateAssetToggled;
	BOOL _capturedFromCamera;
	unsigned long long _assetOrientation;

}
-(void)setCapturedAsset:(id)arg1 ;
-(void)setRotateAssetToggled:(id)arg1 ;
-(void)setIsCapturedFromCamera:(id)arg1 ;
-(void)layoutSublayerView;
-(BOOL)_shouldRotateFrameToLeft;
-(BOOL)_shouldRotateFrameToRight;
-(BOOL)_shouldRotateFrameWithOrientation;
-(void)layoutSubviews;
-(void)setCameraState:(id)arg1 ;
@end
