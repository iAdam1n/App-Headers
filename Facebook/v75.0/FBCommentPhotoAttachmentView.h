/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <Facebook/FBWebImageViewListener.h>

@class UIImageView, UIActivityIndicatorView, FBMemStoryAttachment, FBWebPhotoView, NSString;

@interface FBCommentPhotoAttachmentView : UIControl <FBWebImageViewListener> {

	UIImageView* _optimisticImageView;
	UIActivityIndicatorView* _activityIndicatorView;
	FBMemStoryAttachment* _storyAttachment;
	FBWebPhotoView* _photoView;

}

@property (nonatomic,retain) FBMemStoryAttachment * storyAttachment;              //@synthesize storyAttachment=_storyAttachment - In the implementation block
@property (nonatomic,readonly) FBWebPhotoView * photoView;                        //@synthesize photoView=_photoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2 ;
-(FBMemStoryAttachment *)storyAttachment;
-(void)setStoryAttachment:(FBMemStoryAttachment *)arg1 ;
-(void)setStoryAttachment:(id)arg1 reuseCurrentContents:(BOOL)arg2 ;
-(void)_setUpOptimisticView:(id)arg1 ;
-(void)_cleanUpPhotoView;
-(void)_setUpPhotoView:(id)arg1 reuseOptimisticContents:(BOOL)arg2 ;
-(void)_cleanUpOptimisticView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBWebPhotoView *)photoView;
@end
