/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface FBFavoriteContactBuilder : NSObject {

	NSString* _fbid;
	BOOL _isGroupContact;
	NSNumber* _rank;

}
+(id)favoriteContact;
-(id)withFBID:(id)arg1 ;
-(id)withGroupContactFlag:(BOOL)arg1 ;
-(id)withRank:(id)arg1 ;
-(void)dealloc;
-(id)build;
@end
