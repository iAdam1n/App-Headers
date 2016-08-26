/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPhotoViewControllerDelegate.h>
#import <Facebook/FBLocationMapViewControllerDelegate.h>

@protocol FBNavigationCoordinator, FBIntentHandler, FBLocationMapViewControllerDelegate, FBPhotoViewControllerDelegate;
@class FBUserSession, NSString;

@interface FBNearbyPlacesPageActionHandler : NSObject <FBPhotoViewControllerDelegate, FBLocationMapViewControllerDelegate> {

	FBUserSession* _session;
	unsigned long long _entryPoint;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id<FBLocationMapViewControllerDelegate> _mapViewControllerDelegate;
	id<FBPhotoViewControllerDelegate> _photoViewControllerDelegate;
	NSString* _analyticsModule;

}

@property (nonatomic,copy) NSString * analyticsModule;                                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;                                     //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) id<FBIntentHandler> intentHandler;                                                     //@synthesize intentHandler=_intentHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBLocationMapViewControllerDelegate> mapViewControllerDelegate;              //@synthesize mapViewControllerDelegate=_mapViewControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoViewControllerDelegate> photoViewControllerDelegate;                  //@synthesize photoViewControllerDelegate=_photoViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)intentTargetTriggerForEntryPoint:(unsigned long long)arg1 ;
-(id<FBIntentHandler>)intentHandler;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(NSString *)analyticsModule;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)displayDirectionsToLocation:(CGSize)arg1 locationName:(id)arg2 ;
-(void)openPageViewControllerForPage:(id)arg1 ;
-(void)performSaveAction:(BOOL)arg1 forPage:(id)arg2 ;
-(id)initWithSession:(id)arg1 analyticsModule:(id)arg2 entryPoint:(unsigned long long)arg3 ;
-(void)openStoryPermalinkViewControllerForStoryFBID:(id)arg1 fallbackURL:(id)arg2 ;
-(void)openPhotoVCWithPhotos:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(void)openPageAboutVC:(id)arg1 ;
-(void)openPageMapVC:(id)arg1 ;
-(void)openPageReviewsVC:(id)arg1 ;
-(void)openPageLikesAndVisitsActivityVC:(id)arg1 ;
-(void)performShareActionForPage:(id)arg1 ;
-(id<FBLocationMapViewControllerDelegate>)mapViewControllerDelegate;
-(void)setMapViewControllerDelegate:(id<FBLocationMapViewControllerDelegate>)arg1 ;
-(id<FBPhotoViewControllerDelegate>)photoViewControllerDelegate;
-(void)setPhotoViewControllerDelegate:(id<FBPhotoViewControllerDelegate>)arg1 ;
@end
