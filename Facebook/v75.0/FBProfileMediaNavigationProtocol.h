/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBProfileMediaDataPack, FBProfileMediaDependencyPack;


@protocol FBProfileMediaNavigationProtocol <NSObject>
@property (assign,nonatomic,__weak) id<FBUpdateUIViewControllerStateHandler> updateUIViewControllerStateHandler; 
@property (nonatomic,copy,readonly) FBProfileMediaDataPack * dataPack; 
@property (nonatomic,readonly) FBProfileMediaDependencyPack * dependencyPack; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@required
+(id)createViewController:(id)arg1 dependencyPack:(id)arg2;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(id)checkValidation;
-(id<FBUpdateUIViewControllerStateHandler>)updateUIViewControllerStateHandler;
-(void)setUpdateUIViewControllerStateHandler:(id)arg1;
-(FBProfileMediaDataPack *)dataPack;
-(FBProfileMediaDependencyPack *)dependencyPack;

@end
