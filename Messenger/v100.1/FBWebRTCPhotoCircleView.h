/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBShapeView, MNProfileImageView;

@interface FBWebRTCPhotoCircleView : UIView {

	UIImageView* _messengerBadgeImageView;
	FBShapeView* _messengerBadgeBackground;
	MNProfileImageView* _photoView;

}

@property (nonatomic,retain) MNProfileImageView * photoView;              //@synthesize photoView=_photoView - In the implementation block
-(void)showMessengerBadge:(BOOL)arg1 resizeFactor:(double)arg2 avatarImageDecorator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPhotoView:(MNProfileImageView *)arg1 ;
-(MNProfileImageView *)photoView;
@end
