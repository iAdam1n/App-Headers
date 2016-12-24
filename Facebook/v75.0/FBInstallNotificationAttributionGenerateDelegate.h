/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInAppBasicBeeperContentViewDelegate.h>
#import <Facebook/FBFeedInstallNotificationStoreEntityDelegate.h>
#import <Facebook/FBAttributionGeneratorDelegateProtocol.h>

@class NSString;

@interface FBInstallNotificationAttributionGenerateDelegate : NSObject <FBInAppBasicBeeperContentViewDelegate, FBFeedInstallNotificationStoreEntityDelegate, FBAttributionGeneratorDelegateProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectContentView;
-(void)didDismissContentView;
-(void)didIgnoreContentView;
-(void)attributionDidHappenForStoreEntity:(id)arg1 entityLocations:(id)arg2 pollCount:(int)arg3 userSession:(id)arg4 ;
-(void)attributionAlreadyHappenedForStoreEntity:(id)arg1 entityLocations:(id)arg2 userSession:(id)arg3 ;
-(void)attributionDidFailForStoreEntity:(id)arg1 exception:(id)arg2 ;
-(void)addToLogExtra:(id)arg1 ;
-(void)logEvent:(id)arg1 forStoreEntity:(id)arg2 ;
-(void)didSelectStoreEntity:(id)arg1 ;
-(void)didDismissStoreEntity:(id)arg1 ;
-(void)didIgnoreStoreEntity:(id)arg1 ;
-(void)showDownloadNotification:(id)arg1 userSession:(id)arg2 ;
-(BOOL)showDownloadBeeper:(id)arg1 userSession:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
