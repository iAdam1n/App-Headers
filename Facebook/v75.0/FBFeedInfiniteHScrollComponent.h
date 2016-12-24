/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUserSession, NSString, FBFeedHScrollComponent;

@interface FBFeedInfiniteHScrollComponent : CKCompositeComponent {

	FBFeedInfiniteHScrollCursorInformation _tailCursorInfo;
	FBFeedInfiniteHScrollCursorInformation _headCursorInfo;
	/*^block*/id _afterQueryFactory;
	/*^block*/id _startQueryFactory;
	/*^block*/id _responseProcessor;
	const FBGraphQLFieldSetRef _edgeFieldSet;
	/*^block*/id _shouldLoadMore;
	FBUserSession* _session;
	unsigned long long _numberOfEdges;
	NSString* _perfLoggingEventUnitTypeName;
	NSString* _perfLoggingEventIdentifier;
	unsigned long long _networkRequestThresholdInSeconds;
	FBFeedHScrollComponent* _hScrollComponent;

}
+(id)newWithInitialConnection:(id)arg1 connectionConfig:(const FBFeedInfiniteHScrollComponentConnectionConfig*)arg2 options:(FBFeedInfiniteHScrollOptions)arg3 style:(FBHScrollComponentStyle)arg4 toolbox:(id)arg5 ;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)totalNumberOfEdges;
-(void)updateStateForCursorType:(unsigned long long)arg1 withEndReason:(unsigned long long)arg2 lastCompletedLoadIdentifier:(unsigned long long)arg3 ;
-(void)updateStateForCursorType:(unsigned long long)arg1 WithNewEdges:(const vector<FBFeedInfiniteHScrollEdge, std::__1::allocator<FBFeedInfiniteHScrollEdge> >*)arg2 cursor:(id)arg3 hasMoreContent:(BOOL)arg4 lastCompletedLoadIdentifier:(unsigned long long)arg5 ;
-(void)updateEdge:(id)arg1 withHandle:(id)arg2 ;
@end
