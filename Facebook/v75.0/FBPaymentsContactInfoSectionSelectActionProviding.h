/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsContactInfoSectionSelectActionProviding <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldHideMakeAsDefaultSection; 
@required
-(void)selectContactData:(id)arg1 withTotalNumberOfContacts:(long long)arg2;
-(BOOL)shouldHideMakeAsDefaultSection;
-(void)setShouldHideMakeAsDefaultSection:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end
