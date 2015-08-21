/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class TFNTwitterUser, TFNTwitterUserExtendedProfile, TFNTwitterUserBusinessProfile, NSString, UIColor, TFNTwitterPlace, TFNTwitterEntitySet, TFNTwitterEntityURL, UIImage, NSNumber, NSArray;


@protocol T1ProfileDataSource <NSObject>
@property (nonatomic,readonly) TFNTwitterUser * user; 
@property (nonatomic,readonly) TFNTwitterUserExtendedProfile * extendedProfile; 
@property (nonatomic,readonly) TFNTwitterUserBusinessProfile * businessProfile; 
@property (nonatomic,copy,readonly) NSString * displayUsername; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,readonly) UIColor * profileLinkColor; 
@property (nonatomic,copy,readonly) NSString * location; 
@property (nonatomic,readonly) TFNTwitterPlace * structuredLocation; 
@property (nonatomic,copy,readonly) NSString * bio; 
@property (nonatomic,readonly) TFNTwitterEntitySet * bioEntities; 
@property (nonatomic,copy,readonly) NSString * url; 
@property (nonatomic,readonly) TFNTwitterEntityURL * entityURL; 
@property (nonatomic,readonly) UIImage * avatarImage; 
@property (nonatomic,readonly) UIImage * bannerImage; 
@property (nonatomic,readonly) NSString * bannerImageSourceURL; 
@property (getter=isViewingOwnProfile,nonatomic,readonly) BOOL viewingOwnProfile; 
@property (nonatomic,retain) id<TFNTwitterStatusSocialContext> socialContext; 
@property (getter=isVerifiedAccount,nonatomic,readonly) BOOL verifiedAccount; 
@property (getter=isProtectedAccount,nonatomic,readonly) BOOL protectedAccount; 
@property (getter=isSuspendedAccount,nonatomic,readonly) BOOL suspendedAccount; 
@property (getter=isTwitterAlertsInstitution,nonatomic,readonly) BOOL twitterAlertsInstitution; 
@property (getter=isUserRelationshipReady,nonatomic,readonly) BOOL userRelationshipReady; 
@property (getter=isFollowingViewer,nonatomic,readonly) BOOL followingViewer; 
@property (getter=isFollowedByViewer,nonatomic,readonly) BOOL followedByViewer; 
@property (getter=isMutedByViewer,nonatomic,readonly) BOOL mutedByViewer; 
@property (getter=isBlockedByViewer,nonatomic,readonly) BOOL blockedByViewer; 
@property (getter=isBlockingViewer,nonatomic,readonly) BOOL blockingViewer; 
@property (getter=isTwitterAlertsActivatedByViewer,nonatomic,readonly) BOOL twitterAlertsActivatedByViewer; 
@property (getter=isViewerDeviceFollowing,nonatomic,readonly) BOOL viewerDeviceFollowing; 
@property (nonatomic,readonly) BOOL viewerCanDM; 
@property (nonatomic,readonly) BOOL hasPendingFollowRequest; 
@property (getter=isDataReady,nonatomic,readonly) BOOL dataReady; 
@property (nonatomic,readonly) NSNumber * tweetCount; 
@property (nonatomic,readonly) NSNumber * mediaTweetCount; 
@property (nonatomic,readonly) NSNumber * favoriteTweetCount; 
@property (nonatomic,readonly) NSNumber * followerCount; 
@property (nonatomic,readonly) NSNumber * followingCount; 
@property (nonatomic,readonly) NSNumber * followerRequestCount; 
@property (nonatomic,copy,readonly) NSArray * userRecommendations; 
@property (nonatomic,copy,readonly) NSArray * clusterFollowRecommendations; 
@required
-(NSNumber *)tweetCount;
-(TFNTwitterEntityURL *)entityURL;
-(TFNTwitterEntitySet *)bioEntities;
-(BOOL)isViewingOwnProfile;
-(TFNTwitterUserExtendedProfile *)extendedProfile;
-(NSNumber *)followerCount;
-(NSNumber *)followingCount;
-(BOOL)isMutedByViewer;
-(BOOL)isProtectedAccount;
-(BOOL)isFollowedByViewer;
-(NSNumber *)followerRequestCount;
-(UIImage *)avatarImage;
-(TFNTwitterUserBusinessProfile *)businessProfile;
-(NSArray *)userRecommendations;
-(void)invalidateDataForced:(BOOL)arg1;
-(void)reloadRelationship;
-(NSArray *)clusterFollowRecommendations;
-(BOOL)isDataReady;
-(void)invalidateData;
-(void)requestClusterFollowRecommendationsIfNeeded;
-(UIColor *)profileLinkColor;
-(UIImage *)bannerImage;
-(NSString *)bannerImageSourceURL;
-(id<TFNTwitterStatusSocialContext>)socialContext;
-(void)setSocialContext:(id)arg1;
-(BOOL)isVerifiedAccount;
-(BOOL)isSuspendedAccount;
-(BOOL)isTwitterAlertsInstitution;
-(BOOL)isUserRelationshipReady;
-(BOOL)isFollowingViewer;
-(BOOL)isBlockedByViewer;
-(BOOL)isBlockingViewer;
-(BOOL)isTwitterAlertsActivatedByViewer;
-(BOOL)isViewerDeviceFollowing;
-(BOOL)viewerCanDM;
-(BOOL)hasPendingFollowRequest;
-(NSNumber *)mediaTweetCount;
-(NSNumber *)favoriteTweetCount;
-(TFNTwitterPlace *)structuredLocation;
-(NSString *)url;
-(NSString *)location;
-(TFNTwitterUser *)user;
-(NSString *)displayUsername;
-(NSString *)fullName;
-(NSString *)username;
-(NSString *)bio;

@end

