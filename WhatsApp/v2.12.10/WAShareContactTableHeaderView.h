/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView;

@interface WAShareContactTableHeaderView : UIView {

	UILabel* _nameLabel;
	UIImageView* _profilePhotoImageView;
	UIImageView* _checkmarkImageView;
	UIView* _checkmarkBackgroundView;
	BOOL _profilePhotoSharingEnabled;

}

@property (assign,nonatomic) BOOL profilePhotoSharingEnabled;              //@synthesize profilePhotoSharingEnabled=_profilePhotoSharingEnabled - In the implementation block
-(void)configureWithNameSharingUnit:(id)arg1 profilePhotoSharingUnit:(id)arg2 ;
-(BOOL)profilePhotoSharingEnabled;
-(void)photoTapped:(id)arg1 ;
-(void)setProfilePhotoSharingEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
