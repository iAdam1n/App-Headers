/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent, FBLineComponent;

@interface FIGImageContentComponent : CKComponent {

	CKComponent* _imageComponent;
	CKComponent* _contentComponent;
	CKComponent* _accessoryActionComponent;
	UIEdgeInsets _contentInsets;
	CGSize _imageSize;
	CGSize _actualImageSize;
	double _minimumHeight;
	double _topCapHeightOffset;
	double _bottomBaselineOffset;
	unsigned long long _hairlinePosition;
	unsigned long long _hairlineAlignment;
	FBLineComponent* _topHairlineComponent;
	FBLineComponent* _bottomHairlineComponent;

}
+(id)newWithImageComponent:(id)arg1 imageSize:(CGSize)arg2 contentComponent:(id)arg3 accessoryActionComponent:(id)arg4 contentInsets:(UIEdgeInsets)arg5 options:(const FIGImageContentComponentOptions*)arg6 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
