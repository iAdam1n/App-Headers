/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNButton;

@interface MNAuthenticationOptionsButtonsContainerView : UIView {

	MNButton* _loginWithFacebookButton;
	MNButton* _notOnFacebookButton;

}

@property (nonatomic,readonly) MNButton * loginWithFacebookButton;              //@synthesize loginWithFacebookButton=_loginWithFacebookButton - In the implementation block
@property (nonatomic,readonly) MNButton * notOnFacebookButton;                  //@synthesize notOnFacebookButton=_notOnFacebookButton - In the implementation block
-(void)_layoutButton:(id)arg1 yOffset:(double)arg2 ;
-(MNButton *)loginWithFacebookButton;
-(MNButton *)notOnFacebookButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

