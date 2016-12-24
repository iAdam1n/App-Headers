/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBStreamingEventModelDelegate.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>

@protocol FBStreamingEventModel;
@class NSString;

@interface FBVideoHomeLiveCommentsStreamComponentController : CKComponentController <FBStreamingEventModelDelegate, FBComponentControllerWorkingRangeListening, FBComponentControllerWorkingRangeListenerProviding> {

	id<FBStreamingEventModel> _eventModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(id)_commentsStreamComponent;
-(void)willUnmount;
-(void)_stopFetchingComments;
-(BOOL)_shouldShowEvent:(id)arg1 ;
-(void)facecastEventsModel:(id)arg1 didLoadEvent:(id)arg2 ;
-(void)facecastEventsModel:(id)arg1 didDeliverEvent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)facecastEventsModelFailedToLoadEvent:(id)arg1 ;
-(void)facecastEventsModelRefreshed:(id)arg1 ;
-(void)facecastEventsModel:(id)arg1 refreshedAtIndex:(unsigned long long)arg2 ;
-(void)componentExitedFocusedRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 previousTransitions:(id)arg3 ;
-(void)componentEnteredFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedFullImpressionRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(id)workingRangeListenerForComponent:(id)arg1 ;
@end
