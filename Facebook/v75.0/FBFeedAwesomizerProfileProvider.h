/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBFeedAwesomizerProfileProviderListenerAnnouncer;


@protocol FBFeedAwesomizerProfileProvider <NSObject>
@property (nonatomic,readonly) FBFeedAwesomizerProfileProviderListenerAnnouncer * listenerAnnouncer; 
@required
-(BOOL)canLoadMore;
-(FBFeedAwesomizerProfileProviderListenerAnnouncer *)listenerAnnouncer;
-(void)loadProfilesAtTailIfPossible:(long long)arg1;
-(long long)indexOfProfile:(id)arg1;
-(id)analyticsInformation;
-(BOOL)profileIsSelected:(id)arg1;
-(id)initializeOrResetConnectionControllerWithSortMode:(id)arg1 filterMode:(id)arg2 secondarySubscribeStatusFilter:(id)arg3 search:(id)arg4;
-(void)useController:(id)arg1;

@end
