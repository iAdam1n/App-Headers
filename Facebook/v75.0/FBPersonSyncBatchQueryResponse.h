/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface FBPersonSyncBatchQueryResponse : FBValueObject <NSCopying> {

	NSDictionary* _syncResponse;
	NSArray* _favoritesResponse;

}

@property (nonatomic,copy,readonly) NSDictionary * syncResponse;              //@synthesize syncResponse=_syncResponse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * favoritesResponse;              //@synthesize favoritesResponse=_favoritesResponse - In the implementation block
-(NSArray *)favoritesResponse;
-(id)initWithSyncResponse:(id)arg1 favoritesResponse:(id)arg2 ;
-(NSDictionary *)syncResponse;
@end
