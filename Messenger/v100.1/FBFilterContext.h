/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFilterContextDelegate;
@class NSMutableDictionary;

@interface FBFilterContext : NSObject {

	NSMutableDictionary* _filterContextDictionary;
	id<FBFilterContextDelegate> _delegate;

}

@property (nonatomic,retain) id<FBFilterAssetManaging> assetManager; 
-(id)getObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)postNotification:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<FBFilterAssetManaging>)assetManager;
-(void)setAssetManager:(id<FBFilterAssetManaging>)arg1 ;
@end
