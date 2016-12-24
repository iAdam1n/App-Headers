/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, UIColor, FBFourRoundedCornerView;

@interface FBAuthenticationRoundedImageView : UIView {

	FBNetworkImageView* _imageView;
	double _cornerRadius;
	UIColor* _ambientColor;
	FBFourRoundedCornerView* _roundedCornerView;

}

@property (nonatomic,retain) UIColor * ambientColor;              //@synthesize ambientColor=_ambientColor - In the implementation block
+(id)imageURLForAccountID:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 cornerRadius:(double)arg2 imageDownloader:(id)arg3 ;
-(id)init;
-(void)layoutSubviews;
-(void)setImageURL:(id)arg1 ;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(UIColor *)ambientColor;
@end
