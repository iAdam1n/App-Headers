/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, FBConnectionSectionComponentSpinnerConfiguration;

@interface FBFundraiserCharitySectionComponentOptions : NSObject {

	BOOL _showSelectButton;
	NSDictionary* _userInfo;
	long long _source;
	FBConnectionSectionComponentSpinnerConfiguration* _spinnerConfig;

}

@property (nonatomic,copy) NSDictionary * userInfo;                                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL showSelectButton;                                                         //@synthesize showSelectButton=_showSelectButton - In the implementation block
@property (assign,nonatomic) long long source;                                                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) FBConnectionSectionComponentSpinnerConfiguration * spinnerConfig;              //@synthesize spinnerConfig=_spinnerConfig - In the implementation block
+(id)defaultOptions;
-(void)setShowSelectButton:(BOOL)arg1 ;
-(void)setSpinnerConfig:(FBConnectionSectionComponentSpinnerConfiguration *)arg1 ;
-(BOOL)showSelectButton;
-(FBConnectionSectionComponentSpinnerConfiguration *)spinnerConfig;
-(NSDictionary *)userInfo;
-(void)setSource:(long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(long long)source;
@end
