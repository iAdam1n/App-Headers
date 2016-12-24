/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSMutableDictionary, NSString;

@interface FBCrowdsourcingEditsUploadRequest : FBNetworkerRequest {

	NSMutableDictionary* _parameters;
	NSString* _placeID;

}

@property (nonatomic,retain) NSString * placeID;              //@synthesize placeID=_placeID - In the implementation block
-(id)networkRequest;
-(id)_constructHoursDataFromHours:(id)arg1 forType:(id)arg2 ;
-(id)initWithModel:(id)arg1 imageData:(id)arg2 sessionID:(long long)arg3 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
@end
