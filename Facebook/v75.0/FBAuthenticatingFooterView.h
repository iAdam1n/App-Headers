/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIButton;


@protocol FBAuthenticatingFooterView <NSObject,FBAuthenticationViewSecondaryActionsProtocol>
@property (assign,nonatomic) BOOL helpButtonHidden; 
@property (nonatomic,readonly) UIButton * helpButton; 
@property (assign,nonatomic) unsigned long long interfaceType; 
@optional
-(void)setInterfaceType:(unsigned long long)arg1;
-(unsigned long long)interfaceType;

@required
-(UIButton *)helpButton;
-(BOOL)helpButtonHidden;
-(void)setHelpButtonHidden:(BOOL)arg1;

@end
