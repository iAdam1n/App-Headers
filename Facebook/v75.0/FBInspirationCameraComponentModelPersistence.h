/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInspirationCameraComponentModelChangedListener.h>

@class FBUserSession, FBComposerInspirationBootstrapContent, NSString, NSArray;

@interface FBInspirationCameraComponentModelPersistence : NSObject <FBInspirationCameraComponentModelChangedListener> {

	FBUserSession* _userSession;
	FBComposerInspirationBootstrapContent* _bootstrapContent;
	NSString* _mostRecentlyViewedInspirationID;
	NSArray* _displayContentsFromMostRecentlyOpenedCTA;

}

@property (nonatomic,copy,readonly) NSString * mostRecentlyViewedInspirationID;                      //@synthesize mostRecentlyViewedInspirationID=_mostRecentlyViewedInspirationID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * displayContentsFromMostRecentlyOpenedCTA;              //@synthesize displayContentsFromMostRecentlyOpenedCTA=_displayContentsFromMostRecentlyOpenedCTA - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInspirationUpdateHandler:(id)arg1 ;
-(void)inspirationCameraComponentModelChangedFromPreviousModel:(id)arg1 toCurrentModel:(id)arg2 ;
-(NSArray *)displayContentsFromMostRecentlyOpenedCTA;
-(NSString *)mostRecentlyViewedInspirationID;
-(id)initWithSession:(id)arg1 ;
@end
