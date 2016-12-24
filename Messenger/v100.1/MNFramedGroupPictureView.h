/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNFramedGroupPictureViewDelegate;
@class UIImageView, UITapGestureRecognizer, UIImage;

@interface MNFramedGroupPictureView : UIView {

	UIImageView* _groupImageView;
	UIImageView* _groupImageOverlayView;
	UIImageView* _authorProfileImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNFramedGroupPictureViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNFramedGroupPictureViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * groupImage; 
@property (nonatomic,retain) UIImage * authorProfileImage; 
-(void)_didPerformTap:(id)arg1 ;
-(UIImage *)groupImage;
-(void)setGroupImage:(UIImage *)arg1 ;
-(UIImage *)authorProfileImage;
-(void)setAuthorProfileImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNFramedGroupPictureViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFramedGroupPictureViewDelegate>)delegate;
@end
