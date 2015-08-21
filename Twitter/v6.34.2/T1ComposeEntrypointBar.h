/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNButton, UIView, TFNTwitterAccount, UIViewController, NSString;

@interface T1ComposeEntrypointBar : UIView <TFNTwitterAuthenticated> {

	TFNButton* _composeButton;
	TFNButton* _cameraButton;
	TFNButton* _galleryButton;
	UIView* _divider;
	unsigned long long _type;
	UIView* _cameraSubdivider;
	UIView* _writeSubdivider;
	TFNTwitterAccount* _account;
	UIViewController* _containingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * containingViewController;              //@synthesize containingViewController=_containingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                     //@synthesize account=_account - In the implementation block
+(unsigned long long)composeBarTypeForAccount:(id)arg1 ;
-(id)scribePage;
-(void)_composeButtonPressed:(id)arg1 ;
-(void)_composeCameraButtonPressed:(id)arg1 ;
-(void)_composeGalleryButtonPressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(UIViewController *)containingViewController;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 type:(unsigned long long)arg2 ;
@end

