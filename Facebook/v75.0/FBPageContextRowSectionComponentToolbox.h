/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBPageSession, FBScenePath, FBPageViewController;


@protocol FBPageContextRowSectionComponentToolbox
@property (nonatomic,readonly) FBPageSession * pageSession; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (nonatomic,__weak,readonly) id<FBMemPageCardControllerDelegate> pageCardControllerDelegate; 
@property (nonatomic,__weak,readonly) FBPageViewController * pageViewController; 
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler; 
@required
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(FBPageSession *)pageSession;
-(id<FBMemPageCardControllerDelegate>)pageCardControllerDelegate;
-(FBPageViewController *)pageViewController;

@end
