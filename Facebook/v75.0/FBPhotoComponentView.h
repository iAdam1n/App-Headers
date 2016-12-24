/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIImageView.h>
#import <Facebook/FBWebImageViewListener.h>

@protocol FBPhotoComponentViewDelegate;
@class FBWebPhotoView, FBPhotoComponentViewSpecifier, UIImage, FBWebImageRetryPlaceholderView, NSString;

@interface FBPhotoComponentView : UIImageView <FBWebImageViewListener> {

	FBWebPhotoView* _photoView;
	FBPhotoComponentViewSpecifier* _specifier;
	UIImage* _shadowImage;
	FBWebImageRetryPlaceholderView* _retryPlaceholderView;
	id<FBPhotoComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotoComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)optimizedImageFlagForSpecifier:(id)arg1 size:(CGSize)arg2 ;
+(CGRect)_photoViewRectForBounds:(CGRect)arg1 renderShadow:(BOOL)arg2 ;
+(UIEdgeInsets)shadowInsets;
-(id)displayedImage;
-(id)viewToOpenPhotoVC;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(id)updateSourceInfo:(id)arg1 ;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(id)cloneViewWithInfo:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPhotoComponentViewDelegate>)arg1 ;
-(id<FBPhotoComponentViewDelegate>)delegate;
-(id)accessibilityIdentifier;
-(BOOL)isAccessibilityElement;
-(void)setSpecifier:(id)arg1 ;
@end
