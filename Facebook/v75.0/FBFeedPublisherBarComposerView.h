/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@protocol FBIntentHandler;
@class UILabel, FBWebImageView, FBUserSession, NSString;

@interface FBFeedPublisherBarComposerView : UIControl {

	UILabel* _prefilledLabel;
	FBWebImageView* _profilePicture;
	double _photoPadding;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	NSString* _composerSourceType;
	NSString* _composerContentOrigin;

}

@property (nonatomic,copy) NSString * composerSourceType;                 //@synthesize composerSourceType=_composerSourceType - In the implementation block
@property (nonatomic,copy) NSString * composerContentOrigin;              //@synthesize composerContentOrigin=_composerContentOrigin - In the implementation block
-(void)setComposerSourceType:(NSString *)arg1 ;
-(void)setComposerContentOrigin:(NSString *)arg1 ;
-(NSString *)composerSourceType;
-(NSString *)composerContentOrigin;
-(id)_createProfilePicture;
-(void)_didTapProfilePicture;
-(id)initWithPhotoPadding:(double)arg1 fillerText:(id)arg2 composerSourceType:(id)arg3 composerContentOrigin:(id)arg4 session:(id)arg5 intentHandler:(id)arg6 ;
-(void)updateProfilePictureURL:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
@end
