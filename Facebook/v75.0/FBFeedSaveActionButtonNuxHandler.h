/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBHasFeedUnitNuxProtocol.h>
#import <Facebook/FBFeedOutboundClickCoordinatorListener.h>
#import <Facebook/FBFeedUnitNuxPresenterListener.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, FBUserSession, NSString;

@interface FBFeedSaveActionButtonNuxHandler : NSObject <FBHasFeedUnitNuxProtocol, FBFeedOutboundClickCoordinatorListener, FBFeedUnitNuxPresenterListener> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	BOOL _isSave;
	BOOL _isEligibleForFeedSaveActionButtonNux;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEligibleForNux:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(id)storyGraphQLID;
-(id)nuxID;
-(id)triggerIDs;
-(id)nuxMessage;
-(void)nuxPresenterDidPresent:(id)arg1 ;
-(void)nuxPresenterDidDismiss:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)coordinator:(id)arg1 willReturnFromOutboundClickWithIdentifier:(id)arg2 withTimespan:(double)arg3 source:(int)arg4 ;
-(id)identifierForCoordinator:(id)arg1 ;
-(BOOL)_sharedNuxEligibilityWithTimespan:(double)arg1 ;
-(id)_extrasForNuxLogging;
-(BOOL)_isEligibleForNuxWithIdentifier:(id)arg1 withTimespan:(double)arg2 ;
-(id)nuxBody;
-(int)eligibleForTriggerID:(id)arg1 ;
-(id)initWithSession:(id)arg1 unit:(id)arg2 ;
@end
