/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionStoreStateModifying;
@interface FBGraphQLConnectionStoreAsynchronousModificationPair : NSObject {

	id<FBGraphQLConnectionStoreStateModifying> _modification;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) id<FBGraphQLConnectionStoreStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) id callback;                                                          //@synthesize callback=_callback - In the implementation block
-(id)initWithModification:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)callback;
-(id<FBGraphQLConnectionStoreStateModifying>)modification;
@end
