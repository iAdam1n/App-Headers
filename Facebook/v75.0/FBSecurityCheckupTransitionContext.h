/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface FBSecurityCheckupTransitionContext : NSObject {

	UIView* _sessionSectionView;
	UIView* _alertSectionView;
	UIView* _passwordSectionView;

}

@property (assign,nonatomic,__weak) UIView * sessionSectionView;               //@synthesize sessionSectionView=_sessionSectionView - In the implementation block
@property (assign,nonatomic,__weak) UIView * alertSectionView;                 //@synthesize alertSectionView=_alertSectionView - In the implementation block
@property (assign,nonatomic,__weak) UIView * passwordSectionView;              //@synthesize passwordSectionView=_passwordSectionView - In the implementation block
-(UIView *)sessionSectionView;
-(UIView *)alertSectionView;
-(UIView *)passwordSectionView;
-(void)setSessionSectionView:(UIView *)arg1 ;
-(void)setAlertSectionView:(UIView *)arg1 ;
-(void)setPasswordSectionView:(UIView *)arg1 ;
@end
