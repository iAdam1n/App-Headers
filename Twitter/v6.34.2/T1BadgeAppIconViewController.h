/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNViewController.h>
#import <Twitter/TFNHTMLTextViewDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class UIImageView, UILabel, TFNHTMLTextView, TFNButton, TFNTwitterAccount, UIView, NSString;

@interface T1BadgeAppIconViewController : TFNViewController <TFNHTMLTextViewDelegate, TFNTwitterAuthenticated> {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	TFNHTMLTextView* _bodyTextView;
	TFNButton* _button;
	TFNTwitterAccount* _account;
	UIImageView* _badgeImageView;
	UIView* _containerView;

}

@property (nonatomic,readonly) UIImageView * badgeImageView;              //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                    //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                 //@synthesize account=_account - In the implementation block
+(id)_bodyTextAttributes;
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(void)_buttonTapped;
-(void)_refreshView;
-(BOOL)_needsAppBadgeFix;
-(void)htmlTextView:(id)arg1 didTapLink:(id)arg2 ;
-(void)htmlTextViewHandleUserAccessibilityTap:(id)arg1 ;
-(UIImageView *)badgeImageView;
-(UIView *)containerView;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

