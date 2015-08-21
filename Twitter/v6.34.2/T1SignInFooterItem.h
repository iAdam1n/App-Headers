/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNFormCustomItem.h>

@protocol T1SignInFooterItemDelegate;
@interface T1SignInFooterItem : TFNFormCustomItem {

	BOOL _showAdvancedSettings;
	BOOL _hideForgotPasswordLink;
	id<T1SignInFooterItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<T1SignInFooterItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showAdvancedSettings;                                   //@synthesize showAdvancedSettings=_showAdvancedSettings - In the implementation block
@property (assign,nonatomic) BOOL hideForgotPasswordLink;                                 //@synthesize hideForgotPasswordLink=_hideForgotPasswordLink - In the implementation block
-(void)setShowAdvancedSettings:(BOOL)arg1 ;
-(void)setHideForgotPasswordLink:(BOOL)arg1 ;
-(BOOL)showAdvancedSettings;
-(BOOL)hideForgotPasswordLink;
-(void)setDelegate:(id<T1SignInFooterItemDelegate>)arg1 ;
-(id)init;
-(id<T1SignInFooterItemDelegate>)delegate;
@end

