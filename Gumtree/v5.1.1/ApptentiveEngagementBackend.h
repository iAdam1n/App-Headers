/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSMutableDictionary;

@interface ApptentiveEngagementBackend : NSObject {

	NSData* _engagementManifestJSON;
	NSMutableDictionary* _engagementTargets;
	NSMutableDictionary* _engagementInteractions;

}

@property (nonatomic,retain) NSMutableDictionary * engagementTargets;                   //@synthesize engagementTargets=_engagementTargets - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * engagementInteractions;              //@synthesize engagementInteractions=_engagementInteractions - In the implementation block
@property (nonatomic,retain) NSData * engagementManifestJSON;                           //@synthesize engagementManifestJSON=_engagementManifestJSON - In the implementation block
+(id)cachedTargetsStoragePath;
+(id)cachedInteractionsStoragePath;
+(id)stringByEscapingCodePointSeparatorCharactersInString:(id)arg1 ;
+(id)codePointForVendor:(id)arg1 interactionType:(id)arg2 event:(id)arg3 ;
-(BOOL)engageApptentiveAppEvent:(id)arg1 ;
-(void)presentInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canShowInteractionForLocalEvent:(id)arg1 ;
-(BOOL)engageLocalEvent:(id)arg1 userInfo:(id)arg2 customData:(id)arg3 extendedData:(id)arg4 fromViewController:(id)arg5 ;
-(BOOL)canShowInteractionForCodePoint:(id)arg1 ;
-(void)resetUpgradeVersionInfo;
-(BOOL)invalidateInteractionCacheIfNeeded;
-(void)updateVersionInfo;
-(void)invalidateInteractionCache;
-(BOOL)shouldRetrieveNewEngagementManifest;
-(NSMutableDictionary *)engagementTargets;
-(NSMutableDictionary *)engagementInteractions;
-(id)interactionForEvent:(id)arg1 ;
-(id)interactionForInvocations:(id)arg1 ;
-(void)codePointWasEngaged:(id)arg1 ;
-(void)interactionWasEngaged:(id)arg1 ;
-(void)presentUpgradeMessageInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentEnjoymentDialogInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentRatingDialogInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentMessageCenterInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentAppStoreRatingInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentSurveyInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentTextModalInteraction:(id)arg1 fromViewController:(id)arg2 ;
-(void)presentNavigateToLinkInteraction:(id)arg1 ;
-(void)checkForEngagementManifest;
-(id)allEngagementInteractions;
-(NSData *)engagementManifestJSON;
-(void)setEngagementTargets:(NSMutableDictionary *)arg1 ;
-(void)setEngagementInteractions:(NSMutableDictionary *)arg1 ;
-(void)didReceiveNewTargets:(id)arg1 andInteractions:(id)arg2 maxAge:(double)arg3 ;
-(void)setEngagementManifestJSON:(NSData *)arg1 ;
-(BOOL)engageCodePoint:(id)arg1 fromInteraction:(id)arg2 userInfo:(id)arg3 customData:(id)arg4 extendedData:(id)arg5 fromViewController:(id)arg6 ;
-(void)codePointWasSeen:(id)arg1 ;
-(void)interactionWasSeen:(id)arg1 ;
-(id)init;
@end
