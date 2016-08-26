/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBBackstageCaptionViewDelegate.h>
#import <Facebook/FBWebImageViewLayoutDelegate.h>

@class FBBackstageAsset, FBBackstageCaptionView, FBBackstageVideoController, FBBackstageVideoView, FBWebImageView, NSString;

@interface FBBackstagePublisherCardView : UIView <FBBackstageCaptionViewDelegate, FBWebImageViewLayoutDelegate> {

	FBBackstageAsset* _backstageAsset;
	FBBackstageCaptionView* _captionView;
	FBBackstageVideoController* _videoController;
	FBBackstageVideoView* _videoView;
	FBWebImageView* _webImageView;
	BOOL _visible;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (nonatomic,copy) NSString * caption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)imageView:(id)arg1 contentRectInsideMaskView:(id)arg2 imageSize:(CGSize)arg3 ;
-(void)toggleEditingCaption;
-(void)captionChanged:(id)arg1 ;
-(void)captionViewDidDismissKeyboard:(id)arg1 ;
-(void)stopEditingCaption;
-(void)_checkVideoPlayState;
-(id)initWithAsset:(id)arg1 session:(id)arg2 videoController:(id)arg3 ;
-(id)clonedPhotoView;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
@end
