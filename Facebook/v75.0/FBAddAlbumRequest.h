/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBAddAlbumRequest : FBNetworkerRequest {

	NSString* _name;
	NSString* _description;
	NSString* _placeTargetID;
	NSString* _privacyJSON;
	NSString* _targetFBID;

}
-(id)networkRequest;
-(id)initWithName:(id)arg1 description:(id)arg2 place:(id)arg3 privacy:(id)arg4 callbackPerformer:(id)arg5 ;
-(void)setTargetFBID:(id)arg1 actorFBID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
