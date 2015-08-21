/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBBugReportViewScreenshotViewDelegate;
@class UIImageView, FBBugReportViewScreenshotOverlayView;

@interface FBBugReportViewScreenshotView : UIView {

	id<FBBugReportViewScreenshotViewDelegate> _delegate;
	UIImageView* _imageView;
	FBBugReportViewScreenshotOverlayView* _overlayView;

}

@property (nonatomic,readonly) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) FBBugReportViewScreenshotOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(id)initWithImage:(id)arg1 delegate:(id)arg2 backgroundColor:(id)arg3 ;
-(void)updateImage:(id)arg1 ;
-(FBBugReportViewScreenshotOverlayView *)overlayView;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UIImageView *)imageView;
@end

