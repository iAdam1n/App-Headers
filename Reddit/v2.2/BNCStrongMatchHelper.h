/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow;

@interface BNCStrongMatchHelper : NSObject {

	BOOL _requestInProgress;
	BOOL _shouldDelayInstallRequest;
	UIWindow* _secondWindow;

}

@property (nonatomic,retain) UIWindow * secondWindow;                     //@synthesize secondWindow=_secondWindow - In the implementation block
@property (assign,nonatomic) BOOL requestInProgress;                      //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayInstallRequest;              //@synthesize shouldDelayInstallRequest=_shouldDelayInstallRequest - In the implementation block
+(id)strongMatchHelper;
-(void)createStrongMatchWithBranchKey:(id)arg1 ;
-(BOOL)requestInProgress;
-(void)setRequestInProgress:(BOOL)arg1 ;
-(void)setShouldDelayInstallRequest:(BOOL)arg1 ;
-(void)presentSafariVCWithBranchKey:(id)arg1 ;
-(void)setSecondWindow:(UIWindow *)arg1 ;
-(UIWindow *)secondWindow;
-(BOOL)shouldDelayInstallRequest;
@end
