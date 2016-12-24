/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMLAppInterstitialViewResponder;
@class FBImageDownloader, UIImageView, UILabel, FBMLFriendsFacepileView, UIButton, FBMLHitTestSloppyButton, NSString, NSArray;

@interface FBMLAppInterstitialView : UIView {

	FBImageDownloader* _imageDownloader;
	UIImageView* _logoImageView;
	UIImageView* _titleImageView;
	UILabel* _facebookAttributionLabel;
	UILabel* _descriptionLabel;
	FBMLFriendsFacepileView* _friendsFacepileView;
	UIButton* _getAppButton;
	UIButton* _previewButton;
	FBMLHitTestSloppyButton* _closeButton;
	NSString* _sessionUserUUID;
	NSArray* _friends;
	id<FBMLAppInterstitialViewResponder> _responder;

}

@property (nonatomic,copy) NSString * sessionUserUUID;                                           //@synthesize sessionUserUUID=_sessionUserUUID - In the implementation block
@property (nonatomic,copy) NSArray * friends;                                                    //@synthesize friends=_friends - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLAppInterstitialViewResponder> responder;              //@synthesize responder=_responder - In the implementation block
-(id)initWithImageDownloader:(id)arg1 ;
-(void)_didTapGetAppButton;
-(void)_didTapCloseButton;
-(NSString *)sessionUserUUID;
-(void)_didTapPreviewButton;
-(void)setSessionUserUUID:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setResponder:(id<FBMLAppInterstitialViewResponder>)arg1 ;
-(id<FBMLAppInterstitialViewResponder>)responder;
-(void)setFriends:(NSArray *)arg1 ;
-(NSArray *)friends;
@end
