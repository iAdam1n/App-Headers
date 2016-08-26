/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBListComponentStateChangeListener;
@class FBListComponentController, FBListComponentThreadLocalScopeKey;

@interface FBListComponentScopeHandle : NSObject {

	id<FBListComponentStateChangeListener> _stateChangeListener;
	BOOL _hasAcquired;
	FBListComponentController* _componentController;
	FBListComponentThreadLocalScopeKey* _key;

}

@property (nonatomic,readonly) FBListComponentController * componentController;              //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) FBListComponentThreadLocalScopeKey * key;                     //@synthesize key=_key - In the implementation block
-(void)updateState:(/*^block*/id)arg1 userInfo:(id)arg2 ;
-(FBListComponentController *)componentController;
-(BOOL)acquireFromComponent:(id)arg1 ;
-(id)initWithStateChangeListener:(id)arg1 key:(id)arg2 componentController:(id)arg3 ;
-(FBListComponentThreadLocalScopeKey *)key;
@end
