/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBEventsInviteViewControllerDelegate.h>
#import <Facebook/FBEventsLegacyInviteViewControllerDelegate.h>
#import <Facebook/FBProfileSideFeedUnitContentControlling.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, NSString, NSMutableDictionary, FBMemEvent;

@interface FBEventsSideFeedInviteFriendsUnitContentController : NSObject <FBEventsInviteViewControllerDelegate, FBEventsLegacyInviteViewControllerDelegate, FBProfileSideFeedUnitContentControlling> {

	FBUserSession* _session;
	NSString* _presentingEventID;
	NSMutableDictionary* _inviteeCandidatesStatus;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBMemEvent* _event;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNavigationCoordinator:(id)arg1 ;
-(void)inviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 withNote:(id)arg4 ;
-(void)didCancelWithInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)legacyInviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 ;
-(void)didCancelWithLegacyInviteController:(id)arg1 forEventID:(id)arg2 ;
-(id)getUnitNameForAnalytics;
-(id)constructValidModelEdgesFromUnit:(id)arg1 ;
-(id)nodeForEdge:(id)arg1 ;
-(id)trackingStringForEdge:(id)arg1 ;
-(id)copyEdge:(id)arg1 withNewNode:(id)arg2 ;
-(id)sectionTitleForUnit:(id)arg1 ;
-(void)seeMoreButtonTapped;
-(void)_sendInvitesWithSelectedInvitees:(id)arg1 withNote:(id)arg2 ;
-(void)_sendLegacyInvitesWithSelectedInvitees:(id)arg1 ;
-(void)_updateInviteeStatus:(id)arg1 ;
-(id)initWithSession:(id)arg1 presentingEventID:(id)arg2 ;
-(BOOL)hasPrimaryActionBeenTakenForModel:(id)arg1 ;
-(id)subtitleForModel:(id)arg1 ;
-(id)secondarySubtitleForModel:(id)arg1 ;
-(id)successfulSecondarySubtitleForModel:(id)arg1 ;
-(unsigned long long)buttonGlyphNameForModel:(id)arg1 ;
-(id)buttonTextForModel:(id)arg1 ;
-(id)thumbnailURLForModel:(id)arg1 ;
-(const FBGraphQLFieldSet*)includingFieldsQueriedInFieldSet;
-(void)performPrimaryActionForModel:(id)arg1 ;
-(id)urlForModel:(id)arg1 ;
-(id)seeMoreButtonTitle;
-(BOOL)canPerformPrimaryAction:(id)arg1 ;
-(void)setEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
