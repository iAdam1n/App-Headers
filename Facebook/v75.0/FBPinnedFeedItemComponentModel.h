/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPinnedFeedItemModel, FBPinnedFeedItemMountingTracker;
@interface FBPinnedFeedItemComponentModel : NSObject {

	id<FBPinnedFeedItemModel> _model;
	Class _componentProvider;
	id<FBPinnedFeedItemMountingTracker> _mountingTracker;

}

@property (nonatomic,readonly) id<FBPinnedFeedItemModel> model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) Class componentProvider;                                          //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,readonly) id<FBPinnedFeedItemMountingTracker> mountingTracker;              //@synthesize mountingTracker=_mountingTracker - In the implementation block
+(id)newWithModel:(id)arg1 componentProvider:(Class)arg2 mountingTracker:(id)arg3 ;
-(Class)componentProvider;
-(id<FBPinnedFeedItemMountingTracker>)mountingTracker;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<FBPinnedFeedItemModel>)model;
@end
